using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Web;
using System.Windows.Forms;

namespace WinFormsApp_0728
{
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }
        public Form2(string data)
        {
            InitializeComponent();
            textBox1.Text = data;
        }
        public string TextBox1
        {
            set { textBox1.Text = value; }
        }   // 속성을 추가해서 문자열 받기
        
        //public void UpdateData(string data)
        //{
        //    textBox1.Text = data;
        //} // 메서드를 만들어서 문자열로 연결

        private void button1_Click(object sender, EventArgs e)
        {
            Form3 form3 = new Form3(this);
            form3.Show();
        }
    }
}
