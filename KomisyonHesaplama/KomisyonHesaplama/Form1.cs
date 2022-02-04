using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace KomisyonHesaplama
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        double komisyonFiyat1 = 0;
        double komisyonFiyat2 = 0;
        double komisyonOran1 = 0;
        double komisyonOran2 = 0;
        double toplamUrunfiyat = 0;
        double urunfiyat = 0;
        double hesaplanmisKomisyon1 = 0;
        double hesaplanmisKomisyon2 = 0;


        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void buttonEkle_Click(object sender, EventArgs e)
        {
            urunfiyat = Convert.ToDouble(numericUpDownUrun.Value);
            listBoxUrunler.Items.Add( urunfiyat + " TL");
            toplamUrunfiyat = toplamUrunfiyat + urunfiyat;

            if (urunfiyat <= komisyonFiyat1)
            {
                hesaplanmisKomisyon1 = hesaplanmisKomisyon1 + ((urunfiyat / 100) * komisyonOran1);
            } 
            else if ((urunfiyat > komisyonFiyat1) && (urunfiyat <= komisyonFiyat2))
            {
                hesaplanmisKomisyon2 = hesaplanmisKomisyon2 + ((urunfiyat / 100) * komisyonOran2);
            }

        }

        private void buttonKomisyonBilgileri_Click(object sender, EventArgs e)
        {
            komisyonFiyat1 = Convert.ToDouble(numericUpDownKomisyonFiyat1.Value);
            komisyonFiyat2 = Convert.ToDouble(numericUpDownKomisyonFiyat2.Value);
            komisyonOran1 = Convert.ToDouble(numericUpDownKomisyonOran1.Value);
            komisyonOran2 = Convert.ToDouble(numericUpDownKomisyonOran2.Value);
           
            labelBilgi.Text = komisyonFiyat1.ToString() + "TL'ye kadar olan ürün fiyatları için komisyon oranı "
                + komisyonOran1.ToString() + "% \n" + komisyonFiyat2.ToString() + "TL'ye kadar olan ürün fiyatları için komisyon oranı "
                + komisyonOran2.ToString() + "%\n" + komisyonFiyat2.ToString() + "TL üzeri için ise komisyon bedeli yoktur.";
        }

        private void buttonHesapla_Click(object sender, EventArgs e)
        {
            labelToplamUrunTutari.Text = Convert.ToString(toplamUrunfiyat)+"TL";
            labelToplamKomisyonTutari.Text = Convert.ToString(Math.Round((hesaplanmisKomisyon1 + hesaplanmisKomisyon2),2))+"TL";
            labelKomisyonSonrasiTutar.Text = Convert.ToString(Math.Round((toplamUrunfiyat + hesaplanmisKomisyon1 + hesaplanmisKomisyon2),2)) +"TL";
        }

         }
}
