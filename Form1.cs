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
            //label1.Text = "�� ������ ����ϴ�.";
            //Form newForm = new Form();
            //newForm.Text = "���� ����� ��";
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
            //        MessageBox.Show($"������ ����������ϴ�.:\n{filePath}", "����");
            //    }
            //    else
            //    {
            //        MessageBox.Show("������ �̹� �����մϴ�.", "�˸�");
            //    }
            //}
            //catch (Exception ex)
            //{
            //    MessageBox.Show("���� �߻� : " + ex.Message, "����");
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
                MessageBox.Show($"������ �����Ǿ����ϴ�:\n{filePath}", "����");
            }
            catch (Exception ex)
            {
                MessageBox.Show("��� �߻� : " + ex.Message, "����");
            }
        }

        private void toolStripMenuItem3_Click(object sender, EventArgs e)
        {
            label1.Text = "������ ���ϴ�.";
        }

        private void toolStripMenuItem4_Click(object sender, EventArgs e)
        {
            label1.Text = "������ �����մϴ�.";
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
