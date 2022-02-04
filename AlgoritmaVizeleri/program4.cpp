/*

		SERDAR ÖZKAN

*/
#include<iostream>
usen namespace std;
int main() {
setlocale(LC_ALL, "Turkish");
int Hfi=50,Him=75,Hs=75,Hsm=100,ucret=0;
int pzt,sli,crsb,psb,cm,cmt,pzr;
cout<<"Pazartesi çalýþtýðý saat";cin>>pzt;
cout<<"Salý çalýþtýðý saat";cin>>sli;
cout<<"crsb çalýþtýðý saat";cin>>crsb;
cout<<"Perþembe Calisma Suresi";cin>>psb;
cout<<"Cuma çalýþtýðý saat";cin>>cm;
cout<<"Cumartesi çalýþtýðý saat";cin>>cmt;
cout<<"Pazar çalýþtýðý saat";cin>>pzr;

if (pzt>=0&&pzt<=10)
{
    ucret=ucret+pzt*Hfi;
}
else if(pzt>10&&pzt<=24)
{
    ucret=ucret+10*Hfi;
    ucret=ucret+(pzt-10)*Him;
}

if (sli>=0&&sli<=10)
{
    ucret=ucret+sli*Hfi;
}
else if(sli>10&&sli<=24)
{
    ucret=ucret+10*Hfi;
    ucret=ucret+(sli-10)*Him;
}

if (crsb>=0&&crsb<=10)
{
    ucret=ucret+crsb*Hfi;
}
else if(crsb>10&&crsb<=24)
{
    ucret=ucret+10*Hfi;
    ucret=ucret+(crsb-10)*Him;
}
if (psb>=0&&psb<=10)
{
    ucret=ucret+psb*Hfi;
}
else if(psb>10&&psb<=24)
{
    ucret=ucret+10*Hfi;
    ucret=ucret+(psb-10)*Him;
}
if (cm>=0&&cm<=10)
{
    ucret=ucret+cm*Hfi;
}
else if(cm>10&&cm<=24)
{
    ucret=ucret+10*Hfi;
    ucret=ucret+(cm-10)*Him;
}
if (cmt>=0&&cmt<=10)
{
    ucret=ucret+cmt*Hs;
}
else if(cmt>10&&cmt<=24)
{
    ucret=ucret+10*Hs;
    ucret=ucret+(cmt-10)*Hsm;
}
if (pzr>=0&&pzr<=10)
{
    ucret=ucret+pzr*Hs;
}
else if(pzr>10&&pzr<=24)
{
    ucret=ucret+10*Hs;
    ucret=ucret+(pzr-10)*Hs;
}
cout<<"Toplam Maaþýnýz :"<<ucret;
}
