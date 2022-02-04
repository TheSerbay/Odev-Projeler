using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace GerilimAkimDirencHesap
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        double akim = 0;
        double direnc = 0;
        double gerilim = 0;

        private void buttonGerilimHesapla_Click(object sender, EventArgs e)
        {
            akim = Convert.ToDouble(textBox1Akim.Text);
            direnc = Convert.ToDouble(textBox1Direnc.Text);
            gerilim = akim * direnc;
            labelGerilimDegeri.Text = Math.Round(gerilim,2).ToString() + " volt";
        }

        private void buttonAkimHesapla_Click(object sender, EventArgs e)
        {
            gerilim = Convert.ToDouble(textBox2Gerilim.Text);
            direnc = Convert.ToDouble(textBox2Direnc.Text);
            akim = gerilim / direnc;
            labelAkimDegeri.Text = Math.Round(akim,2).ToString() + " amper";
        }

        private void buttonDirencHesapla_Click(object sender, EventArgs e)
        {
            gerilim = Convert.ToDouble(textBox3Gerilim.Text);
            akim = Convert.ToDouble(textBox3Akim.Text);
            direnc = gerilim / akim;
            labelDirencDegeri.Text = Math.Round(direnc,2).ToString() + " ohm";
        }

     
    }
}
