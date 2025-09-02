using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Diagnostics;

namespace WinFormsApp_0729
{
    public partial class Form7 : Form
    {
        public Form7()
        {
            InitializeComponent();
        }

        private void ToolStripNew_Click(object sender, EventArgs e)
        {
            lnResult.Text = "새 파일을 만듭니다.";
        }

        private void ToolStripOpen_Click(object sender, EventArgs e)
        {
            lnResult.Text = "파일을 엽니다.";
        }

        private void ToolStripSave_Click(object sender, EventArgs e)
        {
            lnResult.Text = "파일을 저장합니다.";
        }

        private void ToolStripExit_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void toolStripMenuCa_Click(object sender, EventArgs e)
        {
            Process.Start("calc.exe");
        }

        private void toolStripMenuPi_Click(object sender, EventArgs e)
        {
            Process.Start("mspaint.exe");
        }
    }
}
