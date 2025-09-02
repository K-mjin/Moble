//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;
//using System.Threading.Tasks;

//namespace WinFormsApp_new_0729
//{
//    internal class Class1 : Form
//    {
//        MenuStrip menuStrip = new MenuStrip();

//        public Class1()
//        {
//            this.Text = "MenuStrip - 파일 생성 예제";
//            this.Width = 800;
//            this.Height = 700;

//            ToolStripMenuItem fileMenu = new ToolStripMenuItem("File");
//            ToolStripMenuItem newItem = new ToolStripMenuItem("New");
//            newItem.Click += (s, e) =>
//            {
//                string folderPath = @"C:\Temp";
//                try
//                {
//                    if (!Directory.Exists(folderPath))
//                        Directory.CreateDirectory(folderPath);
//                    string timestamp = DateTime.Now.ToString("yyyyMMdd_HHmmss");
//                    string fileName = $"NewFile_{timestamp}.txt";
//                    string filePath = Path.Combine(folderPath, fileName);

//                    File.Create(filePath).Close();
//                    MessageBox.Show($"파일이 생성되었습니다:\n{filePath}", "성공");
//                }
//                catch (Exception ex)
//                {
//                    MessageBox.Show("오류발생 : " + ex.Message, "에러");
//                }
//            };
//            fileMenu.DropDownItems.Add(newItem);

//            menuStrip.Items.Add(fileMenu);

//            this.MainMenuStrip = menuStrip;

//            this.Controls.Add(menuStrip);
//        }
//        public static void Main()
//        {
//            Application.EnableVisualStyles();

//            Application.SetCompatibleTextRenderingDefault(false);

//            Application.Run(new Class1());
//        }
//    }
//}
