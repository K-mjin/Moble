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
    public partial class Form4 : Form
    {
        public Form4()
        {
            InitializeComponent();
        }

        private void Form4_KeyDown(object sender, KeyEventArgs e)
        {
            switch (e.KeyCode)
            {
                case Keys.A:
                    MessageBox.Show("알파벳 A");
                    break;
                case Keys.D0:
                    MessageBox.Show("숫자 0");
                    break;
                case Keys.F1:
                    MessageBox.Show("function키");
                    break;
                case Keys.Enter:
                    MessageBox.Show("Enter키입니다.");
                    break;
            }
        }
    }
}
