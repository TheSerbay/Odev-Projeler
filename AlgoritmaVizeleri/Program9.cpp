/*

		SERDAR ÖZKAN
		B203102008

*/
#include<iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Turkish");
    int ckcp;
    int p20=50,p50=0,p100=0,p200=0;
    int sc=0;
    int b20,b50,b100,b200;
    cout<<"Cekilmek Istenen Para :";
    cin>>ckcp;

if (ckcp%10!=0)
    {
    cout<<"Para Cekilemez";
    }
    else
    {
    while (ckcp!=0)
    {
        b200 = 0;
        while (ckcp&&b200<p200)
        {
            ckcp=ckcp-200;
            sc = sc+200;
            b200++;
        }
        b100 = 0;
        while (ckcp&&b100<p100)
        {
            ckcp=ckcp-100;
            sc = sc+100;
            b100++;
        }
        b50 = 0;
        while (ckcp&&b50<p50)
        {
            ckcp=ckcp-50;
            sc = sc+50;
            b50++;
        }
        b20 = 0;
        while (ckcp&&b20<p20)
        {
            ckcp=ckcp-20;
            sc = sc+20;
            b20++;
        }
    }
        if (0==ckcp)
        {
            cout<<"Verilen Banknotlar"<<endl;
            cout<<"200lük banknot: "<<b200<<endl;
            cout<<"100lük banknot: "<<b100<<endl;
            cout<<"50lik banknot: "<<b50<<endl;
            cout<<"20lik banknot: "<<b20<<endl;
        }
        else
            cout<<"Yeterli Banknot Mevcut Deðil";
}
}
    
