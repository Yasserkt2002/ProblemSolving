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
    public partial class PizzaForm : Form
    {

        int Price=0;
        public PizzaForm()
        {
            InitializeComponent();

        }









   





       

        float GetSelectedSizePrice()
        {
            
            if (RadSmall.Checked)
                return Convert.ToSingle(RadSmall.Tag);
            else if (RadMidum.Checked)
                return Convert.ToSingle(RadMidum.Tag);  
            else
                return Convert.ToSingle(RadLarge.Tag);
        }

        float GetSelectedToppingPrice()
        {
            float T=0;
            if(chkExtraChees.Checked)    
                T += Convert.ToSingle(chkExtraChees.Tag);
            else if (chkTomatos.Checked)
                T += Convert.ToSingle(chkTomatos.Tag);
            else if (chkGreenPapers.Checked)
                T += Convert.ToSingle(chkGreenPapers.Tag);
            else if (chkMushrooms.Checked)
                T += Convert.ToSingle(chkMushrooms.Tag);
            else if (chkOlives.Checked)
                T += Convert.ToSingle(chkOlives.Tag);
            else 
                T += Convert.ToSingle(chkOnion.Tag);

            return T;
        }

        float GetSelectedCrustPrice()
        {
           
            if (RadThinCrust.Checked)
                return Convert.ToSingle(RadThinCrust.Tag);
        
            else
                return Convert.ToSingle(RadThinkCrust.Tag);
        }

        float CalculateTotalPrice()
        {
            return (GetSelectedCrustPrice() + GetSelectedToppingPrice() + GetSelectedSizePrice());
        }

        void UpdatePrice()
        {
          LbPrice.Text= CalculateTotalPrice().ToString();
        }

       void  UpdateSize()
        {
            UpdatePrice();

            if (RadSmall.Checked)
                LbResultOfSize.Text = "Small";
            else if (RadMidum.Checked)
                LbResultOfSize.Text = "Midum";
            else LbResultOfSize.Text = "Large";
        }

       void UpdateToppings()
       {
           UpdatePrice();
           string T="";
           if (chkExtraChees.Checked)
               T ="ExtraChees";
           else if (chkTomatos.Checked)
               T += "Tomatos";
           else if (chkGreenPapers.Checked)
               T += "GreenPapers";
           else if (chkMushrooms.Checked)
               T += "Mushrooms";
           else if (chkOlives.Checked)
               T += "Olives";
           else
               T += "Onion";
           LbResultsOfToppings.Text = T;

       }

       void UpdateCrust()
       {
           UpdatePrice();
           if (RadThinCrust.Checked)
               LbResultsOfCrust.Text = "Thin Crust";
           else LbResultsOfCrust.Text = "think Crust";
       }



        






        private void PizzaForm_Load(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {
        }

        private void groupBox2_Enter(object sender, EventArgs e)
        {

        }

        private void label2_Click(object sender, EventArgs e)
        {
            
        }

        private void radioButton2_CheckedChanged(object sender, EventArgs e)
        {

            UpdateSize();
          /*  if (RadSmall.Checked)
            {
                LbResultOfSize.Text = "Small";
                Price += 30;
                LbPrice.Text = Price.ToString();
            }
            else
            {
                Price -= 30;
            } 
            LbPrice.Text = Price.ToString();*/

          
           
    }

        private void groupBox5_Enter(object sender, EventArgs e)
        {

        }

        private void LbResultOfSize_Click(object sender, EventArgs e)
        {
            
        }

        private void RadMidum_CheckedChanged(object sender, EventArgs e)
        {
            UpdateSize();

            /*if (RadMidum.Checked)
            {
                LbResultOfSize.Text = "Medium";
                Price += 40;
            }
            else
            {
                Price -= 40;
            }
            LbPrice.Text = Price.ToString();*/


        }

        private void RadLarge_CheckedChanged(object sender, EventArgs e)
        {
            UpdateSize();

          /*  if (RadLarge.Checked)
            {
                Price += 50;
                LbResultOfSize.Text = "Large";
            }
            else
            {
                Price -= 50;
            }
            LbPrice.Text = Price.ToString();*/

        }

        private void label7_Click(object sender, EventArgs e)
        {

        }

        private void label6_Click(object sender, EventArgs e)
        {

        }

        private void label8_Click(object sender, EventArgs e)
        {
        }

        private void label5_Click(object sender, EventArgs e)
        {
            
        }

        string sToppings = "";
        //string[] ArrToppings;
        private void chkExtraChees_CheckedChanged(object sender, EventArgs e)
        {
            UpdateToppings();
        }

        private void chkOnion_CheckedChanged(object sender, EventArgs e)
        {
            UpdateToppings();
        }

        private void RaThinCrust_CheckedChanged(object sender, EventArgs e)
        {
            UpdateCrust();

        }

        private void RaThinkCrust_CheckedChanged(object sender, EventArgs e)
        {
            UpdateCrust();
           

        }

        private void RadEatin_CheckedChanged(object sender, EventArgs e)
        {
            if (RadEatin.Checked)
                LbResultsWhereToEat.Text = "Eat in";

        }

        private void RadTakeOut_CheckedChanged(object sender, EventArgs e)
        {
            if (RadTakeOut.Checked)
                LbResultsWhereToEat.Text = "Take Out";
        }

        private void chkMushrooms_CheckedChanged(object sender, EventArgs e)
        {
            UpdateToppings();
           


        }

        private void chkOlives_CheckedChanged(object sender, EventArgs e)
        {
            UpdateToppings();
        }

        private void chkTomatos_CheckedChanged(object sender, EventArgs e)
        {
            UpdateToppings();
        }

        private void chkGreenPapers_CheckedChanged(object sender, EventArgs e)
        {
            UpdateToppings();

        }

        private void btnResetForm_Click(object sender, EventArgs e)
        {
            groupBox4.Enabled = true;
            groupBox3.Enabled = true;
            groupBox2.Enabled = true;
            groupBox1.Enabled = true;



            chkExtraChees.Checked=false;
            chkGreenPapers.Checked = false;
            chkMushrooms.Checked = false;
            chkOnion.Checked = false;
            chkTomatos.Checked = false;
            chkOlives.Checked = false;


            RadSmall.Checked = true;
            RadLarge.Checked = false;
            RadMidum.Checked = false;

            RadEatin.Checked = false;
            RadTakeOut.Checked = false;
            RadThinCrust.Checked = true;
            RadThinkCrust.Checked = false;



        }

        private void button2_Click(object sender, EventArgs e)
        {
           
            bool r= MessageBox.Show("Confirm Order", "Confirm", MessageBoxButtons.OKCancel, MessageBoxIcon.Question) == DialogResult.OK;
            if (r == true)
            {
                MessageBox.Show("Order Created", "Done");
                groupBox4.Enabled = false;
                groupBox3.Enabled = false;
                groupBox2.Enabled = false;
                groupBox1.Enabled = false;
                button2.Enabled = false;
            }
        }

        private void groupBoxAll_Enter(object sender, EventArgs e)
        {
            
        }

        private void groupBox3_Enter(object sender, EventArgs e)
        {
           
        }

        private void label2_Click_1(object sender, EventArgs e)
        {

        }
    }
}
