namespace WinFormsApp_new_0729
{
    partial class Form3
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
            toolStripMenu_Color = new ToolStripMenuItem();
            toolStripMenu_Font = new ToolStripMenuItem();
            button1 = new Button();
            toolStripMenu_Front = new ToolStripMenuItem();
            toolStripMenu_Back = new ToolStripMenuItem();
            contextMenuStrip1.SuspendLayout();
            SuspendLayout();
            // 
            // contextMenuStrip1
            // 
            contextMenuStrip1.Items.AddRange(new ToolStripItem[] { toolStripMenu_Color, toolStripMenu_Font });
            contextMenuStrip1.Name = "contextMenuStrip1";
            contextMenuStrip1.Size = new Size(181, 70);
            // 
            // toolStripMenu_Color
            // 
            toolStripMenu_Color.DropDownItems.AddRange(new ToolStripItem[] { toolStripMenu_Front, toolStripMenu_Back });
            toolStripMenu_Color.Name = "toolStripMenu_Color";
            toolStripMenu_Color.Size = new Size(180, 22);
            toolStripMenu_Color.Text = "Color";
            // 
            // toolStripMenu_Font
            // 
            toolStripMenu_Font.Name = "toolStripMenu_Font";
            toolStripMenu_Font.Size = new Size(180, 22);
            toolStripMenu_Font.Text = "Font";
            toolStripMenu_Font.Click += toolStripMenu_Font_Click;
            // 
            // button1
            // 
            button1.Location = new Point(189, 93);
            button1.Name = "button1";
            button1.Size = new Size(234, 137);
            button1.TabIndex = 1;
            button1.Text = "button1";
            button1.UseVisualStyleBackColor = true;
            // 
            // toolStripMenu_Front
            // 
            toolStripMenu_Front.Name = "toolStripMenu_Front";
            toolStripMenu_Front.Size = new Size(180, 22);
            toolStripMenu_Front.Text = "Front";
            toolStripMenu_Front.Click += toolStripMenu_Front_Click;
            // 
            // toolStripMenu_Back
            // 
            toolStripMenu_Back.Name = "toolStripMenu_Back";
            toolStripMenu_Back.Size = new Size(180, 22);
            toolStripMenu_Back.Text = "Back";
            toolStripMenu_Back.Click += toolStripMenu_Back_Click;
            // 
            // Form3
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            ContextMenuStrip = contextMenuStrip1;
            Controls.Add(button1);
            Cursor = Cursors.Arrow;
            Name = "Form3";
            Text = "Form3";
            contextMenuStrip1.ResumeLayout(false);
            ResumeLayout(false);
        }

        #endregion

        private ContextMenuStrip contextMenuStrip1;
        private ToolStripMenuItem toolStripMenu_Color;
        private ToolStripMenuItem toolStripMenu_Font;
        private Button button1;
        private ToolStripMenuItem toolStripMenu_Front;
        private ToolStripMenuItem toolStripMenu_Back;
    }
}