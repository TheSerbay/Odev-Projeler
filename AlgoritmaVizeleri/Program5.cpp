/*

		SERDAR �ZKAN
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
cout << "Say� adedi ? : ";cin>>sayilar;
for(int i = 1; i <= sayilar; i++)
{
cout << i << ". Say�: "; cin >> says;
sayi=sayi*says;
}
cout<<"Say�n�z : "<<sayi<<endl;
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
