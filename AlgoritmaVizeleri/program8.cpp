/*

		SERDAR �ZKAN
		B203102008

*/
#include <stdio.h>
#include <locale.h>
#include <iostream>
using namespace std;
int main (){

{setlocale(LC_ALL,"Turkish");


int sayi0;
int sayi1;
int sayi2=999999;
	
cout << "Girilecek say� adedi?: ";
cin >> sayi0;
	
cout << endl << "Say�lar� giriniz: " << endl;
for(int i=1; i<=sayi0; i++){
cout << i  << ". say�y� giriniz: ";
cin >> sayi0;
if (sayi1<sayi2){
sayi2=sayi1;
}
}
cout << endl;
cout <<sayi0 << " Girilen say�dan en k�����: " << sayi2 << endl;
}
}

