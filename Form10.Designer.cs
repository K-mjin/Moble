namespace WinFormsApp_0728
{
    partial class Form10
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            TreeNode treeNode1 = new TreeNode("IT도서");
            treeView1 = new TreeView();
            tbNode = new TextBox();
            btnAdd = new Button();
            btnDelete = new Button();
            btnExpandAll = new Button();
            btnCollapseAll = new Button();
            SuspendLayout();
            // 
            // treeView1
            // 
            treeView1.Location = new Point(12, 12);
            treeView1.Name = "treeView1";
            treeNode1.Name = "Root";
            treeNode1.Text = "IT도서";
            treeView1.Nodes.AddRange(new TreeNode[] { treeNode1 });
            treeView1.Size = new Size(493, 426);
            treeView1.TabIndex = 0;
            // 
            // tbNode
            // 
            tbNode.Location = new Point(531, 12);
            tbNode.Name = "tbNode";
            tbNode.Size = new Size(138, 23);
            tbNode.TabIndex = 1;
            // 
            // btnAdd
            // 
            btnAdd.Location = new Point(531, 53);
            btnAdd.Name = "btnAdd";
            btnAdd.Size = new Size(138, 42);
            btnAdd.TabIndex = 2;
            btnAdd.Text = "추가";
            btnAdd.UseVisualStyleBackColor = true;
            btnAdd.Click += btnAdd_Click;
            // 
            // btnDelete
            // 
            btnDelete.Location = new Point(531, 118);
            btnDelete.Name = "btnDelete";
            btnDelete.Size = new Size(138, 42);
            btnDelete.TabIndex = 2;
            btnDelete.Text = "삭제";
            btnDelete.UseVisualStyleBackColor = true;
            btnDelete.Click += btnDelete_Click;
            // 
            // btnExpandAll
            // 
            btnExpandAll.Location = new Point(531, 197);
            btnExpandAll.Name = "btnExpandAll";
            btnExpandAll.Size = new Size(138, 42);
            btnExpandAll.TabIndex = 2;
            btnExpandAll.Text = "확장";
            btnExpandAll.UseVisualStyleBackColor = true;
            btnExpandAll.Click += btnExpandAll_Click;
            // 
            // btnCollapseAll
            // 
            btnCollapseAll.Location = new Point(531, 266);
            btnCollapseAll.Name = "btnCollapseAll";
            btnCollapseAll.Size = new Size(138, 42);
            btnCollapseAll.TabIndex = 2;
            btnCollapseAll.Text = "축소";
            btnCollapseAll.UseVisualStyleBackColor = true;
            btnCollapseAll.Click += btnCollapseAll_Click;
            // 
            // Form10
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(btnCollapseAll);
            Controls.Add(btnExpandAll);
            Controls.Add(btnDelete);
            Controls.Add(btnAdd);
            Controls.Add(tbNode);
            Controls.Add(treeView1);
            Name = "Form10";
            Text = "Form10";
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private TreeView treeView1;
        private TextBox tbNode;
        private Button btnAdd;
        private Button btnDelete;
        private Button btnExpandAll;
        private Button btnCollapseAll;
    }
}