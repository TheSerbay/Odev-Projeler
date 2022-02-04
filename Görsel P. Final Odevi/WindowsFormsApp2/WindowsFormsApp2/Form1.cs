using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            listBox1.Items.Clear();

            int sa1, sa2;
            sa1 = Convert.ToInt32(textBox1.Text);
            sa2 = Convert.ToInt32(textBox2.Text);

            int sayi = sa1;
            bool durum = true;
            while (sayi < sa2)
            {
                sayi++;
                for (int i = 2; i < sayi; i++)
                {
                    if (sayi % i == 0)
                    {
                        durum = false;
                    }
                }
                if (durum == true && sayi != 1)
                {
                    listBox1.Items.Add(sayi.ToString());
                }
                durum = true;


            }
            MessageBox.Show("İki Sayı Arasında " + listBox1.Items.Count.ToString() + " Tane Asal Sayı Var");
        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void button2_Click(object sender, EventArgs e)
        {
            listBox2.Items.Add(texta.Text + " " + textb.Text);
        }

        private void button3_Click(object sender, EventArgs e)
        {
            listBox1.Items.Remove(listBox1.SelectedItem);
        }

        private void button4_Click(object sender, EventArgs e)
        {
            listBox2.Items.Clear();
        }

        private void timer1_Tick(object sender, EventArgs e)
        {

            label6.Text = DateTime.Now.ToLongDateString();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            timer1.Start();
        }

        private void label10_Click(object sender, EventArgs e)
        {

        }

        private void button5_Click(object sender, EventArgs e)
        {
            int say1, say2, say3;
            say1 = Convert.ToInt32(textBox3.Text);
            say2 = Convert.ToInt32(textBox4.Text);
            say3 = Convert.ToInt32(textBox5.Text);
            label11.Text = Convert.ToString(say1 + say2 + say3);
        }
    }
}