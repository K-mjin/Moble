using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Security.Cryptography.Xml;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WinFormsApp_0728
{
    public partial class Form6 : Form
    {
        public Form6()
        {
            InitializeComponent();

            domainUpDownList.Add(domainUpDown1);
            numericUpDownList.Add(numericUpDown1);

            dx = domainUpDown1.Location.X;
            dy = domainUpDown1.Location.Y;
            nx = numericUpDown1.Location.X;
            ny = numericUpDown1.Location.Y;
        }
        List<DomainUpDown> domainUpDownList = new List<DomainUpDown>();

        List<NumericUpDown> numericUpDownList = new List<NumericUpDown>();

        int y = 30;
        int cnt = 1;
        int dx, dy;
        int nx, ny;

        static int[] price = new int[] { 7000, 9000, 11000, 10000, 15000 };
        static string[] menu = new string[] { "짜장면", "짬뽕", "간짜장", "쟁반짜장", "해물짬뽕", "꿔바로우" };

        private void btnAdd_Click(object sender, EventArgs e)
        {
            DomainUpDown domainUpDown = new DomainUpDown();
            NumericUpDown numericUpDown = new NumericUpDown();

            for (int i = 0; i < domainUpDown1.Items.Count; i++)
            {
                domainUpDown.Items.Add(domainUpDown1.Items[i]);
            }
            //domainUpDown.Location = new System.Drawing.Point(120, 23 + y);

            //numericUpDown.Location = new System.Drawing.Point(120, 23 + y);

            domainUpDown.Location = new Point(dx, dy + y);
            numericUpDown.Location = new Point(nx, ny + y);


            y += 30;

            domainUpDownList.Add(domainUpDown);
            numericUpDownList.Add(numericUpDown);
            cnt++;

            for (int i = 0; i < domainUpDownList.Count; i++)
            {
                Controls.Add(domainUpDownList[i]);
                Controls.Add(numericUpDownList[i]);
            }
        }

        private void btnDel_Click(object sender, EventArgs e)
        {
            if (domainUpDownList.Count > 1)
            {
                Controls.Remove(domainUpDownList[cnt - 1]);
                Controls.Remove(numericUpDownList[cnt - 1]);
                domainUpDownList.RemoveAt(cnt - 1);
                numericUpDownList.RemoveAt(cnt - 1);
                y -= 30;
                cnt--;
            }
            else
            {
                MessageBox.Show("더이상 못지움");
                cnt = 1;
            }
        }

        private void btn_result_Click(object sender, EventArgs e)
        {
            int sum = 0;
            int num = 0;

            for (int i = 0; i < cnt; i++)
            {
                for (int k = 0; k < menu.Length; k++)
                {
                    if (domainUpDownList[i].Text == menu[k])
                    {
                        num = price[k] * (int)numericUpDownList[i].Value;
                        sum += num;
                    }
                }
            }
            lb_result_price.Text = sum.ToString();
        }
    }
}
