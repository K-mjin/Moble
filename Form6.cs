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
    public partial class Form6 : Form
    {
        public Form6()
        {
            InitializeComponent();
        }
        private void Form6_MouseDown(object sender, MouseEventArgs e)
        {
            label1.Text = e.Location.ToString();
        }
        private void Form6_MouseUp(object sender, MouseEventArgs e)
        {
            label2.Text = "(버튼 놓음) 좌표 : " + e.Location.ToString();
        }
        private void Form6_MouseClick(object sender, MouseEventArgs e)
        {
            label3.Text = "(버튼 클릭) 좌표 : " + e.Location.ToString();
        }

        private void Form6_MouseDoubleClick(object sender, MouseEventArgs e)
        {
            label4.Text = "(버튼 더블클릭) 좌표 : " + e.Location.ToString();
        }

        private void Form6_MouseMove(object sender, MouseEventArgs e)
        {
            label5.Text = e.Location.ToString();
        }
    }
}
