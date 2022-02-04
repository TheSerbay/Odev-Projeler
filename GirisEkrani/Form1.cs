using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace GirisEkrani
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void buttonGiris_Click(object sender, EventArgs e)
        {
            Form2 yeni = new Form2();
            if (textBoxKullaniciAd.Text == "serdar" && textBoxKullaniciSifre.Text == "12345")
            {
                yeni.Show();
                this.Hide();
            }
            else {
                MessageBox.Show("Giriş Başarısız");
                textBoxKullaniciAd.Clear();
                textBoxKullaniciSifre.Clear();
            }


        }

        private void groupBoxGirisEkrani_Enter(object sender, EventArgs e)
        {

        }
    }
}
