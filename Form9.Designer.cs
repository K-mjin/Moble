namespace WinFormsApp_0725
{
    partial class Form9
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
            ckbSoon = new CheckBox();
            ckbPasta = new CheckBox();
            ckbSteak = new CheckBox();
            ckbTang = new CheckBox();
            btnEvent = new Button();
            lbOrder = new Label();
            label2 = new Label();
            groupBox1 = new GroupBox();
            radioDisagree = new RadioButton();
            radioAgree = new RadioButton();
            btnEnter = new Button();
            label3 = new Label();
            groupBox2 = new GroupBox();
            radioDisagree1 = new RadioButton();
            radioAgree1 = new RadioButton();
            btnEnter1 = new Button();
            label4 = new Label();
            TextBox = new TextBox();
            btnReceipt = new Button();
            label5 = new Label();
            label6 = new Label();
            lbPayInfo = new ListBox();
            cbPay = new ComboBox();
            btnPay = new Button();
            button1 = new Button();
            btnCancel = new Button();
            ckbNudle = new CheckBox();
            ckbRice = new CheckBox();
            textBox2 = new TextBox();
            LblPay = new Label();
            lbSoon = new Label();
            lbSteak = new Label();
            lbNudle = new Label();
            lbPasta = new Label();
            lbTang = new Label();
            lbRice = new Label();
            label7 = new Label();
            groupBox3 = new GroupBox();
            ZeroCoke = new Label();
            NoSelect = new Label();
            Cider = new Label();
            Coke = new Label();
            RB4 = new RadioButton();
            RB3 = new RadioButton();
            RB2 = new RadioButton();
            RB1 = new RadioButton();
            groupBox1.SuspendLayout();
            groupBox2.SuspendLayout();
            groupBox3.SuspendLayout();
            SuspendLayout();
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Font = new Font("맑은 고딕", 18F, FontStyle.Bold, GraphicsUnit.Point);
            label1.Location = new Point(25, 26);
            label1.Name = "label1";
            label1.Size = new Size(134, 32);
            label1.TabIndex = 0;
            label1.Text = "주문하세요";
            // 
            // ckbSoon
            // 
            ckbSoon.AutoSize = true;
            ckbSoon.Location = new Point(30, 71);
            ckbSoon.Name = "ckbSoon";
            ckbSoon.Size = new Size(62, 19);
            ckbSoon.TabIndex = 1;
            ckbSoon.Text = "순대국";
            ckbSoon.UseVisualStyleBackColor = true;
            ckbSoon.CheckedChanged += ckbSoon_CheckedChanged;
            // 
            // ckbPasta
            // 
            ckbPasta.AutoSize = true;
            ckbPasta.Location = new Point(189, 71);
            ckbPasta.Name = "ckbPasta";
            ckbPasta.Size = new Size(62, 19);
            ckbPasta.TabIndex = 2;
            ckbPasta.Text = "파스타";
            ckbPasta.UseVisualStyleBackColor = true;
            ckbPasta.CheckedChanged += ckbPasta_CheckedChanged;
            // 
            // ckbSteak
            // 
            ckbSteak.AutoSize = true;
            ckbSteak.Location = new Point(30, 114);
            ckbSteak.Name = "ckbSteak";
            ckbSteak.Size = new Size(74, 19);
            ckbSteak.TabIndex = 3;
            ckbSteak.Text = "스테이크";
            ckbSteak.UseVisualStyleBackColor = true;
            ckbSteak.CheckedChanged += ckbSteak_CheckedChanged;
            // 
            // ckbTang
            // 
            ckbTang.AutoSize = true;
            ckbTang.Location = new Point(189, 114);
            ckbTang.Name = "ckbTang";
            ckbTang.Size = new Size(62, 19);
            ckbTang.TabIndex = 4;
            ckbTang.Text = "탕수육";
            ckbTang.UseVisualStyleBackColor = true;
            ckbTang.CheckedChanged += ckbTang_CheckedChanged;
            // 
            // btnEvent
            // 
            btnEvent.BackColor = Color.White;
            btnEvent.FlatStyle = FlatStyle.Flat;
            btnEvent.Font = new Font("맑은 고딕", 9F, FontStyle.Regular, GraphicsUnit.Point);
            btnEvent.Location = new Point(364, 67);
            btnEvent.Name = "btnEvent";
            btnEvent.Size = new Size(110, 23);
            btnEvent.TabIndex = 5;
            btnEvent.Text = "주문확인";
            btnEvent.UseVisualStyleBackColor = false;
            btnEvent.Click += btnEvent_Click;
            // 
            // lbOrder
            // 
            lbOrder.AutoSize = true;
            lbOrder.Font = new Font("맑은 고딕", 9F, FontStyle.Regular, GraphicsUnit.Point);
            lbOrder.Location = new Point(389, 114);
            lbOrder.Name = "lbOrder";
            lbOrder.Size = new Size(55, 15);
            lbOrder.TabIndex = 6;
            lbOrder.Text = "주문결과";
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Font = new Font("맑은 고딕", 14.25F, FontStyle.Regular, GraphicsUnit.Point);
            label2.Location = new Point(12, 519);
            label2.Name = "label2";
            label2.Size = new Size(417, 25);
            label2.TabIndex = 7;
            label2.Text = "이벤트에 응모하려면 개인정보를 동의해주세요.";
            // 
            // groupBox1
            // 
            groupBox1.Controls.Add(radioDisagree);
            groupBox1.Controls.Add(radioAgree);
            groupBox1.Location = new Point(25, 554);
            groupBox1.Name = "groupBox1";
            groupBox1.Size = new Size(322, 71);
            groupBox1.TabIndex = 8;
            groupBox1.TabStop = false;
            groupBox1.Text = "개인정보동의";
            // 
            // radioDisagree
            // 
            radioDisagree.AutoSize = true;
            radioDisagree.Location = new Point(178, 35);
            radioDisagree.Name = "radioDisagree";
            radioDisagree.Size = new Size(73, 19);
            radioDisagree.TabIndex = 1;
            radioDisagree.TabStop = true;
            radioDisagree.Text = "동의안함";
            radioDisagree.UseVisualStyleBackColor = true;
            // 
            // radioAgree
            // 
            radioAgree.AutoSize = true;
            radioAgree.Location = new Point(43, 35);
            radioAgree.Name = "radioAgree";
            radioAgree.Size = new Size(49, 19);
            radioAgree.TabIndex = 0;
            radioAgree.TabStop = true;
            radioAgree.Text = "동의";
            radioAgree.UseVisualStyleBackColor = true;
            // 
            // btnEnter
            // 
            btnEnter.BackColor = Color.White;
            btnEnter.FlatStyle = FlatStyle.Flat;
            btnEnter.Location = new Point(399, 578);
            btnEnter.Name = "btnEnter";
            btnEnter.Size = new Size(75, 23);
            btnEnter.TabIndex = 9;
            btnEnter.Text = "응모";
            btnEnter.UseVisualStyleBackColor = false;
            btnEnter.Click += btnEnter_Click;
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Font = new Font("맑은 고딕", 14.25F, FontStyle.Regular, GraphicsUnit.Point);
            label3.Location = new Point(12, 650);
            label3.Name = "label3";
            label3.Size = new Size(360, 25);
            label3.TabIndex = 10;
            label3.Text = "회원가입을 원하시면 동의를 눌러주세요.";
            // 
            // groupBox2
            // 
            groupBox2.Controls.Add(radioDisagree1);
            groupBox2.Controls.Add(radioAgree1);
            groupBox2.Location = new Point(25, 688);
            groupBox2.Name = "groupBox2";
            groupBox2.Size = new Size(322, 72);
            groupBox2.TabIndex = 11;
            groupBox2.TabStop = false;
            groupBox2.Text = "회원가입";
            // 
            // radioDisagree1
            // 
            radioDisagree1.AutoSize = true;
            radioDisagree1.Location = new Point(178, 33);
            radioDisagree1.Name = "radioDisagree1";
            radioDisagree1.Size = new Size(73, 19);
            radioDisagree1.TabIndex = 1;
            radioDisagree1.TabStop = true;
            radioDisagree1.Text = "동의안함";
            radioDisagree1.UseVisualStyleBackColor = true;
            // 
            // radioAgree1
            // 
            radioAgree1.AutoSize = true;
            radioAgree1.Location = new Point(43, 33);
            radioAgree1.Name = "radioAgree1";
            radioAgree1.Size = new Size(49, 19);
            radioAgree1.TabIndex = 0;
            radioAgree1.TabStop = true;
            radioAgree1.Text = "동의";
            radioAgree1.UseVisualStyleBackColor = true;
            // 
            // btnEnter1
            // 
            btnEnter1.BackColor = Color.White;
            btnEnter1.FlatStyle = FlatStyle.Flat;
            btnEnter1.Location = new Point(399, 713);
            btnEnter1.Name = "btnEnter1";
            btnEnter1.Size = new Size(75, 23);
            btnEnter1.TabIndex = 12;
            btnEnter1.Text = "가입하기";
            btnEnter1.UseVisualStyleBackColor = false;
            btnEnter1.Click += btnEnter1_Click;
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Font = new Font("맑은 고딕", 14.25F, FontStyle.Regular, GraphicsUnit.Point);
            label4.Location = new Point(12, 784);
            label4.Name = "label4";
            label4.Size = new Size(159, 25);
            label4.TabIndex = 13;
            label4.Text = "주문 시 요구사항";
            // 
            // TextBox
            // 
            TextBox.Location = new Point(25, 813);
            TextBox.Multiline = true;
            TextBox.Name = "TextBox";
            TextBox.Size = new Size(322, 78);
            TextBox.TabIndex = 14;
            // 
            // btnReceipt
            // 
            btnReceipt.BackColor = Color.White;
            btnReceipt.FlatStyle = FlatStyle.Flat;
            btnReceipt.Location = new Point(399, 841);
            btnReceipt.Name = "btnReceipt";
            btnReceipt.Size = new Size(75, 23);
            btnReceipt.TabIndex = 15;
            btnReceipt.Text = "접수";
            btnReceipt.UseVisualStyleBackColor = false;
            btnReceipt.Click += btnReceipt_Click;
            // 
            // label5
            // 
            label5.AutoSize = true;
            label5.Font = new Font("맑은 고딕", 14.25F, FontStyle.Regular, GraphicsUnit.Point);
            label5.Location = new Point(25, 909);
            label5.Name = "label5";
            label5.Size = new Size(88, 25);
            label5.TabIndex = 16;
            label5.Text = "결제방법";
            // 
            // label6
            // 
            label6.AutoSize = true;
            label6.Font = new Font("맑은 고딕", 14.25F, FontStyle.Regular, GraphicsUnit.Point);
            label6.Location = new Point(186, 909);
            label6.Name = "label6";
            label6.Size = new Size(88, 25);
            label6.TabIndex = 16;
            label6.Text = "결제정보";
            // 
            // lbPayInfo
            // 
            lbPayInfo.FormattingEnabled = true;
            lbPayInfo.ItemHeight = 15;
            lbPayInfo.Items.AddRange(new object[] { "일시불", "3개월 할부", "6개월 할부" });
            lbPayInfo.Location = new Point(186, 946);
            lbPayInfo.Name = "lbPayInfo";
            lbPayInfo.Size = new Size(120, 94);
            lbPayInfo.TabIndex = 17;
            // 
            // cbPay
            // 
            cbPay.FormattingEnabled = true;
            cbPay.Items.AddRange(new object[] { "신용카드", "무통장입금", "포인트" });
            cbPay.Location = new Point(25, 946);
            cbPay.Name = "cbPay";
            cbPay.Size = new Size(121, 23);
            cbPay.TabIndex = 18;
            cbPay.Text = "신용카드";
            cbPay.SelectedIndexChanged += cbPay_SelectedIndexChanged;
            // 
            // btnPay
            // 
            btnPay.BackColor = Color.White;
            btnPay.FlatStyle = FlatStyle.Flat;
            btnPay.Location = new Point(399, 936);
            btnPay.Name = "btnPay";
            btnPay.Size = new Size(75, 23);
            btnPay.TabIndex = 19;
            btnPay.Text = "결제";
            btnPay.UseVisualStyleBackColor = false;
            btnPay.Click += btnPay_Click;
            // 
            // button1
            // 
            button1.Location = new Point(68, 233);
            button1.Name = "button1";
            button1.Size = new Size(75, 23);
            button1.TabIndex = 20;
            button1.Text = "주문하기";
            button1.UseVisualStyleBackColor = true;
            button1.Click += button1_Click;
            // 
            // btnCancel
            // 
            btnCancel.Location = new Point(189, 233);
            btnCancel.Name = "btnCancel";
            btnCancel.Size = new Size(75, 23);
            btnCancel.TabIndex = 21;
            btnCancel.Text = "주문취소";
            btnCancel.UseVisualStyleBackColor = true;
            btnCancel.Click += btnCancel_Click;
            // 
            // ckbNudle
            // 
            ckbNudle.AutoSize = true;
            ckbNudle.Location = new Point(30, 153);
            ckbNudle.Name = "ckbNudle";
            ckbNudle.Size = new Size(62, 19);
            ckbNudle.TabIndex = 22;
            ckbNudle.Text = "팟타이";
            ckbNudle.UseVisualStyleBackColor = true;
            ckbNudle.CheckedChanged += ckbNudle_CheckedChanged;
            // 
            // ckbRice
            // 
            ckbRice.AutoSize = true;
            ckbRice.Location = new Point(189, 153);
            ckbRice.Name = "ckbRice";
            ckbRice.Size = new Size(62, 19);
            ckbRice.TabIndex = 23;
            ckbRice.Text = "볶음밥";
            ckbRice.UseVisualStyleBackColor = true;
            ckbRice.CheckedChanged += ckbRice_CheckedChanged;
            // 
            // textBox2
            // 
            textBox2.Location = new Point(98, 277);
            textBox2.Name = "textBox2";
            textBox2.Size = new Size(207, 23);
            textBox2.TabIndex = 24;
            // 
            // LblPay
            // 
            LblPay.AutoSize = true;
            LblPay.Location = new Point(25, 280);
            LblPay.Name = "LblPay";
            LblPay.Size = new Size(67, 15);
            LblPay.TabIndex = 25;
            LblPay.Text = "주문합계액";
            // 
            // lbSoon
            // 
            lbSoon.AutoSize = true;
            lbSoon.Location = new Point(117, 70);
            lbSoon.Name = "lbSoon";
            lbSoon.Size = new Size(35, 15);
            lbSoon.TabIndex = 26;
            lbSoon.Text = "8000";
            // 
            // lbSteak
            // 
            lbSteak.AutoSize = true;
            lbSteak.Location = new Point(117, 114);
            lbSteak.Name = "lbSteak";
            lbSteak.Size = new Size(42, 15);
            lbSteak.TabIndex = 26;
            lbSteak.Text = "29000";
            // 
            // lbNudle
            // 
            lbNudle.AutoSize = true;
            lbNudle.Location = new Point(117, 153);
            lbNudle.Name = "lbNudle";
            lbNudle.Size = new Size(42, 15);
            lbNudle.TabIndex = 26;
            lbNudle.Text = "11000";
            // 
            // lbPasta
            // 
            lbPasta.AutoSize = true;
            lbPasta.Location = new Point(263, 70);
            lbPasta.Name = "lbPasta";
            lbPasta.Size = new Size(42, 15);
            lbPasta.TabIndex = 26;
            lbPasta.Text = "12000";
            // 
            // lbTang
            // 
            lbTang.AutoSize = true;
            lbTang.Location = new Point(263, 114);
            lbTang.Name = "lbTang";
            lbTang.Size = new Size(42, 15);
            lbTang.TabIndex = 26;
            lbTang.Text = "25000";
            // 
            // lbRice
            // 
            lbRice.AutoSize = true;
            lbRice.Location = new Point(263, 153);
            lbRice.Name = "lbRice";
            lbRice.Size = new Size(35, 15);
            lbRice.TabIndex = 26;
            lbRice.Text = "9000";
            // 
            // label7
            // 
            label7.AutoSize = true;
            label7.Font = new Font("맑은 고딕", 14.25F, FontStyle.Bold, GraphicsUnit.Point);
            label7.Location = new Point(25, 332);
            label7.Name = "label7";
            label7.Size = new Size(114, 25);
            label7.TabIndex = 27;
            label7.Text = "음료수 선택";
            // 
            // groupBox3
            // 
            groupBox3.Controls.Add(ZeroCoke);
            groupBox3.Controls.Add(NoSelect);
            groupBox3.Controls.Add(Cider);
            groupBox3.Controls.Add(Coke);
            groupBox3.Controls.Add(RB4);
            groupBox3.Controls.Add(RB3);
            groupBox3.Controls.Add(RB2);
            groupBox3.Controls.Add(RB1);
            groupBox3.Location = new Point(30, 369);
            groupBox3.Name = "groupBox3";
            groupBox3.Size = new Size(444, 137);
            groupBox3.TabIndex = 28;
            groupBox3.TabStop = false;
            groupBox3.Text = "음료수종류";
            // 
            // ZeroCoke
            // 
            ZeroCoke.AutoSize = true;
            ZeroCoke.Location = new Point(355, 33);
            ZeroCoke.Name = "ZeroCoke";
            ZeroCoke.Size = new Size(35, 15);
            ZeroCoke.TabIndex = 4;
            ZeroCoke.Text = "3000";
            // 
            // NoSelect
            // 
            NoSelect.AutoSize = true;
            NoSelect.Location = new Point(355, 85);
            NoSelect.Name = "NoSelect";
            NoSelect.Size = new Size(14, 15);
            NoSelect.TabIndex = 4;
            NoSelect.Text = "0";
            // 
            // Cider
            // 
            Cider.AutoSize = true;
            Cider.Location = new Point(123, 85);
            Cider.Name = "Cider";
            Cider.Size = new Size(35, 15);
            Cider.TabIndex = 4;
            Cider.Text = "2500";
            // 
            // Coke
            // 
            Coke.AutoSize = true;
            Coke.Location = new Point(123, 33);
            Coke.Name = "Coke";
            Coke.Size = new Size(35, 15);
            Coke.TabIndex = 4;
            Coke.Text = "3000";
            // 
            // RB4
            // 
            RB4.AutoSize = true;
            RB4.Location = new Point(244, 83);
            RB4.Name = "RB4";
            RB4.Size = new Size(97, 19);
            RB4.TabIndex = 3;
            RB4.TabStop = true;
            RB4.Text = "선택하지않음";
            RB4.UseVisualStyleBackColor = true;
            RB4.CheckedChanged += RB4_CheckedChanged;
            // 
            // RB3
            // 
            RB3.AutoSize = true;
            RB3.Location = new Point(25, 83);
            RB3.Name = "RB3";
            RB3.Size = new Size(61, 19);
            RB3.TabIndex = 2;
            RB3.TabStop = true;
            RB3.Text = "사이다";
            RB3.UseVisualStyleBackColor = true;
            RB3.CheckedChanged += RB3_CheckedChanged;
            // 
            // RB2
            // 
            RB2.AutoSize = true;
            RB2.Location = new Point(244, 31);
            RB2.Name = "RB2";
            RB2.Size = new Size(73, 19);
            RB2.TabIndex = 1;
            RB2.TabStop = true;
            RB2.Text = "제로콜라";
            RB2.UseVisualStyleBackColor = true;
            RB2.CheckedChanged += RB2_CheckedChanged;
            // 
            // RB1
            // 
            RB1.AutoSize = true;
            RB1.Location = new Point(25, 31);
            RB1.Name = "RB1";
            RB1.Size = new Size(49, 19);
            RB1.TabIndex = 0;
            RB1.TabStop = true;
            RB1.Text = "콜라";
            RB1.UseVisualStyleBackColor = true;
            RB1.CheckedChanged += RB1_CheckedChanged;
            // 
            // Form9
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            AutoScroll = true;
            BackColor = Color.LightYellow;
            ClientSize = new Size(572, 1061);
            Controls.Add(groupBox3);
            Controls.Add(label7);
            Controls.Add(lbRice);
            Controls.Add(lbTang);
            Controls.Add(lbPasta);
            Controls.Add(lbNudle);
            Controls.Add(lbSteak);
            Controls.Add(lbSoon);
            Controls.Add(LblPay);
            Controls.Add(textBox2);
            Controls.Add(ckbRice);
            Controls.Add(ckbNudle);
            Controls.Add(btnCancel);
            Controls.Add(button1);
            Controls.Add(btnPay);
            Controls.Add(cbPay);
            Controls.Add(lbPayInfo);
            Controls.Add(label6);
            Controls.Add(label5);
            Controls.Add(btnReceipt);
            Controls.Add(TextBox);
            Controls.Add(label4);
            Controls.Add(btnEnter1);
            Controls.Add(groupBox2);
            Controls.Add(label3);
            Controls.Add(btnEnter);
            Controls.Add(groupBox1);
            Controls.Add(label2);
            Controls.Add(lbOrder);
            Controls.Add(btnEvent);
            Controls.Add(ckbTang);
            Controls.Add(ckbSteak);
            Controls.Add(ckbPasta);
            Controls.Add(ckbSoon);
            Controls.Add(label1);
            Font = new Font("맑은 고딕", 9F, FontStyle.Regular, GraphicsUnit.Point);
            Name = "Form9";
            Text = "나만의 키오스크";
            groupBox1.ResumeLayout(false);
            groupBox1.PerformLayout();
            groupBox2.ResumeLayout(false);
            groupBox2.PerformLayout();
            groupBox3.ResumeLayout(false);
            groupBox3.PerformLayout();
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Label label1;
        private CheckBox ckbSoon;
        private CheckBox ckbPasta;
        private CheckBox ckbSteak;
        private CheckBox ckbTang;
        private Button btnEvent;
        private Label lbOrder;
        private Label label2;
        private GroupBox groupBox1;
        private RadioButton radioDisagree;
        private RadioButton radioAgree;
        private Button btnEnter;
        private Label label3;
        private GroupBox groupBox2;
        private RadioButton radioDisagree1;
        private RadioButton radioAgree1;
        private Button btnEnter1;
        private Label label4;
        private TextBox TextBox;
        private Button btnReceipt;
        private Label label5;
        private Label label6;
        private ListBox lbPayInfo;
        private ComboBox cbPay;
        private Button btnPay;
        private Button button1;
        private Button btnCancel;
        private CheckBox ckbNudle;
        private CheckBox ckbRice;
        private TextBox textBox2;
        private Label LblPay;
        private Label lbSoon;
        private Label lbSteak;
        private Label lbNudle;
        private Label lbPasta;
        private Label lbTang;
        private Label lbRice;
        private Label label7;
        private GroupBox groupBox3;
        private RadioButton RB4;
        private RadioButton RB3;
        private RadioButton RB2;
        private RadioButton RB1;
        private Label NoSelect;
        private Label Cider;
        private Label Coke;
        private Label ZeroCoke;
    }
}