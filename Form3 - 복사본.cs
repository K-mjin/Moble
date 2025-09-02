using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WinFormsApp_0728
{
    public partial class Form3 : Form
    {
        Form2 f2;
        public Form3()
        {
            InitializeComponent();
        }
        public Form3(Form2 f2)
        {
            InitializeComponent();
            this.f2 = f2;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            //Form2 form2 = new Form2(comboBox1.Text + " " + comboBox2.Text + " " + textBox1.Text);
            //form2.Show();
            //Close();  // Close() 가 실행이 안되서 창이 여러개 생김
            
            //f2.UpdateData(comboBox1.Text + " " + comboBox2.Text + " " + textBox1.Text);
            //Close();  // 메서드를 만들어 문자열로 연결
           
            string text = comboBox1.Text + " " + comboBox2.Text + " " + textBox1.Text;
            f2.TextBox1 = text;
            Close();    // 속서을 추가해서 문자열 받기
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            comboBox2.Items.Clear();

            if (comboBox1.SelectedIndex == 0)
            {   // 0번째 인덱스 : 서울특별시
                comboBox2.Items.Add("강남구");
                comboBox2.Items.Add("강동구");
                comboBox2.Items.Add("강북구");
                comboBox2.Items.Add("강서구");
                comboBox2.Items.Add("관악구");
                comboBox2.Items.Add("광진구");
            }
            if (comboBox1.SelectedIndex == 1)
            {   // 1번째 인덱스 : 경기도
                comboBox2.Items.Add("가평군");
                comboBox2.Items.Add("고양시 덕양구");
                comboBox2.Items.Add("고양지 일산동구");
                comboBox2.Items.Add("고양시 일산서구");
                comboBox2.Items.Add("과천시");
                comboBox2.Items.Add("광명시");
            }
        }
    }
}
