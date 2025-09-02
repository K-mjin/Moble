using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WinFormsApp_new_0729
{
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }

        private void toolStripCopy_Click(object sender, EventArgs e)
        {
            lbResult.Text = "복사되었습니다.";
        }

        private void toolStripPaste_Click(object sender, EventArgs e)
        {
            lbResult.Text = "붙여넣기 되었습니다.";
        }

        private void toolStripCut_Click(object sender, EventArgs e)
        {
            lbResult.Text = "잘라내기 되었습니다.";
            //MessageBox.Show("잘라내기 되었습니다.");
        }
    }
}
