/*

		SERDAR �ZKAN
		B203102008

*/


#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Turkish");
int takpn1, takpn2, tak1gol, tak1ygol, tak2gol, tak2ygol,av1,av2;

cout << "A tak�m� puan� : ";cin >> takpn1;
cout << "Tak�m A Att��� Gol :";cin >> tak1gol;
cout << "Tak�m A Yedi�i Gol :";cin >> tak1ygol;
	av1 = tak1gol - tak1ygol;
cout << "B tak�m� puan� : ";
cin >> takpn2;
cout <<"Tak�m B At�lan Gol:";
cin>>tak2gol;
cout << "Tak�m B Yedi�i Gol :"; cin >> tak2ygol;
	av2 = tak2gol - tak2ygol;


if (takpn1 > takpn2)
{
	cout << "Tak�m A Averaj :" <<av1;
}
else if (takpn2 > takpn1)
{
	cout << "Tak�m B Averaj :" << av2;
}
else if(takpn1 == takpn2)
{
		
if (av1 > av2)
{
	cout << " Tak�m A Averaj :" << av1 <<endl;
	cout << "Tak�m B �kinci Olmu�tur Averaj� :" << av2;
}
else if (av1 < av2)
{
	cout << "Tak�m B Averaj :" << av2<<endl;
	cout << "Tak�m B �kinci Olmu�tur Averaj� :" << av1;

}
}

}

