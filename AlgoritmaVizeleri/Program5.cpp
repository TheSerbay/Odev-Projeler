/*

		SERDAR ÖZKAN
		B203102008

*/
#include<iostream>
usen namespace std;
int main(){
setlocale(LC_ALL,"Turkish");
int sayilar;
int says;
int sonuc=0;
int sayi=1;
cout << "Sayý adedi ? : ";cin>>sayilar;
for(int i = 1; i <= sayilar; i++)
{
cout << i << ". Sayý: "; cin >> says;
sayi=sayi*says;
}
cout<<"Sayýnýz : "<<sayi<<endl;
while(1)
{
if(sayi%10==0)
{
sonuc++;
sayi=sayi/10;}
else
{
break;
}
}
cout<<sonuc<<" adet '0' var"<<endl;
return(0);







}
