/*

		SERDAR ÖZKAN
		B203102008

*/
#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Turkish");

int yas;
bool ask, eng, mm;
cout << "YAÞINIZ ? ";
cin >> yas;
cout << "Askerlik durumu?"<<endl;
cout << "Yapýldý '1' Yapýlmadý '2'"<<endl;
cin >> ask;
cout << "Bölümünüz Bilgisayar Mühendisliði mi ?"<<endl;
cout << "Evet '1' Hayýr '2'"<<endl;
cin >> mm;
cout << "Ýngilizce Biliyor musunuz ? "<<endl;
cout << "Evet '1' Hayýr '2'"<<endl;
cin >> eng;


if ((yas > 25 && yas < 45) && (ask == true) && (eng == true) && (mm == true))
{
	cout << "Bizimle Çalýþmaya Hak Kazandýnýz :)";
}
	else
{
		cout << "Üzgünüz Aradýðýmýz Kriterlere Uygun Deðilsiniz :(";
}

	
}

