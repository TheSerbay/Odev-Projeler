#include <iostream>
#include<stdlib.h>
using namespace std;
setlocale(LC_ALL,"Turkish"); 
double Topla(double s1,double s2,double s3,double s4,double s5)
{
return s1+s2+s3+s4+s5;
}
double Cikar(double s1,double s2,double s3,double s4,double s5)
{
return s1-s2-s3-s4-s5;
}
double Carp(double s1,double s2,double s3,double s4,double s5)
{
return s1*s2*s3*s4*s5;
}

int main()
{

double sayi1,sayi2,sayi3,sayi4,sayi5;;
cout<<"Say� 1 : ";
cin>>sayi1;
cout<<"Say� 2 : ";
cin>>sayi2;
cout<<"Say� 3 : ";
cin>>sayi3;
cout<<"Say� 4 : ";
cin>>sayi4;
cout<<"Say� 5 : ";
cin>>sayi5;

cout<<"Toplam : "<<Topla(sayi1,sayi2,sayi3,sayi4,sayi5)<<endl;
cout<<"Fark : "<<Cikar(sayi1,sayi2,sayi3,sayi4,sayi5)<<endl;
cout<<"�arp�m : "<<Carp(sayi1,sayi2,sayi3,sayi4,sayi5)<<endl;                                                              
}
