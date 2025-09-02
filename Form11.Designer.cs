namespace WinFormsApp_0728
{
    partial class Form11
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
            button1 = new Button();
            button2 = new Button();
            button3 = new Button();
            treeView1 = new TreeView();
            button4 = new Button();
            SuspendLayout();
            // 
            // button1
            // 
            button1.Location = new Point(508, 26);
            button1.Name = "button1";
            button1.Size = new Size(127, 60);
            button1.TabIndex = 0;
            button1.Text = "클릭";
            button1.UseVisualStyleBackColor = true;
            button1.Click += button1_Click;
            // 
            // button2
            // 
            button2.Location = new Point(508, 128);
            button2.Name = "button2";
            button2.Size = new Size(127, 60);
            button2.TabIndex = 1;
            button2.Text = "확장";
            button2.UseVisualStyleBackColor = true;
            button2.Click += button2_Click;
            // 
            // button3
            // 
            button3.Location = new Point(508, 236);
            button3.Name = "button3";
            button3.Size = new Size(127, 60);
            button3.TabIndex = 2;
            button3.Text = "축소";
            button3.UseVisualStyleBackColor = true;
            button3.Click += button3_Click;
            // 
            // treeView1
            // 
            treeView1.Location = new Point(12, 12);
            treeView1.Name = "treeView1";
            treeView1.Size = new Size(429, 426);
            treeView1.TabIndex = 3;
            // 
            // button4
            // 
            button4.Location = new Point(508, 329);
            button4.Name = "button4";
            button4.Size = new Size(127, 60);
            button4.TabIndex = 4;
            button4.Text = "삭제";
            button4.UseVisualStyleBackColor = true;
            button4.Click += button4_Click;
            // 
            // Form11
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(button4);
            Controls.Add(treeView1);
            Controls.Add(button3);
            Controls.Add(button2);
            Controls.Add(button1);
            Name = "Form11";
            Text = "Form11";
            ResumeLayout(false);
        }

        #endregion

        private Button button1;
        private Button button2;
        private Button button3;
        private TreeView treeView1;
        private Button button4;
    }
}