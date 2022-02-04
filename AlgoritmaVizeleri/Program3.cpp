/*

		SERDAR ÖZKAN
		B203102008

*/


#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Turkish");
int takpn1, takpn2, tak1gol, tak1ygol, tak2gol, tak2ygol,av1,av2;

cout << "A takýmý puaný : ";cin >> takpn1;
cout << "Takým A Attýðý Gol :";cin >> tak1gol;
cout << "Takým A Yediði Gol :";cin >> tak1ygol;
	av1 = tak1gol - tak1ygol;
cout << "B takýmý puaný : ";
cin >> takpn2;
cout <<"Takým B Atýlan Gol:";
cin>>tak2gol;
cout << "Takým B Yediði Gol :"; cin >> tak2ygol;
	av2 = tak2gol - tak2ygol;


if (takpn1 > takpn2)
{
	cout << "Takým A Averaj :" <<av1;
}
else if (takpn2 > takpn1)
{
	cout << "Takým B Averaj :" << av2;
}
else if(takpn1 == takpn2)
{
		
if (av1 > av2)
{
	cout << " Takým A Averaj :" << av1 <<endl;
	cout << "Takým B Ýkinci Olmuþtur Averajý :" << av2;
}
else if (av1 < av2)
{
	cout << "Takým B Averaj :" << av2<<endl;
	cout << "Takým B Ýkinci Olmuþtur Averajý :" << av1;

}
}

}

