namespace GirisEkrani
{
    partial class Form2
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
            this.labelGirisMesaj = new System.Windows.Forms.Label();
            this.buttonCikis = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // labelGirisMesaj
            // 
            this.labelGirisMesaj.AutoSize = true;
            this.labelGirisMesaj.Font = new System.Drawing.Font("Microsoft Sans Serif", 25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.labelGirisMesaj.Location = new System.Drawing.Point(105, 43);
            this.labelGirisMesaj.Name = "labelGirisMesaj";
            this.labelGirisMesaj.Size = new System.Drawing.Size(236, 39);
            this.labelGirisMesaj.TabIndex = 0;
            this.labelGirisMesaj.Text = "Giriş Başarılı...";
            this.labelGirisMesaj.Click += new System.EventHandler(this.label1_Click);
            // 
            // buttonCikis
            // 
            this.buttonCikis.Location = new System.Drawing.Point(139, 114);
            this.buttonCikis.Name = "buttonCikis";
            this.buttonCikis.Size = new System.Drawing.Size(135, 53);
            this.buttonCikis.TabIndex = 1;
            this.buttonCikis.Text = "Çıkış";
            this.buttonCikis.UseVisualStyleBackColor = true;
            this.buttonCikis.Click += new System.EventHandler(this.buttonCikis_Click);
            // 
            // Form2
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(448, 207);
            this.Controls.Add(this.buttonCikis);
            this.Controls.Add(this.labelGirisMesaj);
            this.Name = "Form2";
            this.Text = "Giriş Başarılı";
            this.Load += new System.EventHandler(this.Form2_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label labelGirisMesaj;
        private System.Windows.Forms.Button buttonCikis;
    }
}