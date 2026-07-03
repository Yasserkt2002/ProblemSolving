using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication1
{
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }

        private void Form2_Load(object sender, EventArgs e)
        {

        }

        private void btnShowFrom2_Click(object sender, EventArgs e)
        {
            Form frm2 = new Form1();
            frm2.Show();
        }

        private void ShowF2AsDialog_Click(object sender, EventArgs e)
        {
              Form frm2 = new Form1();
            frm2.ShowDialog();
        
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (MessageBox.Show("Are you sure you want to exit",
               "Confirm ! ", MessageBoxButtons.OKCancel, MessageBoxIcon.Question,MessageBoxDefaultButton.Button2) == DialogResult.OK)
                this.Close();
            
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Form f = new Form3();
            f.Show();
        }

        private void btnPizzaProject_Click(object sender, EventArgs e)
        {
            Form Pizza_Form = new PizzaForm();
            Pizza_Form.Show();
        }

        private void button1_Click_1(object sender, EventArgs e)
        {
            Form P = new Form4();
            P.Show();
        }
    }
}
