/*

		SERDAR �ZKAN
		B203102008

*/
#include<iostream>
#include<math.h>
using namespace std;
int main() {
setlocale(LC_ALL, "Turkish");
int sayi, sonuc, says;
cout << "Say� Adedi ? : "<<endl;
cin>>sayi;
for(int i = 1; i <= sayi; i++) {
cout << i << ". Say�: "; cin >> says;
sonuc = (int)sqrt(says);
if (sonuc * sonuc == says) 
{
cout << says << "tam karedir"<<endl;
}
else {
cout << says << "tam kare de�ildir"<<endl;
}
}
return 0;
}
