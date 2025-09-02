namespace WinFormsApp_0725
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
            label1 = new Label();
            textBox1 = new TextBox();
            btnPass = new Button();
            SuspendLayout();
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Location = new Point(224, 43);
            label1.Name = "label1";
            label1.Size = new Size(131, 15);
            label1.TabIndex = 0;
            label1.Text = "비밀번호를 입력하세요";
            // 
            // textBox1
            // 
            textBox1.Location = new Point(229, 98);
            textBox1.MaxLength = 5;
            textBox1.Name = "textBox1";
            textBox1.PasswordChar = '*';
            textBox1.Size = new Size(100, 23);
            textBox1.TabIndex = 1;
            // 
            // btnPass
            // 
            btnPass.Location = new Point(271, 175);
            btnPass.Name = "btnPass";
            btnPass.Size = new Size(75, 23);
            btnPass.TabIndex = 2;
            btnPass.Text = "클릭";
            btnPass.UseVisualStyleBackColor = true;
            btnPass.Click += btnPass_Click;
            // 
            // Form11
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(574, 390);
            Controls.Add(btnPass);
            Controls.Add(textBox1);
            Controls.Add(label1);
            Name = "Form11";
            Text = "Form11";
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Label label1;
        private TextBox textBox1;
        private Button btnPass;
    }
}