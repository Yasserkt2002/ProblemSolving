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
    public partial class Form3 : Form
    {
        public Form3()
        {
            InitializeComponent();
            button2.Enabled = false;
        }

        private void Form3_Load(object sender, EventArgs e)
        {

        }

        private void button2_Click(object sender, EventArgs e)
        {
          
            MessageBox.Show(checkBox1.Checked.ToString());
           
        }

        private void button1_Click(object sender, EventArgs e)
        {
            MessageBox.Show(radioButton1.Checked.ToString());

        }

        private void checkBox1_CheckedChanged(object sender, EventArgs e)
        {
            if (checkBox1.Checked == false)
                button2.Enabled = false;
            else button2.Enabled = true;
        }
    }
}
