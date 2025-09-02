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
    public partial class Form11 : Form
    {
        public Form11()
        {
            InitializeComponent();
        }
        public string password = "12345";
        int cnt = 0;
        private void btnPass_Click(object sender, EventArgs e)
        {
            string input = textBox1.Text;
            if(input == password)
            {
                MessageBox.Show("열렸습니다.");
                this.Close();
            }
            else
            {
                cnt++;
                if (cnt <= 5)
                {
                    MessageBox.Show("다시 입력하세요.");
                    textBox1.Text = " ";
                }
                else
                {
                    MessageBox.Show("입력을 초과하였습니다.");
                    this.Close();
                }
            }
        }
    }
}
