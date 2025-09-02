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
    public partial class Form11 : Form
    {
        public Form11()
        {
            InitializeComponent();
        }
        int cnt = 0;

        private void button1_Click(object sender, EventArgs e)
        {
            if (cnt++ == 0)
            {
                TreeNode tn = new TreeNode("SLT");

                TreeNode tn2 = new TreeNode("관리본부");
                tn2.Nodes.Add("인사팀");
                tn2.Nodes.Add("총무팀");
                tn2.Nodes.Add("회계팀");

                TreeNode tn3 = new TreeNode("IT 사업부");
                tn3.Nodes.Add("AI팀");
                tn3.Nodes.Add("IoT팀");

                TreeNode tn4 = new TreeNode("연구소");
                tn4.Nodes.Add("소프트웨어팀");
                tn4.Nodes.Add("하드웨어팀");

                TreeNode treeNode = new TreeNode("관리본부");
                treeNode.Nodes.Add("인사팀");
                treeNode.Nodes.Add("총무팀");
                tn2.Nodes.Add(treeNode);

                TreeNode treeNode2 = new TreeNode("모듈개발");
                treeNode2.Nodes.Add("통신");
                treeNode2.Nodes.Add("양자");
                tn4.Nodes.Add(treeNode2);

                tn.Nodes.Add(tn2);
                tn.Nodes.Add(tn3);
                tn.Nodes.Add(tn4);

                treeView1.Nodes.Add(tn);
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            treeView1.ExpandAll();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            treeView1.CollapseAll();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            treeView1.Nodes.Clear();
            cnt = 0;
        }
    }
}
