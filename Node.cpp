#include <stdio.h>

typedef struct Node {
	int data;
	Node* pNext;
	Node* pPrev;

	Node() : data(0), pNext(NULL), pPrev(NULL)
	{
	};
}Node;


int main(void) {
	Node* pHead = NULL;		// 포인터는 항상 초기화

	Node* pNode1 = new Node();

	if (pNode1 == NULL) {
		return 0;
	}

	pNode1->data = 10;
	pHead = pNode1;

	Node* pNode2 = new Node();

	pNode2->data = 20;
	pNode1->pNext = pNode2;
	pNode2->pPrev = pNode1;

	Node* pNode3 = new Node();

	pNode3->data = 30;
	pNode2->pNext = pNode3;
	pNode3->pPrev = pNode2;

	Node* pNode4 = new Node();
	pNode4->data = 15;
	pNode1->pNext = pNode4;	// pNode1 다음 순서 pNode4
	pNode2->pPrev = pNode4;	// pNode2 전 순서는 pNdoe4
	pNode4->pNext = pNode2;	// pNode4 다음 순서 pNode2
	pNode4->pPrev = pNode1;	// pNode4 전 순서는 pNode1

	Node* pCurrent = pHead;
	while (pCurrent != NULL) {
		printf("노드에 들어있는 데이터는 [%d]\n", pCurrent->data);
		if (pCurrent->pNext == NULL)
			break;
		pCurrent = pCurrent->pNext;
	}

	printf("\n=============================\n\n");

	while (pCurrent != NULL) {
		printf("노드에 들어있는 데이터는 [%d]\n", pCurrent->data);
		pCurrent = pCurrent->pPrev;
	}

	// 메모리 삭제는 필수
	delete pNode1;
	delete pNode2;
	delete pNode3;
	delete pNode4;

	return 0;
}