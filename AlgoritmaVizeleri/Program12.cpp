/*

		SERDAR ÖZKAN
		B203102008

*/
#include<iostream>
using namespace std;
int main() {
setlocale(LC_ALL, "Turkish");

int s1, s2;
string proj;
float sc;
cout << "Sayý 1'i Giriniz :  ";
cin >> s1;
cout << "Ýþlem türünü (+ - / *) : ";
cin >> proj;
cout << "Sayý 2'i Giriniz : ";
cin >>s2;

if (proj == "+")
{
	sc = s1 + s2;
	cout << "Ýþlem Sonucu : " <<sc;
}
else if (proj == "-")
{
	sc = s1 - s2;
	cout << "Ýþlem Sonucu : " <<sc;
}
else if (proj == "*")
{
	sc = s1 * s2;
	cout << "Ýþlem Sonucu : " <<sc;
}
else if (proj=="/")
{
	sc = s1 / s2;
	cout << "Ýþlem Sonucu : " <<sc;
}
else
{
	cout << "Yanlýþ Karakter";
}

	
	
}

