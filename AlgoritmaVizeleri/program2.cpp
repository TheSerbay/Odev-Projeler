#include<iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Turkish");
int ulke1, ulke2,yil1;
ulke1 = 50000000;
ulke2 = 10000000;
for (int yil = 0; ulke1 > ulke2; yil++)
    {
    ulke1 = ((ulke1 * 2) / 100) + ulke1;
    ulke2 = ((ulke2 * 6) / 100) + ulke2;
    yil1=yil;
    }
cout<< ulke1<< endl;
cout<< ulke2<< endl;
cout<< yil1<< endl;
}



/*

		SERDAR ÖZKAN
		B203102008

*/
