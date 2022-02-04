namespace GirisEkrani
{
    partial class Form1
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
            this.groupBoxGirisEkrani = new System.Windows.Forms.GroupBox();
            this.buttonGiris = new System.Windows.Forms.Button();
            this.textBoxKullaniciSifre = new System.Windows.Forms.TextBox();
            this.textBoxKullaniciAd = new System.Windows.Forms.TextBox();
            this.labelKullaniciSifre = new System.Windows.Forms.Label();
            this.labelKullaniciAd = new System.Windows.Forms.Label();
            this.groupBoxGirisEkrani.SuspendLayout();
            this.SuspendLayout();
            // 
            // groupBoxGirisEkrani
            // 
            this.groupBoxGirisEkrani.Controls.Add(this.buttonGiris);
            this.groupBoxGirisEkrani.Controls.Add(this.textBoxKullaniciSifre);
            this.groupBoxGirisEkrani.Controls.Add(this.textBoxKullaniciAd);
            this.groupBoxGirisEkrani.Controls.Add(this.labelKullaniciSifre);
            this.groupBoxGirisEkrani.Controls.Add(this.labelKullaniciAd);
            this.groupBoxGirisEkrani.Location = new System.Drawing.Point(12, 12);
            this.groupBoxGirisEkrani.Name = "groupBoxGirisEkrani";
            this.groupBoxGirisEkrani.Size = new System.Drawing.Size(416, 172);
            this.groupBoxGirisEkrani.TabIndex = 0;
            this.groupBoxGirisEkrani.TabStop = false;
            this.groupBoxGirisEkrani.Text = "Giriş Ekranı";
            this.groupBoxGirisEkrani.Enter += new System.EventHandler(this.groupBoxGirisEkrani_Enter);
            // 
            // buttonGiris
            // 
            this.buttonGiris.Location = new System.Drawing.Point(147, 122);
            this.buttonGiris.Name = "buttonGiris";
            this.buttonGiris.Size = new System.Drawing.Size(100, 23);
            this.buttonGiris.TabIndex = 4;
            this.buttonGiris.Text = "Giriş";
            this.buttonGiris.UseVisualStyleBackColor = true;
            this.buttonGiris.Click += new System.EventHandler(this.buttonGiris_Click);
            // 
            // textBoxKullaniciSifre
            // 
            this.textBoxKullaniciSifre.Location = new System.Drawing.Point(212, 69);
            this.textBoxKullaniciSifre.Name = "textBoxKullaniciSifre";
            this.textBoxKullaniciSifre.Size = new System.Drawing.Size(100, 20);
            this.textBoxKullaniciSifre.TabIndex = 3;
            this.textBoxKullaniciSifre.UseSystemPasswordChar = true;
            // 
            // textBoxKullaniciAd
            // 
            this.textBoxKullaniciAd.Location = new System.Drawing.Point(212, 38);
            this.textBoxKullaniciAd.Name = "textBoxKullaniciAd";
            this.textBoxKullaniciAd.Size = new System.Drawing.Size(100, 20);
            this.textBoxKullaniciAd.TabIndex = 2;
            // 
            // labelKullaniciSifre
            // 
            this.labelKullaniciSifre.AutoSize = true;
            this.labelKullaniciSifre.Location = new System.Drawing.Point(56, 72);
            this.labelKullaniciSifre.Name = "labelKullaniciSifre";
            this.labelKullaniciSifre.Size = new System.Drawing.Size(73, 13);
            this.labelKullaniciSifre.TabIndex = 1;
            this.labelKullaniciSifre.Text = "Kullanıcı Şifre:";
            // 
            // labelKullaniciAd
            // 
            this.labelKullaniciAd.AutoSize = true;
            this.labelKullaniciAd.Location = new System.Drawing.Point(56, 41);
            this.labelKullaniciAd.Name = "labelKullaniciAd";
            this.labelKullaniciAd.Size = new System.Drawing.Size(67, 13);
            this.labelKullaniciAd.TabIndex = 0;
            this.labelKullaniciAd.Text = "Kullanıcı Adı:";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(448, 207);
            this.Controls.Add(this.groupBoxGirisEkrani);
            this.Name = "Form1";
            this.Text = "Giriş Ekranı";
            this.groupBoxGirisEkrani.ResumeLayout(false);
            this.groupBoxGirisEkrani.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.GroupBox groupBoxGirisEkrani;
        private System.Windows.Forms.Button buttonGiris;
        private System.Windows.Forms.TextBox textBoxKullaniciSifre;
        private System.Windows.Forms.TextBox textBoxKullaniciAd;
        private System.Windows.Forms.Label labelKullaniciSifre;
        private System.Windows.Forms.Label labelKullaniciAd;
    }
}

