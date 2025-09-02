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
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }

        private void Form2_KeyDown(object sender, KeyEventArgs e)
        {
            MessageBox.Show("KeyDown 모든키");
        }

        private void Form2_KeyPress(object sender, KeyPressEventArgs e)
        {
            MessageBox.Show("KeyPress 문자키");
        }
    }
}
