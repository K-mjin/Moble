namespace WinFormsApp_0728
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        string strOrder = "";

        private void btnEvent_Click(object sender, EventArgs e)
        {
            lb_order.Text = "";

            if (ckbPencil.Checked == true)
                strOrder += ckbPencil.Text + "\n";
            if (ckbSharp.Checked == true)
                strOrder += ckbSharp.Text + "\n";
            if (ckbPen.Checked == true)
                strOrder += ckbPen.Text + "\n";
            if (ckbColor.Checked == true)
                strOrder += ckbColor.Text + "\n";
            if (ckbNote.Checked == true)
                strOrder += ckbNote.Text + "\n";

            lb_order.Text = strOrder + "��ǰ�� �����Ͽ����ϴ�.";

            if (radio_no.Checked == false)
                MessageBox.Show("������ �������� �ʾҽ��ϴ�.");
            if (radio_yes.Checked == false)
                MessageBox.Show("������ �������� �ʾҽ��ϴ�.");
        }

        private void btnCheck_Click(object sender, EventArgs e)
        {
            if (radio_no.Checked == true)
                MessageBox.Show("������ �������� �ʾҽ��ϴ�.");
            else
                MessageBox.Show("������ �����Ͽ����ϴ�.");
        }
    }
}
