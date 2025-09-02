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
    public partial class Form5 : Form
    {
        public Form5()
        {
            InitializeComponent();
        }
        string str = "";
        private void textBox1_KeyPress(object sender, KeyPressEventArgs e)
        {
            str += e.KeyChar;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            label1.Text = str;
            str = "";
        }

        private void button2_Click(object sender, EventArgs e)
        {
            label1.Text = "";
            textBox1.Text = "";
        }
    }
}
