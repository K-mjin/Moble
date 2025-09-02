namespace WinFormsApp_0728
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
            label1 = new Label();
            ckbPencil = new CheckBox();
            ckbSharp = new CheckBox();
            ckbColor = new CheckBox();
            ckbNote = new CheckBox();
            ckbPen = new CheckBox();
            btnEvent = new Button();
            label2 = new Label();
            lb_order = new Label();
            label3 = new Label();
            groupBox1 = new GroupBox();
            radio_no = new RadioButton();
            radio_yes = new RadioButton();
            btnCheck = new Button();
            groupBox1.SuspendLayout();
            SuspendLayout();
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Font = new Font("맑은 고딕", 14.25F, FontStyle.Regular, GraphicsUnit.Point);
            label1.Location = new Point(22, 21);
            label1.Name = "label1";
            label1.Size = new Size(254, 25);
            label1.TabIndex = 0;
            label1.Text = "구매하실 상품을 체크하세요";
            // 
            // ckbPencil
            // 
            ckbPencil.AutoSize = true;
            ckbPencil.Location = new Point(22, 60);
            ckbPencil.Name = "ckbPencil";
            ckbPencil.Size = new Size(50, 19);
            ckbPencil.TabIndex = 1;
            ckbPencil.Text = "연필";
            ckbPencil.UseVisualStyleBackColor = true;
            // 
            // ckbSharp
            // 
            ckbSharp.AutoSize = true;
            ckbSharp.Location = new Point(112, 60);
            ckbSharp.Name = "ckbSharp";
            ckbSharp.Size = new Size(50, 19);
            ckbSharp.TabIndex = 1;
            ckbSharp.Text = "샤프";
            ckbSharp.UseVisualStyleBackColor = true;
            // 
            // ckbColor
            // 
            ckbColor.AutoSize = true;
            ckbColor.Location = new Point(339, 60);
            ckbColor.Name = "ckbColor";
            ckbColor.Size = new Size(62, 19);
            ckbColor.TabIndex = 1;
            ckbColor.Text = "색종이";
            ckbColor.UseVisualStyleBackColor = true;
            // 
            // ckbNote
            // 
            ckbNote.AutoSize = true;
            ckbNote.Location = new Point(456, 60);
            ckbNote.Name = "ckbNote";
            ckbNote.Size = new Size(50, 19);
            ckbNote.TabIndex = 1;
            ckbNote.Text = "노트";
            ckbNote.UseVisualStyleBackColor = true;
            // 
            // ckbPen
            // 
            ckbPen.AutoSize = true;
            ckbPen.Location = new Point(226, 60);
            ckbPen.Name = "ckbPen";
            ckbPen.Size = new Size(50, 19);
            ckbPen.TabIndex = 1;
            ckbPen.Text = "볼펜";
            ckbPen.UseVisualStyleBackColor = true;
            // 
            // btnEvent
            // 
            btnEvent.Location = new Point(22, 96);
            btnEvent.Name = "btnEvent";
            btnEvent.Size = new Size(158, 31);
            btnEvent.TabIndex = 2;
            btnEvent.Text = "구매하기";
            btnEvent.UseVisualStyleBackColor = true;
            btnEvent.Click += btnEvent_Click;
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Font = new Font("맑은 고딕", 14.25F, FontStyle.Regular, GraphicsUnit.Point);
            label2.Location = new Point(22, 147);
            label2.Name = "label2";
            label2.Size = new Size(88, 25);
            label2.TabIndex = 3;
            label2.Text = "주문결과";
            // 
            // lb_order
            // 
            lb_order.AutoSize = true;
            lb_order.Location = new Point(22, 172);
            lb_order.Name = "lb_order";
            lb_order.Size = new Size(12, 15);
            lb_order.TabIndex = 3;
            lb_order.Text = "-";
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Font = new Font("맑은 고딕", 14.25F, FontStyle.Regular, GraphicsUnit.Point);
            label3.Location = new Point(237, 147);
            label3.Name = "label3";
            label3.Size = new Size(237, 25);
            label3.TabIndex = 4;
            label3.Text = "봉투를 구매하시겠습니까?";
            // 
            // groupBox1
            // 
            groupBox1.Controls.Add(radio_no);
            groupBox1.Controls.Add(radio_yes);
            groupBox1.Location = new Point(237, 184);
            groupBox1.Name = "groupBox1";
            groupBox1.Size = new Size(237, 66);
            groupBox1.TabIndex = 5;
            groupBox1.TabStop = false;
            groupBox1.Text = "봉투구매";
            // 
            // radio_no
            // 
            radio_no.AutoSize = true;
            radio_no.Location = new Point(132, 32);
            radio_no.Name = "radio_no";
            radio_no.Size = new Size(61, 19);
            radio_no.TabIndex = 1;
            radio_no.TabStop = true;
            radio_no.Text = "아니오";
            radio_no.UseVisualStyleBackColor = true;
            // 
            // radio_yes
            // 
            radio_yes.AutoSize = true;
            radio_yes.Location = new Point(27, 32);
            radio_yes.Name = "radio_yes";
            radio_yes.Size = new Size(37, 19);
            radio_yes.TabIndex = 0;
            radio_yes.TabStop = true;
            radio_yes.Text = "예";
            radio_yes.UseVisualStyleBackColor = true;
            // 
            // btnCheck
            // 
            btnCheck.Location = new Point(237, 281);
            btnCheck.Name = "btnCheck";
            btnCheck.Size = new Size(93, 28);
            btnCheck.TabIndex = 6;
            btnCheck.Text = "확인";
            btnCheck.UseVisualStyleBackColor = true;
            btnCheck.Click += btnCheck_Click;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(568, 370);
            Controls.Add(btnCheck);
            Controls.Add(groupBox1);
            Controls.Add(label3);
            Controls.Add(lb_order);
            Controls.Add(label2);
            Controls.Add(btnEvent);
            Controls.Add(ckbPen);
            Controls.Add(ckbNote);
            Controls.Add(ckbColor);
            Controls.Add(ckbSharp);
            Controls.Add(ckbPencil);
            Controls.Add(label1);
            Name = "Form1";
            Text = "Form1";
            groupBox1.ResumeLayout(false);
            groupBox1.PerformLayout();
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Label label1;
        private CheckBox ckbPencil;
        private CheckBox ckbSharp;
        private CheckBox ckbColor;
        private CheckBox ckbNote;
        private CheckBox ckbPen;
        private Button btnEvent;
        private Label label2;
        private Label lb_order;
        private Label label3;
        private GroupBox groupBox1;
        private RadioButton radio_no;
        private RadioButton radio_yes;
        private Button btnCheck;
    }
}
