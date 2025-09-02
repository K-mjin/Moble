using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WinFormsApp_0725
{
    public partial class Form9 : Form
    {
        public Form9()
        {
            InitializeComponent();
        }
        string strOrder = "";

        private void btnEvent_Click(object sender, EventArgs e)
        {   // 주문확인 버튼 이벤트
            lbOrder.Text = "";
            if (ckbSoon.Checked == true)
                strOrder += "메인은" + ckbSoon.Text + "\n";
            if (ckbPasta.Checked == true)
                strOrder += "메인은" + ckbPasta.Text + "\n";
            if (ckbSteak.Checked == true)
                strOrder += "메인은" + ckbSteak.Text + "\n";
            if (ckbTang.Checked == true)
                strOrder += "메인은" + ckbTang.Text + "\n";
            if (ckbNudle.Checked == true)
                strOrder += "메인은" + ckbNudle.Text + "\n";
            if (ckbRice.Checked == true)
                strOrder += "메인은" + ckbRice.Text + "\n";

            lbOrder.Text = strOrder + "메뉴를 요정하였습니다.";
            MessageBox.Show("이벤트 응모여부와 회원가입 동의여부를 선택해주세요.");
        }

        private bool btnEnterclick = false;
        private void btnEnter_Click(object sender, EventArgs e)
        {   // 이벤트 응모 버튼
            if (radioAgree.Checked == true) 
            {
                MessageBox.Show("개인정보에 동의 하셨습니다.");
                btnEnterclick = true; 
            }
                
            else if (radioDisagree.Checked == true)
            {
                MessageBox.Show("개인정보에 동의하지 않으셨습니다.");
                btnEnterclick = true;
            } 
            else
                MessageBox.Show("이벤트 응모 선택을 해주세요");
        }

        private bool btnEnter1click = false;
        private void btnEnter1_Click(object sender, EventArgs e)
        {   // 회원가입 버튼
            if (radioAgree.Checked == true)
            {
                MessageBox.Show("회원가입에 동의 하셨습니다.");
                btnEnter1click = true;
            }
            else if (radioDisagree1.Checked == true)
            {
                MessageBox.Show("회원가입에 동의하지 않으셨습니다.");
                btnEnter1click = true;
            }
            else
                MessageBox.Show("회원가입에 동의여부를 확인해주세요");
        }

        private void btnReceipt_Click(object sender, EventArgs e)
        {   // 요구사항 접수 버튼
            string strText = TextBox.Text + "\n라고 요구사항이 접수되었습니다.";
            MessageBox.Show(strText);
        }

        private void cbPay_SelectedIndexChanged(object sender, EventArgs e)
        {   // 결재 방법 콤보 박스
            lbPayInfo.Items.Clear();

            if (cbPay.SelectedIndex == 0)
            {
                lbPayInfo.Items.Add("일시불");
                lbPayInfo.Items.Add("3개월 할부");
                lbPayInfo.Items.Add("6개월 할부");
            }
            else if (cbPay.SelectedIndex == 1)
            {
                lbPayInfo.Items.Add("K은행");
                lbPayInfo.Items.Add("N은행");
                lbPayInfo.Items.Add("S은행");
            }
            else if (cbPay.SelectedIndex == 2)
            {
                lbPayInfo.Items.Add("N포인트");
                lbPayInfo.Items.Add("해피포인트");
                lbPayInfo.Items.Add("주유포인트");
            }
        }

        private void btnPay_Click(object sender, EventArgs e)
        {   // 결제 버튼
            if (btnEnterclick && btnEnter1click)
            {
                if (cbPay.Text == "" || lbPayInfo.Text == "")
                {
                    MessageBox.Show("결제방법 및 정보를 다시 확인해주세요.");
                    return;
                }
                else
                {
                    string str = cbPay.Text + "(으)로 " + lbPayInfo.Text + "결재방법을 " + "\n선택하셨습니다." + "\n결제금액은 " + textBox2.Text + "원 입니다.";
                    MessageBox.Show(str);
                }
            }
            else
                MessageBox.Show("이벤트 응모 선택과 회원가입에 동의 여부를 확인해주세요.");
            Application.Restart();
        }
        public int totalPrice = 0;
        private void ckbSoon_CheckedChanged(object sender, EventArgs e)
        {   // 순대 체크박스
            int soon = int.Parse(lbSoon.Text);
            if (ckbSoon.Checked)
            {
                totalPrice += soon;
            }
            else
                totalPrice -= soon;
        }

        private void ckbPasta_CheckedChanged(object sender, EventArgs e)
        {   // 파스타 체크박스
            int pasta = int.Parse(lbPasta.Text);
            if (ckbPasta.Checked)
            {
                totalPrice += pasta;
            }
            else
                totalPrice -= pasta;
        }

        private void ckbSteak_CheckedChanged(object sender, EventArgs e)
        {   // 스테이크 체크박스
            int steak = int.Parse(lbSteak.Text);
            if (ckbSteak.Checked)
            {
                totalPrice += steak;
            }
            else
                totalPrice -= steak;
        }

        private void ckbTang_CheckedChanged(object sender, EventArgs e)
        {   // 탕수육 체크박스
            int tang = int.Parse(lbTang.Text);
            if (ckbTang.Checked)
            {
                totalPrice += tang;
            }
            else
                totalPrice -= tang;
        }

        private void ckbNudle_CheckedChanged(object sender, EventArgs e)
        {   // 팟타이 체크박스
            int nudle = int.Parse(lbNudle.Text);
            if (ckbNudle.Checked)
            {
                totalPrice += nudle;
            }
            else
                totalPrice -= nudle;
        }

        private void ckbRice_CheckedChanged(object sender, EventArgs e)
        {   // 볶읍밥 체크박스
            int rice = int.Parse(lbRice.Text);
            if (ckbRice.Checked)
            {
                totalPrice += rice;
            }
            else
                totalPrice -= rice;
        }

        private void button1_Click(object sender, EventArgs e)
        {   // 주문하기 버튼(무조건 음료를 선택해야 버튼 실행 가능)
            if (RB1.Checked == true)
                strOrder += "음료는" + RB1.Text + "\n";
            else if (RB2.Checked == true)
                strOrder += "음료는" + RB2.Text + "\n";
            else if (RB3.Checked == true)
                strOrder += "음료는" + RB3.Text + "\n";
            else if (RB4.Checked == true)
                strOrder += "음료는" + RB4.Text + "\n";
            else
                MessageBox.Show("음료를 선택해주세요.");

            textBox2.Text = totalPrice.ToString();
        }

        private void btnCancel_Click(object sender, EventArgs e)
        {   // 주문취소 버튼
            textBox2.Text = "";
            lbOrder.Text = "";
            ckbSoon.Checked = false;
            ckbPasta.Checked = false;
            ckbSteak.Checked = false;
            ckbTang.Checked = false;
            ckbNudle.Checked = false;
            ckbRice.Checked = false;
            RB1.Checked = false;
            RB2.Checked = false;
            RB3.Checked = false;
            RB4.Checked = false;
        }

        private void RB1_CheckedChanged(object sender, EventArgs e)
        {
            int coke = int.Parse(Coke.Text);
            if (RB1.Checked)
            {
                totalPrice += coke;
            }
            else
                totalPrice -= coke;
        }

        private void RB2_CheckedChanged(object sender, EventArgs e)
        {
            int zerocoke = int.Parse(ZeroCoke.Text);
            if (RB2.Checked)
            {
                totalPrice += zerocoke;
            }
            else
                totalPrice -= zerocoke;
        }

        private void RB3_CheckedChanged(object sender, EventArgs e)
        {
            int cider = int.Parse(Cider.Text);
            if (RB3.Checked)
            {
                totalPrice += cider;
            }
            else
                totalPrice -= cider;
        }

        private void RB4_CheckedChanged(object sender, EventArgs e)
        {
            int no = int.Parse(NoSelect.Text);
            if (RB4.Checked)
            {
                totalPrice += no;
            }
            else
                totalPrice -= no;
        }
    }
}
