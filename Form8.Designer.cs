namespace WinFormsApp_0728
{
    partial class Form8
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
            btnAdd = new Button();
            btnDelete = new Button();
            btnInsert = new Button();
            label1 = new Label();
            label2 = new Label();
            label3 = new Label();
            tbName = new TextBox();
            tbPhon = new TextBox();
            tbOrg = new TextBox();
            btnChange = new Button();
            listView1 = new ListView();
            chName = new ColumnHeader();
            chPhone = new ColumnHeader();
            chOrg = new ColumnHeader();
            SuspendLayout();
            // 
            // btnAdd
            // 
            btnAdd.Location = new Point(581, 45);
            btnAdd.Name = "btnAdd";
            btnAdd.Size = new Size(75, 23);
            btnAdd.TabIndex = 0;
            btnAdd.Text = "입력";
            btnAdd.UseVisualStyleBackColor = true;
            btnAdd.Click += btnAdd_Click;
            // 
            // btnDelete
            // 
            btnDelete.Location = new Point(581, 74);
            btnDelete.Name = "btnDelete";
            btnDelete.Size = new Size(75, 23);
            btnDelete.TabIndex = 1;
            btnDelete.Text = "삭제";
            btnDelete.UseVisualStyleBackColor = true;
            btnDelete.Click += btnDelete_Click;
            // 
            // btnInsert
            // 
            btnInsert.Location = new Point(581, 132);
            btnInsert.Name = "btnInsert";
            btnInsert.Size = new Size(75, 23);
            btnInsert.TabIndex = 2;
            btnInsert.Text = "삽입";
            btnInsert.UseVisualStyleBackColor = true;
            btnInsert.Click += btnInsert_Click;
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Location = new Point(42, 62);
            label1.Name = "label1";
            label1.Size = new Size(42, 15);
            label1.TabIndex = 3;
            label1.Text = "이름 : ";
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Location = new Point(42, 91);
            label2.Name = "label2";
            label2.Size = new Size(54, 15);
            label2.TabIndex = 4;
            label2.Text = "휴대폰 : ";
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Location = new Point(42, 120);
            label3.Name = "label3";
            label3.Size = new Size(38, 15);
            label3.TabIndex = 5;
            label3.Text = "소속 :";
            // 
            // tbName
            // 
            tbName.Location = new Point(104, 58);
            tbName.Name = "tbName";
            tbName.Size = new Size(471, 23);
            tbName.TabIndex = 6;
            // 
            // tbPhon
            // 
            tbPhon.Location = new Point(104, 87);
            tbPhon.Name = "tbPhon";
            tbPhon.Size = new Size(471, 23);
            tbPhon.TabIndex = 7;
            // 
            // tbOrg
            // 
            tbOrg.Location = new Point(104, 116);
            tbOrg.Name = "tbOrg";
            tbOrg.Size = new Size(471, 23);
            tbOrg.TabIndex = 8;
            // 
            // btnChange
            // 
            btnChange.Location = new Point(581, 103);
            btnChange.Name = "btnChange";
            btnChange.Size = new Size(75, 23);
            btnChange.TabIndex = 9;
            btnChange.Text = "수정";
            btnChange.UseVisualStyleBackColor = true;
            btnChange.Click += btnChange_Click;
            // 
            // listView1
            // 
            listView1.Columns.AddRange(new ColumnHeader[] { chName, chPhone, chOrg });
            listView1.FullRowSelect = true;
            listView1.GridLines = true;
            listView1.Location = new Point(12, 188);
            listView1.Name = "listView1";
            listView1.Size = new Size(658, 250);
            listView1.TabIndex = 10;
            listView1.UseCompatibleStateImageBehavior = false;
            listView1.View = View.Details;
            // 
            // chName
            // 
            chName.Text = "이름";
            chName.Width = 150;
            // 
            // chPhone
            // 
            chPhone.Text = "휴대폰";
            chPhone.Width = 200;
            // 
            // chOrg
            // 
            chOrg.Text = "소속";
            chOrg.Width = 150;
            // 
            // Form8
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(listView1);
            Controls.Add(btnChange);
            Controls.Add(tbOrg);
            Controls.Add(tbPhon);
            Controls.Add(tbName);
            Controls.Add(label3);
            Controls.Add(label2);
            Controls.Add(label1);
            Controls.Add(btnInsert);
            Controls.Add(btnDelete);
            Controls.Add(btnAdd);
            Name = "Form8";
            Text = "Form8";
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Button btnAdd;
        private Button btnDelete;
        private Button btnInsert;
        private Label label1;
        private Label label2;
        private Label label3;
        private TextBox tbName;
        private TextBox tbPhon;
        private TextBox tbOrg;
        private Button btnChange;
        private ListView listView1;
        private ColumnHeader chName;
        private ColumnHeader chPhone;
        private ColumnHeader chOrg;
    }
}