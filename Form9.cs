using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WinFormsApp_0728
{
    public partial class Form9 : Form
    {
        private string[] listview_Column = { "이름", "휴대폰", "소속" };
        public Form9()
        {
            InitializeComponent();
            listView1.View = View.Details;
        }

        private void Form9_Load(object sender, EventArgs e)
        {
            start_ListView();
            add_items();
        }
        private void start_ListView()
        {
            int listview_width = listView1.ClientSize.Width;
            int col_width = listview_width / 3;

            listView1.Columns.Add(listview_Column[0], col_width, HorizontalAlignment.Center);
            listView1.Columns.Add(listview_Column[1], col_width, HorizontalAlignment.Center);
            listView1.Columns.Add(listview_Column[2], col_width, HorizontalAlignment.Center);
        }
        private void add_items()
        {
            ListViewItem newitem = new ListViewItem(new String[] { "홍길동", "010-1234-5678", "활빈당" });
            listView1.Items.Add(newitem);
            ListViewItem newitem2 = new ListViewItem(new String[] { "배트맨", "012-0987-6543", "고담시" });
            listView1.Items.Add(newitem2);
            ListViewItem newitem3 = new ListViewItem(new String[] { "슈퍼맨", "010-1589-7532", "뉴욕타임즈" });
            listView1.Items.Add(newitem3);
            ListViewItem newitem4 = new ListViewItem(new String[] { "신사임당", "017-7854-1234", "속초" });
            listView1.Items.Add(newitem4);
        }

        private void listView1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }
    }
}
