/*

		SERDAR �ZKAN
		B203102008

*/
#include<iostream>
using namespace std;
int main() {
setlocale(LC_ALL, "Turkish");

int s1, s2;
string proj;
float sc;
cout << "Say� 1'i Giriniz :  ";
cin >> s1;
cout << "��lem t�r�n� (+ - / *) : ";
cin >> proj;
cout << "Say� 2'i Giriniz : ";
cin >>s2;

if (proj == "+")
{
	sc = s1 + s2;
	cout << "��lem Sonucu : " <<sc;
}
else if (proj == "-")
{
	sc = s1 - s2;
	cout << "��lem Sonucu : " <<sc;
}
else if (proj == "*")
{
	sc = s1 * s2;
	cout << "��lem Sonucu : " <<sc;
}
else if (proj=="/")
{
	sc = s1 / s2;
	cout << "��lem Sonucu : " <<sc;
}
else
{
	cout << "Yanl�� Karakter";
}

	
	
}

