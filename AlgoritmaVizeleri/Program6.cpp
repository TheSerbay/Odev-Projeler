/*

		SERDAR �ZKAN
		B203102008

*/
#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Turkish");

int yas;
bool ask, eng, mm;
cout << "YA�INIZ ? ";
cin >> yas;
cout << "Askerlik durumu?"<<endl;
cout << "Yap�ld� '1' Yap�lmad� '2'"<<endl;
cin >> ask;
cout << "B�l�m�n�z Bilgisayar M�hendisli�i mi ?"<<endl;
cout << "Evet '1' Hay�r '2'"<<endl;
cin >> mm;
cout << "�ngilizce Biliyor musunuz ? "<<endl;
cout << "Evet '1' Hay�r '2'"<<endl;
cin >> eng;


if ((yas > 25 && yas < 45) && (ask == true) && (eng == true) && (mm == true))
{
	cout << "Bizimle �al��maya Hak Kazand�n�z :)";
}
	else
{
		cout << "�zg�n�z Arad���m�z Kriterlere Uygun De�ilsiniz :(";
}

	
}

