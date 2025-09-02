namespace WinFormsApp_0725
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
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
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            btn_contains = new Button();
            btn_init = new Button();
            lb_Contains = new Label();
            lb_Equals = new Label();
            lb_Length = new Label();
            lb_Tolower = new Label();
            lb_Toupper = new Label();
            TextBox = new TextBox();
            label6 = new Label();
            label7 = new Label();
            label8 = new Label();
            label9 = new Label();
            label10 = new Label();
            SuspendLayout();
            // 
            // btn_contains
            // 
            btn_contains.Font = new Font("맑은 고딕", 9.75F, FontStyle.Bold, GraphicsUnit.Point);
            btn_contains.ForeColor = SystemColors.MenuHighlight;
            btn_contains.Location = new Point(418, 41);
            btn_contains.Name = "btn_contains";
            btn_contains.Size = new Size(119, 49);
            btn_contains.TabIndex = 0;
            btn_contains.Text = "Transform";
            btn_contains.UseVisualStyleBackColor = true;
            btn_contains.Click += btn_contains_Click;
            // 
            // btn_init
            // 
            btn_init.Font = new Font("맑은 고딕", 9.75F, FontStyle.Bold, GraphicsUnit.Point);
            btn_init.ForeColor = SystemColors.MenuHighlight;
            btn_init.Location = new Point(418, 114);
            btn_init.Name = "btn_init";
            btn_init.Size = new Size(119, 49);
            btn_init.TabIndex = 1;
            btn_init.Text = "초기화";
            btn_init.UseVisualStyleBackColor = true;
            btn_init.Click += btn_init_Click;
            // 
            // lb_Contains
            // 
            lb_Contains.AutoSize = true;
            lb_Contains.Location = new Point(41, 41);
            lb_Contains.Name = "lb_Contains";
            lb_Contains.Size = new Size(49, 15);
            lb_Contains.TabIndex = 2;
            lb_Contains.Text = "Contain";
            // 
            // lb_Equals
            // 
            lb_Equals.AutoSize = true;
            lb_Equals.Location = new Point(41, 86);
            lb_Equals.Name = "lb_Equals";
            lb_Equals.Size = new Size(41, 15);
            lb_Equals.TabIndex = 2;
            lb_Equals.Text = "Equals";
            // 
            // lb_Length
            // 
            lb_Length.AutoSize = true;
            lb_Length.Location = new Point(41, 134);
            lb_Length.Name = "lb_Length";
            lb_Length.Size = new Size(44, 15);
            lb_Length.TabIndex = 2;
            lb_Length.Text = "Length";
            // 
            // lb_Tolower
            // 
            lb_Tolower.AutoSize = true;
            lb_Tolower.Location = new Point(41, 183);
            lb_Tolower.Name = "lb_Tolower";
            lb_Tolower.Size = new Size(49, 15);
            lb_Tolower.TabIndex = 2;
            lb_Tolower.Text = "Tolower";
            // 
            // lb_Toupper
            // 
            lb_Toupper.AutoSize = true;
            lb_Toupper.Location = new Point(41, 238);
            lb_Toupper.Name = "lb_Toupper";
            lb_Toupper.Size = new Size(51, 15);
            lb_Toupper.TabIndex = 2;
            lb_Toupper.Text = "Toupper";
            // 
            // TextBox
            // 
            TextBox.Location = new Point(41, 299);
            TextBox.Name = "TextBox";
            TextBox.Size = new Size(496, 23);
            TextBox.TabIndex = 3;
            // 
            // label6
            // 
            label6.AutoSize = true;
            label6.Location = new Point(96, 41);
            label6.Name = "label6";
            label6.Size = new Size(12, 15);
            label6.TabIndex = 2;
            label6.Text = "-";
            // 
            // label7
            // 
            label7.AutoSize = true;
            label7.Location = new Point(88, 86);
            label7.Name = "label7";
            label7.Size = new Size(12, 15);
            label7.TabIndex = 2;
            label7.Text = "-";
            // 
            // label8
            // 
            label8.AutoSize = true;
            label8.Location = new Point(91, 134);
            label8.Name = "label8";
            label8.Size = new Size(12, 15);
            label8.TabIndex = 2;
            label8.Text = "-";
            // 
            // label9
            // 
            label9.AutoSize = true;
            label9.Location = new Point(96, 183);
            label9.Name = "label9";
            label9.Size = new Size(12, 15);
            label9.TabIndex = 2;
            label9.Text = "-";
            // 
            // label10
            // 
            label10.AutoSize = true;
            label10.Location = new Point(98, 238);
            label10.Name = "label10";
            label10.Size = new Size(12, 15);
            label10.TabIndex = 2;
            label10.Text = "-";
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(578, 388);
            Controls.Add(TextBox);
            Controls.Add(lb_Toupper);
            Controls.Add(lb_Tolower);
            Controls.Add(lb_Length);
            Controls.Add(lb_Equals);
            Controls.Add(label10);
            Controls.Add(label9);
            Controls.Add(label8);
            Controls.Add(label7);
            Controls.Add(label6);
            Controls.Add(lb_Contains);
            Controls.Add(btn_init);
            Controls.Add(btn_contains);
            Name = "Form1";
            Text = "Form1";
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Button btn_contains;
        private Button btn_init;
        private Label lb_Contains;
        private Label lb_Equals;
        private Label lb_Length;
        private Label lb_Tolower;
        private Label lb_Toupper;
        private TextBox TextBox;
        private Label label6;
        private Label label7;
        private Label label8;
        private Label label9;
        private Label label10;
    }
}
