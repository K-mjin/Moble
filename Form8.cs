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
    public partial class Form8 : Form
    {
        public Form8()
        {
            InitializeComponent();
            listView1.View = View.Details;
        }

        private void btnAdd_Click(object sender, EventArgs e)
        {
            if (tbName.Text == "" || tbPhon.Text == "" || tbOrg.Text == "")
                MessageBox.Show("입력하지 않은 곳을 채워주세요.");
            else
            {
                listView1.Items.Add(new ListViewItem(new string[]
                    { tbName.Text, tbPhon.Text, tbOrg.Text }));
                tbName.Clear();
                tbPhon.Clear();
                tbOrg.Clear();
            }
        }

        private void btnDelete_Click(object sender, EventArgs e)
        {
            try
            {
                int index = listView1.FocusedItem.Index;
                listView1.Items.RemoveAt(index);
            }
            catch (Exception exp)
            {
                MessageBox.Show("리스트 항복을 다시 살펴보세요.");
            }
        }

        private void btnChange_Click(object sender, EventArgs e)
        {
            if (tbName.Text == "" || tbPhon.Text == "" || tbOrg.Text == "")
                {
                MessageBox.Show("입력하지 않은 곳을 채워주세요.");
                return;
            }
            try
            {
                listView1.SelectedItems[0].SubItems[0].Text = tbName.Text;
                listView1.SelectedItems[0].SubItems[1].Text = tbPhon.Text;
                listView1.SelectedItems[0].SubItems[2].Text = tbOrg.Text;
            } catch (Exception exp) {
                MessageBox.Show("입력 항목 및 리스트 선택을 다시 살펴보세요.");
            }
            finally
            {
                tbName.Clear();
                tbPhon.Clear();
                tbOrg.Clear();
            }
        }

        private void btnInsert_Click(object sender, EventArgs e)
        {
            if (tbName.Text == "" || tbPhon.Text == "" || tbOrg.Text == "")
            {
                MessageBox.Show("입력하지 않은 곳을 채워주세요.");
                return;
            }
            try
            {
                int index = listView1.FocusedItem.Index;
                listView1.Items.Insert(index, new ListViewItem(new string[]
                    { tbName.Text, tbPhon.Text, tbOrg.Text}));
            }
            catch (Exception exp)
            {
                MessageBox.Show("리스트 항목을 다시 살펴보세요.");
            }
            finally
            {
                tbName.Clear() ;
                tbPhon.Clear() ;
                tbOrg.Clear() ;
            }
        }
    }
}
