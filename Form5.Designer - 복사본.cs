namespace WinFormsApp_0728
{
    partial class Form5
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
            components = new System.ComponentModel.Container();
            progressBar1 = new ProgressBar();
            textBox1 = new TextBox();
            btnStart = new Button();
            btnInitial = new Button();
            timer1 = new System.Windows.Forms.Timer(components);
            SuspendLayout();
            // 
            // progressBar1
            // 
            progressBar1.Location = new Point(62, 84);
            progressBar1.Name = "progressBar1";
            progressBar1.Size = new Size(287, 23);
            progressBar1.TabIndex = 0;
            // 
            // textBox1
            // 
            textBox1.Location = new Point(62, 131);
            textBox1.Name = "textBox1";
            textBox1.Size = new Size(147, 23);
            textBox1.TabIndex = 1;
            // 
            // btnStart
            // 
            btnStart.Location = new Point(274, 113);
            btnStart.Name = "btnStart";
            btnStart.Size = new Size(75, 23);
            btnStart.TabIndex = 2;
            btnStart.Text = "시작";
            btnStart.UseVisualStyleBackColor = true;
            btnStart.Click += btnStart_Click;
            // 
            // btnInitial
            // 
            btnInitial.Location = new Point(274, 142);
            btnInitial.Name = "btnInitial";
            btnInitial.Size = new Size(75, 23);
            btnInitial.TabIndex = 3;
            btnInitial.Text = "초기화";
            btnInitial.UseVisualStyleBackColor = true;
            btnInitial.Click += btnInitial_Click;
            // 
            // timer1
            // 
            timer1.Tick += timer1_Tick;
            // 
            // Form5
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(btnInitial);
            Controls.Add(btnStart);
            Controls.Add(textBox1);
            Controls.Add(progressBar1);
            Name = "Form5";
            Text = "Form5";
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private ProgressBar progressBar1;
        private TextBox textBox1;
        private Button btnStart;
        private Button btnInitial;
        private System.Windows.Forms.Timer timer1;
    }
}