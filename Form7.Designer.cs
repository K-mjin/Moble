namespace WinFormsApp_0729
{
    partial class Form7
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
            menuStrip1 = new MenuStrip();
            ToolStripFile = new ToolStripMenuItem();
            ToolStripNew = new ToolStripMenuItem();
            ToolStripOpen = new ToolStripMenuItem();
            ToolStripSave = new ToolStripMenuItem();
            ToolStripSeparator1 = new ToolStripSeparator();
            ToolStripExit = new ToolStripMenuItem();
            toolStripMenuItem2 = new ToolStripMenuItem();
            toolStripMenuCa = new ToolStripMenuItem();
            toolStripMenuPi = new ToolStripMenuItem();
            lnResult = new Label();
            menuStrip1.SuspendLayout();
            SuspendLayout();
            // 
            // menuStrip1
            // 
            menuStrip1.Items.AddRange(new ToolStripItem[] { ToolStripFile, toolStripMenuItem2 });
            menuStrip1.Location = new Point(0, 0);
            menuStrip1.Name = "menuStrip1";
            menuStrip1.Size = new Size(624, 24);
            menuStrip1.TabIndex = 0;
            menuStrip1.Text = "menuStrip1";
            // 
            // ToolStripFile
            // 
            ToolStripFile.DropDownItems.AddRange(new ToolStripItem[] { ToolStripNew, ToolStripOpen, ToolStripSave, ToolStripSeparator1, ToolStripExit });
            ToolStripFile.Name = "ToolStripFile";
            ToolStripFile.Size = new Size(43, 20);
            ToolStripFile.Text = "파일";
            // 
            // ToolStripNew
            // 
            ToolStripNew.Name = "ToolStripNew";
            ToolStripNew.ShortcutKeys = Keys.Control | Keys.N;
            ToolStripNew.Size = new Size(181, 22);
            ToolStripNew.Text = "새로 만들기";
            ToolStripNew.Click += ToolStripNew_Click;
            // 
            // ToolStripOpen
            // 
            ToolStripOpen.Name = "ToolStripOpen";
            ToolStripOpen.ShortcutKeys = Keys.Control | Keys.O;
            ToolStripOpen.Size = new Size(181, 22);
            ToolStripOpen.Text = "열기";
            ToolStripOpen.Click += ToolStripOpen_Click;
            // 
            // ToolStripSave
            // 
            ToolStripSave.Name = "ToolStripSave";
            ToolStripSave.ShortcutKeys = Keys.Control | Keys.S;
            ToolStripSave.Size = new Size(181, 22);
            ToolStripSave.Text = "저장";
            ToolStripSave.Click += ToolStripSave_Click;
            // 
            // ToolStripSeparator1
            // 
            ToolStripSeparator1.Name = "ToolStripSeparator1";
            ToolStripSeparator1.Size = new Size(178, 6);
            // 
            // ToolStripExit
            // 
            ToolStripExit.Name = "ToolStripExit";
            ToolStripExit.Size = new Size(181, 22);
            ToolStripExit.Text = "종료";
            ToolStripExit.Click += ToolStripExit_Click;
            // 
            // toolStripMenuItem2
            // 
            toolStripMenuItem2.DropDownItems.AddRange(new ToolStripItem[] { toolStripMenuCa, toolStripMenuPi });
            toolStripMenuItem2.Name = "toolStripMenuItem2";
            toolStripMenuItem2.Size = new Size(67, 20);
            toolStripMenuItem2.Text = "프로그램";
            // 
            // toolStripMenuCa
            // 
            toolStripMenuCa.Name = "toolStripMenuCa";
            toolStripMenuCa.Size = new Size(180, 22);
            toolStripMenuCa.Text = "계산기";
            toolStripMenuCa.Click += toolStripMenuCa_Click;
            // 
            // toolStripMenuPi
            // 
            toolStripMenuPi.Name = "toolStripMenuPi";
            toolStripMenuPi.Size = new Size(180, 22);
            toolStripMenuPi.Text = "그림판";
            toolStripMenuPi.Click += toolStripMenuPi_Click;
            // 
            // lnResult
            // 
            lnResult.AutoSize = true;
            lnResult.Location = new Point(22, 161);
            lnResult.Name = "lnResult";
            lnResult.Size = new Size(110, 15);
            lnResult.TabIndex = 1;
            lnResult.Text = "결과를 출력합니다.";
            // 
            // Form7
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(624, 377);
            Controls.Add(lnResult);
            Controls.Add(menuStrip1);
            MainMenuStrip = menuStrip1;
            Name = "Form7";
            Text = "Form7";
            menuStrip1.ResumeLayout(false);
            menuStrip1.PerformLayout();
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private MenuStrip menuStrip1;
        private ToolStripMenuItem ToolStripFile;
        private ToolStripMenuItem ToolStripNew;
        private ToolStripMenuItem ToolStripOpen;
        private ToolStripMenuItem ToolStripSave;
        private ToolStripMenuItem ToolStripExit;
        private ToolStripMenuItem toolStripMenuItem2;
        private ToolStripSeparator ToolStripSeparator1;
        private Label lnResult;
        private ToolStripMenuItem toolStripMenuCa;
        private ToolStripMenuItem toolStripMenuPi;
    }
}