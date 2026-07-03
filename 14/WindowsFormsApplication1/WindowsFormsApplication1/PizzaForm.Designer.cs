namespace WindowsFormsApplication1
{
    partial class PizzaForm
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
            this.label1 = new System.Windows.Forms.Label();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.RadMidum = new System.Windows.Forms.RadioButton();
            this.RadLarge = new System.Windows.Forms.RadioButton();
            this.LbSize = new System.Windows.Forms.Label();
            this.RadSmall = new System.Windows.Forms.RadioButton();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.RadThinkCrust = new System.Windows.Forms.RadioButton();
            this.LbCrustType = new System.Windows.Forms.Label();
            this.RadThinCrust = new System.Windows.Forms.RadioButton();
            this.chkExtraChees = new System.Windows.Forms.CheckBox();
            this.label2 = new System.Windows.Forms.Label();
            this.groupBox3 = new System.Windows.Forms.GroupBox();
            this.chkGreenPapers = new System.Windows.Forms.CheckBox();
            this.chkOlives = new System.Windows.Forms.CheckBox();
            this.chkOnion = new System.Windows.Forms.CheckBox();
            this.chkTomatos = new System.Windows.Forms.CheckBox();
            this.chkMushrooms = new System.Windows.Forms.CheckBox();
            this.groupBox4 = new System.Windows.Forms.GroupBox();
            this.RadTakeOut = new System.Windows.Forms.RadioButton();
            this.LbWhereToEat = new System.Windows.Forms.Label();
            this.RadEatin = new System.Windows.Forms.RadioButton();
            this.button2 = new System.Windows.Forms.Button();
            this.btnResetForm = new System.Windows.Forms.Button();
            this.groupBox5 = new System.Windows.Forms.GroupBox();
            this.LbPrice = new System.Windows.Forms.Label();
            this.LbResultsWhereToEat = new System.Windows.Forms.Label();
            this.LbResultsOfCrust = new System.Windows.Forms.Label();
            this.LbResultsOfToppings = new System.Windows.Forms.Label();
            this.LbResultOfSize = new System.Windows.Forms.Label();
            this.LbToppings2 = new System.Windows.Forms.Label();
            this.LbWhereToEat2 = new System.Windows.Forms.Label();
            this.LbTotalPrice2 = new System.Windows.Forms.Label();
            this.LbCrustType2 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.LbSize2 = new System.Windows.Forms.Label();
            this.groupBox2.SuspendLayout();
            this.groupBox1.SuspendLayout();
            this.groupBox3.SuspendLayout();
            this.groupBox4.SuspendLayout();
            this.groupBox5.SuspendLayout();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.BackColor = System.Drawing.Color.Tomato;
            this.label1.Font = new System.Drawing.Font("Tahoma", 36F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.ForeColor = System.Drawing.Color.OrangeRed;
            this.label1.Location = new System.Drawing.Point(184, -4);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(429, 56);
            this.label1.TabIndex = 0;
            this.label1.Text = "Make Your Pizza";
            this.label1.Click += new System.EventHandler(this.label1_Click);
            // 
            // groupBox2
            // 
            this.groupBox2.BackColor = System.Drawing.Color.Transparent;
            this.groupBox2.Controls.Add(this.RadMidum);
            this.groupBox2.Controls.Add(this.RadLarge);
            this.groupBox2.Controls.Add(this.LbSize);
            this.groupBox2.Controls.Add(this.RadSmall);
            this.groupBox2.Cursor = System.Windows.Forms.Cursors.Hand;
            this.groupBox2.ForeColor = System.Drawing.Color.Black;
            this.groupBox2.Location = new System.Drawing.Point(12, 55);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(183, 183);
            this.groupBox2.TabIndex = 2;
            this.groupBox2.TabStop = false;
            this.groupBox2.Enter += new System.EventHandler(this.groupBox2_Enter);
            // 
            // RadMidum
            // 
            this.RadMidum.Font = new System.Drawing.Font("Tahoma", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.RadMidum.Location = new System.Drawing.Point(30, 110);
            this.RadMidum.Name = "RadMidum";
            this.RadMidum.Size = new System.Drawing.Size(104, 24);
            this.RadMidum.TabIndex = 6;
            this.RadMidum.TabStop = true;
            this.RadMidum.Tag = "30";
            this.RadMidum.Text = "Midum";
            this.RadMidum.UseVisualStyleBackColor = true;
            this.RadMidum.CheckedChanged += new System.EventHandler(this.RadMidum_CheckedChanged);
            // 
            // RadLarge
            // 
            this.RadLarge.Font = new System.Drawing.Font("Tahoma", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.RadLarge.Location = new System.Drawing.Point(30, 141);
            this.RadLarge.Name = "RadLarge";
            this.RadLarge.Size = new System.Drawing.Size(104, 36);
            this.RadLarge.TabIndex = 5;
            this.RadLarge.TabStop = true;
            this.RadLarge.Tag = "40";
            this.RadLarge.Text = "Large";
            this.RadLarge.UseVisualStyleBackColor = true;
            this.RadLarge.CheckedChanged += new System.EventHandler(this.RadLarge_CheckedChanged);
            // 
            // LbSize
            // 
            this.LbSize.Font = new System.Drawing.Font("Tahoma", 20.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.LbSize.ForeColor = System.Drawing.Color.DarkTurquoise;
            this.LbSize.Location = new System.Drawing.Point(25, 27);
            this.LbSize.Name = "LbSize";
            this.LbSize.Size = new System.Drawing.Size(75, 38);
            this.LbSize.TabIndex = 3;
            this.LbSize.Text = "Size";
            this.LbSize.Click += new System.EventHandler(this.label2_Click);
            // 
            // RadSmall
            // 
            this.RadSmall.Font = new System.Drawing.Font("Tahoma", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.RadSmall.Location = new System.Drawing.Point(30, 79);
            this.RadSmall.Name = "RadSmall";
            this.RadSmall.Size = new System.Drawing.Size(104, 24);
            this.RadSmall.TabIndex = 1;
            this.RadSmall.TabStop = true;
            this.RadSmall.Tag = "20";
            this.RadSmall.Text = "Small";
            this.RadSmall.UseVisualStyleBackColor = true;
            this.RadSmall.CheckedChanged += new System.EventHandler(this.radioButton2_CheckedChanged);
            // 
            // groupBox1
            // 
            this.groupBox1.BackColor = System.Drawing.Color.Transparent;
            this.groupBox1.Controls.Add(this.RadThinkCrust);
            this.groupBox1.Controls.Add(this.LbCrustType);
            this.groupBox1.Controls.Add(this.RadThinCrust);
            this.groupBox1.Cursor = System.Windows.Forms.Cursors.Hand;
            this.groupBox1.ForeColor = System.Drawing.Color.Black;
            this.groupBox1.Location = new System.Drawing.Point(12, 244);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(183, 149);
            this.groupBox1.TabIndex = 3;
            this.groupBox1.TabStop = false;
            // 
            // RadThinkCrust
            // 
            this.RadThinkCrust.Font = new System.Drawing.Font("Tahoma", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.RadThinkCrust.Location = new System.Drawing.Point(30, 110);
            this.RadThinkCrust.Name = "RadThinkCrust";
            this.RadThinkCrust.Size = new System.Drawing.Size(138, 33);
            this.RadThinkCrust.TabIndex = 6;
            this.RadThinkCrust.TabStop = true;
            this.RadThinkCrust.Tag = "20";
            this.RadThinkCrust.Text = "Think Crust";
            this.RadThinkCrust.UseVisualStyleBackColor = true;
            this.RadThinkCrust.CheckedChanged += new System.EventHandler(this.RaThinkCrust_CheckedChanged);
            // 
            // LbCrustType
            // 
            this.LbCrustType.Font = new System.Drawing.Font("Tahoma", 20.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.LbCrustType.ForeColor = System.Drawing.Color.Navy;
            this.LbCrustType.Location = new System.Drawing.Point(25, 34);
            this.LbCrustType.Name = "LbCrustType";
            this.LbCrustType.Size = new System.Drawing.Size(109, 38);
            this.LbCrustType.TabIndex = 3;
            this.LbCrustType.Text = "Crust Type";
            // 
            // RadThinCrust
            // 
            this.RadThinCrust.Font = new System.Drawing.Font("Tahoma", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.RadThinCrust.Location = new System.Drawing.Point(30, 79);
            this.RadThinCrust.Name = "RadThinCrust";
            this.RadThinCrust.Size = new System.Drawing.Size(147, 36);
            this.RadThinCrust.TabIndex = 1;
            this.RadThinCrust.TabStop = true;
            this.RadThinCrust.Tag = "10";
            this.RadThinCrust.Text = "Thin Crust";
            this.RadThinCrust.UseVisualStyleBackColor = true;
            this.RadThinCrust.CheckedChanged += new System.EventHandler(this.RaThinCrust_CheckedChanged);
            // 
            // chkExtraChees
            // 
            this.chkExtraChees.BackColor = System.Drawing.Color.Transparent;
            this.chkExtraChees.Font = new System.Drawing.Font("Tahoma", 11.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.chkExtraChees.ForeColor = System.Drawing.Color.Azure;
            this.chkExtraChees.Location = new System.Drawing.Point(21, 52);
            this.chkExtraChees.Name = "chkExtraChees";
            this.chkExtraChees.Size = new System.Drawing.Size(106, 37);
            this.chkExtraChees.TabIndex = 4;
            this.chkExtraChees.Tag = "5";
            this.chkExtraChees.Text = "Extra Chees";
            this.chkExtraChees.UseVisualStyleBackColor = false;
            this.chkExtraChees.CheckedChanged += new System.EventHandler(this.chkExtraChees_CheckedChanged);
            // 
            // label2
            // 
            this.label2.Font = new System.Drawing.Font("Tahoma", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.ForeColor = System.Drawing.Color.Pink;
            this.label2.Location = new System.Drawing.Point(34, 20);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(109, 38);
            this.label2.TabIndex = 7;
            this.label2.Text = "Topping";
            this.label2.Click += new System.EventHandler(this.label2_Click_1);
            // 
            // groupBox3
            // 
            this.groupBox3.BackColor = System.Drawing.Color.Transparent;
            this.groupBox3.Controls.Add(this.chkGreenPapers);
            this.groupBox3.Controls.Add(this.chkOlives);
            this.groupBox3.Controls.Add(this.chkOnion);
            this.groupBox3.Controls.Add(this.chkTomatos);
            this.groupBox3.Controls.Add(this.chkMushrooms);
            this.groupBox3.Controls.Add(this.label2);
            this.groupBox3.Controls.Add(this.chkExtraChees);
            this.groupBox3.Font = new System.Drawing.Font("Tahoma", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.groupBox3.ForeColor = System.Drawing.Color.AntiqueWhite;
            this.groupBox3.Location = new System.Drawing.Point(263, 82);
            this.groupBox3.Name = "groupBox3";
            this.groupBox3.Size = new System.Drawing.Size(272, 167);
            this.groupBox3.TabIndex = 8;
            this.groupBox3.TabStop = false;
            this.groupBox3.Enter += new System.EventHandler(this.groupBox3_Enter);
            // 
            // chkGreenPapers
            // 
            this.chkGreenPapers.BackColor = System.Drawing.Color.Transparent;
            this.chkGreenPapers.Font = new System.Drawing.Font("Tahoma", 11.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.chkGreenPapers.ForeColor = System.Drawing.Color.Azure;
            this.chkGreenPapers.Location = new System.Drawing.Point(142, 119);
            this.chkGreenPapers.Name = "chkGreenPapers";
            this.chkGreenPapers.Size = new System.Drawing.Size(81, 37);
            this.chkGreenPapers.TabIndex = 12;
            this.chkGreenPapers.Tag = "5";
            this.chkGreenPapers.Text = "Green Papers";
            this.chkGreenPapers.UseVisualStyleBackColor = false;
            this.chkGreenPapers.CheckedChanged += new System.EventHandler(this.chkGreenPapers_CheckedChanged);
            // 
            // chkOlives
            // 
            this.chkOlives.BackColor = System.Drawing.Color.Transparent;
            this.chkOlives.Font = new System.Drawing.Font("Tahoma", 11.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.chkOlives.ForeColor = System.Drawing.Color.Azure;
            this.chkOlives.Location = new System.Drawing.Point(21, 81);
            this.chkOlives.Name = "chkOlives";
            this.chkOlives.Size = new System.Drawing.Size(81, 37);
            this.chkOlives.TabIndex = 11;
            this.chkOlives.Tag = "5";
            this.chkOlives.Text = "Olives";
            this.chkOlives.UseVisualStyleBackColor = false;
            this.chkOlives.CheckedChanged += new System.EventHandler(this.chkOlives_CheckedChanged);
            // 
            // chkOnion
            // 
            this.chkOnion.BackColor = System.Drawing.Color.Transparent;
            this.chkOnion.Font = new System.Drawing.Font("Tahoma", 11.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.chkOnion.ForeColor = System.Drawing.Color.Azure;
            this.chkOnion.Location = new System.Drawing.Point(142, 49);
            this.chkOnion.Name = "chkOnion";
            this.chkOnion.Size = new System.Drawing.Size(72, 37);
            this.chkOnion.TabIndex = 10;
            this.chkOnion.Tag = "5";
            this.chkOnion.Text = "Onion";
            this.chkOnion.UseVisualStyleBackColor = false;
            this.chkOnion.CheckedChanged += new System.EventHandler(this.chkOnion_CheckedChanged);
            // 
            // chkTomatos
            // 
            this.chkTomatos.BackColor = System.Drawing.Color.Transparent;
            this.chkTomatos.Font = new System.Drawing.Font("Tahoma", 11.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.chkTomatos.ForeColor = System.Drawing.Color.Azure;
            this.chkTomatos.Location = new System.Drawing.Point(21, 117);
            this.chkTomatos.Name = "chkTomatos";
            this.chkTomatos.Size = new System.Drawing.Size(93, 37);
            this.chkTomatos.TabIndex = 9;
            this.chkTomatos.Tag = "5";
            this.chkTomatos.Text = "Tomatos";
            this.chkTomatos.UseVisualStyleBackColor = false;
            this.chkTomatos.CheckedChanged += new System.EventHandler(this.chkTomatos_CheckedChanged);
            // 
            // chkMushrooms
            // 
            this.chkMushrooms.BackColor = System.Drawing.Color.Transparent;
            this.chkMushrooms.Font = new System.Drawing.Font("Tahoma", 11.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.chkMushrooms.ForeColor = System.Drawing.Color.Azure;
            this.chkMushrooms.Location = new System.Drawing.Point(142, 81);
            this.chkMushrooms.Name = "chkMushrooms";
            this.chkMushrooms.Size = new System.Drawing.Size(106, 37);
            this.chkMushrooms.TabIndex = 8;
            this.chkMushrooms.Tag = "5";
            this.chkMushrooms.Text = "Mushrooms";
            this.chkMushrooms.UseVisualStyleBackColor = false;
            this.chkMushrooms.CheckedChanged += new System.EventHandler(this.chkMushrooms_CheckedChanged);
            // 
            // groupBox4
            // 
            this.groupBox4.BackColor = System.Drawing.Color.Transparent;
            this.groupBox4.Controls.Add(this.RadTakeOut);
            this.groupBox4.Controls.Add(this.LbWhereToEat);
            this.groupBox4.Controls.Add(this.RadEatin);
            this.groupBox4.Font = new System.Drawing.Font("Tahoma", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.groupBox4.ForeColor = System.Drawing.Color.Beige;
            this.groupBox4.Location = new System.Drawing.Point(302, 268);
            this.groupBox4.Name = "groupBox4";
            this.groupBox4.Size = new System.Drawing.Size(200, 91);
            this.groupBox4.TabIndex = 9;
            this.groupBox4.TabStop = false;
            // 
            // RadTakeOut
            // 
            this.RadTakeOut.Font = new System.Drawing.Font("Tahoma", 11.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.RadTakeOut.Location = new System.Drawing.Point(89, 53);
            this.RadTakeOut.Name = "RadTakeOut";
            this.RadTakeOut.Size = new System.Drawing.Size(105, 24);
            this.RadTakeOut.TabIndex = 10;
            this.RadTakeOut.TabStop = true;
            this.RadTakeOut.Text = "Take Out";
            this.RadTakeOut.UseVisualStyleBackColor = true;
            this.RadTakeOut.CheckedChanged += new System.EventHandler(this.RadTakeOut_CheckedChanged);
            // 
            // LbWhereToEat
            // 
            this.LbWhereToEat.Font = new System.Drawing.Font("Tahoma", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.LbWhereToEat.ForeColor = System.Drawing.Color.AliceBlue;
            this.LbWhereToEat.Location = new System.Drawing.Point(6, 16);
            this.LbWhereToEat.Name = "LbWhereToEat";
            this.LbWhereToEat.Size = new System.Drawing.Size(188, 34);
            this.LbWhereToEat.TabIndex = 8;
            this.LbWhereToEat.Text = "Where To Eat";
            // 
            // RadEatin
            // 
            this.RadEatin.Font = new System.Drawing.Font("Tahoma", 11.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.RadEatin.Location = new System.Drawing.Point(10, 53);
            this.RadEatin.Name = "RadEatin";
            this.RadEatin.Size = new System.Drawing.Size(73, 24);
            this.RadEatin.TabIndex = 9;
            this.RadEatin.TabStop = true;
            this.RadEatin.Text = "Eat in";
            this.RadEatin.UseVisualStyleBackColor = true;
            this.RadEatin.CheckedChanged += new System.EventHandler(this.RadEatin_CheckedChanged);
            // 
            // button2
            // 
            this.button2.BackColor = System.Drawing.Color.Lime;
            this.button2.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.button2.Font = new System.Drawing.Font("Tahoma", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.button2.Location = new System.Drawing.Point(361, 402);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(83, 52);
            this.button2.TabIndex = 11;
            this.button2.Text = "Order Pizza";
            this.button2.UseVisualStyleBackColor = false;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // btnResetForm
            // 
            this.btnResetForm.BackColor = System.Drawing.Color.Red;
            this.btnResetForm.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.btnResetForm.Font = new System.Drawing.Font("Tahoma", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnResetForm.Location = new System.Drawing.Point(504, 402);
            this.btnResetForm.Name = "btnResetForm";
            this.btnResetForm.Size = new System.Drawing.Size(83, 52);
            this.btnResetForm.TabIndex = 12;
            this.btnResetForm.Text = "Reset Form";
            this.btnResetForm.UseVisualStyleBackColor = false;
            this.btnResetForm.Click += new System.EventHandler(this.btnResetForm_Click);
            // 
            // groupBox5
            // 
            this.groupBox5.BackColor = System.Drawing.Color.Transparent;
            this.groupBox5.Controls.Add(this.LbPrice);
            this.groupBox5.Controls.Add(this.LbResultsWhereToEat);
            this.groupBox5.Controls.Add(this.LbResultsOfCrust);
            this.groupBox5.Controls.Add(this.LbResultsOfToppings);
            this.groupBox5.Controls.Add(this.LbResultOfSize);
            this.groupBox5.Controls.Add(this.LbToppings2);
            this.groupBox5.Controls.Add(this.LbWhereToEat2);
            this.groupBox5.Controls.Add(this.LbTotalPrice2);
            this.groupBox5.Controls.Add(this.LbCrustType2);
            this.groupBox5.Controls.Add(this.label4);
            this.groupBox5.Controls.Add(this.LbSize2);
            this.groupBox5.Location = new System.Drawing.Point(619, 19);
            this.groupBox5.Name = "groupBox5";
            this.groupBox5.RightToLeft = System.Windows.Forms.RightToLeft.Yes;
            this.groupBox5.Size = new System.Drawing.Size(309, 374);
            this.groupBox5.TabIndex = 13;
            this.groupBox5.TabStop = false;
            this.groupBox5.Enter += new System.EventHandler(this.groupBox5_Enter);
            // 
            // LbPrice
            // 
            this.LbPrice.Font = new System.Drawing.Font("Tahoma", 36F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.LbPrice.ForeColor = System.Drawing.Color.Lime;
            this.LbPrice.Location = new System.Drawing.Point(161, 283);
            this.LbPrice.Name = "LbPrice";
            this.LbPrice.Size = new System.Drawing.Size(122, 91);
            this.LbPrice.TabIndex = 10;
            this.LbPrice.Click += new System.EventHandler(this.label8_Click);
            // 
            // LbResultsWhereToEat
            // 
            this.LbResultsWhereToEat.AutoSize = true;
            this.LbResultsWhereToEat.Font = new System.Drawing.Font("Tahoma", 11.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.LbResultsWhereToEat.Location = new System.Drawing.Point(161, 240);
            this.LbResultsWhereToEat.Name = "LbResultsWhereToEat";
            this.LbResultsWhereToEat.Size = new System.Drawing.Size(0, 18);
            this.LbResultsWhereToEat.TabIndex = 9;
            this.LbResultsWhereToEat.Click += new System.EventHandler(this.label7_Click);
            // 
            // LbResultsOfCrust
            // 
            this.LbResultsOfCrust.Font = new System.Drawing.Font("Tahoma", 11.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.LbResultsOfCrust.Location = new System.Drawing.Point(130, 185);
            this.LbResultsOfCrust.Name = "LbResultsOfCrust";
            this.LbResultsOfCrust.Size = new System.Drawing.Size(97, 20);
            this.LbResultsOfCrust.TabIndex = 8;
            this.LbResultsOfCrust.Click += new System.EventHandler(this.label6_Click);
            // 
            // LbResultsOfToppings
            // 
            this.LbResultsOfToppings.Font = new System.Drawing.Font("Tahoma", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.LbResultsOfToppings.ImageAlign = System.Drawing.ContentAlignment.TopLeft;
            this.LbResultsOfToppings.Location = new System.Drawing.Point(115, 130);
            this.LbResultsOfToppings.Name = "LbResultsOfToppings";
            this.LbResultsOfToppings.Size = new System.Drawing.Size(177, 55);
            this.LbResultsOfToppings.TabIndex = 7;
            this.LbResultsOfToppings.Click += new System.EventHandler(this.label5_Click);
            // 
            // LbResultOfSize
            // 
            this.LbResultOfSize.Font = new System.Drawing.Font("Tahoma", 11.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.LbResultOfSize.Location = new System.Drawing.Point(91, 85);
            this.LbResultOfSize.Name = "LbResultOfSize";
            this.LbResultOfSize.Size = new System.Drawing.Size(73, 18);
            this.LbResultOfSize.TabIndex = 6;
            this.LbResultOfSize.Click += new System.EventHandler(this.LbResultOfSize_Click);
            // 
            // LbToppings2
            // 
            this.LbToppings2.Font = new System.Drawing.Font("Tahoma", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.LbToppings2.Location = new System.Drawing.Point(20, 130);
            this.LbToppings2.Name = "LbToppings2";
            this.LbToppings2.Size = new System.Drawing.Size(85, 31);
            this.LbToppings2.TabIndex = 5;
            this.LbToppings2.Text = ":Toppings";
            // 
            // LbWhereToEat2
            // 
            this.LbWhereToEat2.Font = new System.Drawing.Font("Tahoma", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.LbWhereToEat2.Location = new System.Drawing.Point(20, 240);
            this.LbWhereToEat2.Name = "LbWhereToEat2";
            this.LbWhereToEat2.Size = new System.Drawing.Size(126, 31);
            this.LbWhereToEat2.TabIndex = 4;
            this.LbWhereToEat2.Text = ":Where To Eat";
            // 
            // LbTotalPrice2
            // 
            this.LbTotalPrice2.Font = new System.Drawing.Font("Tahoma", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.LbTotalPrice2.Location = new System.Drawing.Point(20, 300);
            this.LbTotalPrice2.Name = "LbTotalPrice2";
            this.LbTotalPrice2.Size = new System.Drawing.Size(107, 31);
            this.LbTotalPrice2.TabIndex = 3;
            this.LbTotalPrice2.Text = ":Tota  Price";
            // 
            // LbCrustType2
            // 
            this.LbCrustType2.Font = new System.Drawing.Font("Tahoma", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.LbCrustType2.Location = new System.Drawing.Point(20, 185);
            this.LbCrustType2.Name = "LbCrustType2";
            this.LbCrustType2.Size = new System.Drawing.Size(104, 31);
            this.LbCrustType2.TabIndex = 2;
            this.LbCrustType2.Text = ":Crust Type";
            // 
            // label4
            // 
            this.label4.Font = new System.Drawing.Font("Tahoma", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label4.Location = new System.Drawing.Point(92, 30);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(126, 31);
            this.label4.TabIndex = 1;
            this.label4.Text = "Order Summary";
            // 
            // LbSize2
            // 
            this.LbSize2.Font = new System.Drawing.Font("Tahoma", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.LbSize2.Location = new System.Drawing.Point(20, 85);
            this.LbSize2.Name = "LbSize2";
            this.LbSize2.Size = new System.Drawing.Size(57, 31);
            this.LbSize2.TabIndex = 0;
            this.LbSize2.Text = ":Size";
            // 
            // PizzaForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ActiveCaption;
            this.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.ClientSize = new System.Drawing.Size(940, 474);
            this.Controls.Add(this.groupBox5);
            this.Controls.Add(this.btnResetForm);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.groupBox4);
            this.Controls.Add(this.groupBox3);
            this.Controls.Add(this.groupBox1);
            this.Controls.Add(this.groupBox2);
            this.Controls.Add(this.label1);
            this.DoubleBuffered = true;
            this.Name = "PizzaForm";
            this.Text = "Pizza order";
            this.Load += new System.EventHandler(this.PizzaForm_Load);
            this.groupBox2.ResumeLayout(false);
            this.groupBox1.ResumeLayout(false);
            this.groupBox3.ResumeLayout(false);
            this.groupBox4.ResumeLayout(false);
            this.groupBox5.ResumeLayout(false);
            this.groupBox5.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.Label LbSize;
        private System.Windows.Forms.RadioButton RadSmall;
        private System.Windows.Forms.RadioButton RadMidum;
        private System.Windows.Forms.RadioButton RadLarge;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.RadioButton RadThinkCrust;
        private System.Windows.Forms.Label LbCrustType;
        private System.Windows.Forms.RadioButton RadThinCrust;
        private System.Windows.Forms.CheckBox chkExtraChees;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.GroupBox groupBox3;
        private System.Windows.Forms.CheckBox chkGreenPapers;
        private System.Windows.Forms.CheckBox chkOlives;
        private System.Windows.Forms.CheckBox chkOnion;
        private System.Windows.Forms.CheckBox chkTomatos;
        private System.Windows.Forms.CheckBox chkMushrooms;
        private System.Windows.Forms.GroupBox groupBox4;
        private System.Windows.Forms.RadioButton RadTakeOut;
        private System.Windows.Forms.Label LbWhereToEat;
        private System.Windows.Forms.RadioButton RadEatin;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.Button btnResetForm;
        private System.Windows.Forms.GroupBox groupBox5;
        private System.Windows.Forms.Label LbToppings2;
        private System.Windows.Forms.Label LbWhereToEat2;
        private System.Windows.Forms.Label LbTotalPrice2;
        private System.Windows.Forms.Label LbCrustType2;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label LbSize2;
        private System.Windows.Forms.Label LbPrice;
        private System.Windows.Forms.Label LbResultsWhereToEat;
        private System.Windows.Forms.Label LbResultsOfCrust;
        private System.Windows.Forms.Label LbResultsOfToppings;
        private System.Windows.Forms.Label LbResultOfSize;


    }
}