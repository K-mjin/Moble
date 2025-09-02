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

namespace WinFormsApp_new_0729
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void toolStripMenuItem2_Click(object sender, EventArgs e)
        {
            //label1.Text = "새 파일을 만듭니다.";
            //Form newForm = new Form();
            //newForm.Text = "새로 만들기 폼";
            //newForm.Size = new System.Drawing.Size(500, 500);
            //newForm.Show();

            //this.Controls.Add(textBox_View);
            //textBox_View.Text = "";

            //string folderPath = @"C:\Temp";
            //string fileName = "NewFile.txt";
            //string filePath = Path.Combine(folderPath, fileName);

            //try
            //{
            //    if (!Directory.Exists(folderPath))
            //        Directory.CreateDirectory(folderPath);
            //    if (!File.Exists(filePath))
            //    {
            //        File.Create(filePath).Close();
            //        MessageBox.Show($"파일이 생성디었습니다.:\n{filePath}", "성공");
            //    }
            //    else
            //    {
            //        MessageBox.Show("파일이 이미 존재합니다.", "알림");
            //    }
            //}
            //catch (Exception ex)
            //{
            //    MessageBox.Show("오류 발생 : " + ex.Message, "에러");
            //}

            string folderPath = @"C:\Temp";
            try
            {
                if (!Directory.Exists(folderPath))
                    Directory.CreateDirectory(folderPath);
                string timestemp = DateTime.Now.ToString("yyyyMMdd_HHmmss");
                string fileName = $"NewFile_{timestemp}.txt";
                string filePath = Path.Combine(folderPath, fileName);
                File.Create(filePath).Close();
                MessageBox.Show($"파일이 생성되었습니다:\n{filePath}", "성공");
            }
            catch (Exception ex)
            {
                MessageBox.Show("요류 발생 : " + ex.Message, "에러");
            }
        }

        private void toolStripMenuItem3_Click(object sender, EventArgs e)
        {
            label1.Text = "파일을 엽니다.";
        }

        private void toolStripMenuItem4_Click(object sender, EventArgs e)
        {
            label1.Text = "파일을 저장합니다.";
        }

        private void toolStripMenuItem5_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void toolStripMenuItem7_Click(object sender, EventArgs e)
        {
            Process.Start("calc.exe");
        }

        private void toolStripMenuItem8_Click(object sender, EventArgs e)
        {
            Process.Start("mspaint.exe");
        }

        private void toolStripMenuItem9_Click(object sender, EventArgs e)
        {
            Process.Start("notepad.exe");
        }
    }
}
