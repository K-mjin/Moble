namespace WinFormsApp_0725
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btn_contains_Click(object sender, EventArgs e)
        {
            string str = TextBox.ToString();

            lb_Contains.Text = str.Contains("Test").ToString();
            lb_Equals.Text = str.Equals("Test").ToString();
            lb_Length.Text = str.Length.ToString();
            //lb_Tolower.Text = str.Tolower().ToString();
            //lb_Toupper.Text = str.Toupper().ToString();
        }

        private void btn_init_Click(object sender, EventArgs e)
        {
            lb_Contains.Text = "-";
            lb_Equals.Text = "-";
            lb_Length.Text = "-";
            lb_Tolower.Text = "-";
            lb_Toupper.Text = "-";
        }
    }
}
