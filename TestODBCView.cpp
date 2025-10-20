
// TestODBCView.cpp: CTestODBCView 클래스의 구현
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
#ifndef SHARED_HANDLERS
#include "TestODBC.h"
#endif

#include "TestODBCDoc.h"
#include "TestODBCView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTestODBCView

IMPLEMENT_DYNCREATE(CTestODBCView, CFormView)

BEGIN_MESSAGE_MAP(CTestODBCView, CFormView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_BN_CLICKED(IDC_BUTTON1, &CTestODBCView::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CTestODBCView::OnBnClickedButton2)
END_MESSAGE_MAP()

// CTestODBCView 생성/소멸

CTestODBCView::CTestODBCView() noexcept
	: CFormView(IDD_TESTODBC_FORM)
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

CTestODBCView::~CTestODBCView()
{
}

void CTestODBCView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_list);
}

BOOL CTestODBCView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CFormView::PreCreateWindow(cs);
}

void CTestODBCView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();

	m_list.InsertColumn(0, _T("이름"), LVCFMT_LEFT, 120);
	m_list.InsertColumn(1, _T("레벨"), LVCFMT_LEFT, 60);
	m_list.InsertColumn(2, _T("골드"), LVCFMT_RIGHT, 80);

}

void CTestODBCView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CTestODBCView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CTestODBCView 진단

#ifdef _DEBUG
void CTestODBCView::AssertValid() const
{
	CFormView::AssertValid();
}

void CTestODBCView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CTestODBCDoc* CTestODBCView::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTestODBCDoc)));
	return (CTestODBCDoc*)m_pDocument;
}
#endif //_DEBUG


// CTestODBCView 메시지 처리기

void CTestODBCView::OnBnClickedButton1()
{
	CDatabase* db = &GetDocument()->m_db;
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (!db->IsOpen())
	{
		return;
	}
	m_list.DeleteAllItems(); // 기존 항목 삭제

	try {
		CRecordset rs(db);
		rs.Open(CRecordset::forwardOnly, _T("SELECT Name, Level, Gold FROM Players"));

		CString name, level, gold;
		int i = 0;
		while (!rs.IsEOF())
		{
			rs.GetFieldValue((short)0, name);
			rs.GetFieldValue((short)1, level);
			rs.GetFieldValue((short)2, gold);

			m_list.InsertItem(i, name);
			m_list.SetItemText(i, 1, level);
			m_list.SetItemText(i, 2, gold);
			rs.MoveNext();
			++i;
		}
	}
	catch (CDBException* e)
	{
		AfxMessageBox(e->m_strError);
		e->Delete();
	}

}

void CTestODBCView::OnBnClickedButton2()
{
	CDatabase* db = &GetDocument()->m_db;
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (!db->IsOpen())
	{
		return;
	}
	try
	{
		db->ExecuteSQL(_T("CALL RegisterPlayer('김민준3', 5,@new_id); "));

		CRecordset rs(db);
		rs.Open(CRecordset::forwardOnly, _T("SELECT @new_id;"));
		CString newID;
		rs.GetFieldValue((short)0, newID);
		AfxMessageBox(_T("신규 PlayerID = ") + newID);

		m_list.DeleteAllItems();

		m_list.InsertItem(0, L"김민준3");
		m_list.SetItemText(0, 1, newID);
	}
	catch (CDBException* e) {
		AfxMessageBox(e->m_strError);
		e->Delete();
	}

}
