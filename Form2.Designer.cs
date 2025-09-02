namespace WinFormsApp_new_0729
{
    partial class Form2
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
            contextMenuStrip1 = new ContextMenuStrip(components);
            toolStripCopy = new ToolStripMenuItem();
            toolStripPaste = new ToolStripMenuItem();
            toolStripCut = new ToolStripMenuItem();
            lbResult = new Label();
            contextMenuStrip1.SuspendLayout();
            SuspendLayout();
            // 
            // contextMenuStrip1
            // 
            contextMenuStrip1.Items.AddRange(new ToolStripItem[] { toolStripCopy, toolStripPaste, toolStripCut });
            contextMenuStrip1.Name = "contextMenuStrip1";
            contextMenuStrip1.Size = new Size(181, 92);
            // 
            // toolStripCopy
            // 
            toolStripCopy.Name = "toolStripCopy";
            toolStripCopy.Size = new Size(180, 22);
            toolStripCopy.Text = "복사";
            toolStripCopy.Click += toolStripCopy_Click;
            // 
            // toolStripPaste
            // 
            toolStripPaste.Name = "toolStripPaste";
            toolStripPaste.Size = new Size(180, 22);
            toolStripPaste.Text = "붙여넣기";
            toolStripPaste.Click += toolStripPaste_Click;
            // 
            // toolStripCut
            // 
            toolStripCut.Name = "toolStripCut";
            toolStripCut.Size = new Size(180, 22);
            toolStripCut.Text = "잘라내기";
            toolStripCut.Click += toolStripCut_Click;
            // 
            // lbResult
            // 
            lbResult.AutoSize = true;
            lbResult.Location = new Point(52, 148);
            lbResult.Name = "lbResult";
            lbResult.Size = new Size(107, 15);
            lbResult.TabIndex = 1;
            lbResult.Text = "결과를 출력합니다";
            // 
            // Form2
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            ContextMenuStrip = contextMenuStrip1;
            Controls.Add(lbResult);
            Name = "Form2";
            Text = "Form2";
            contextMenuStrip1.ResumeLayout(false);
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private ContextMenuStrip contextMenuStrip1;
        private ToolStripMenuItem toolStripCopy;
        private ToolStripMenuItem toolStripPaste;
        private ToolStripMenuItem toolStripCut;
        private Label lbResult;
    }
}