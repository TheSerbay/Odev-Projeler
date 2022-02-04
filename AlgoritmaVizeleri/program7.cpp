/*

		SERDAR ÖZKAN
		B203102008

*/
#include<iostream>
#include<math.h>
using namespace std;
int main() {
setlocale(LC_ALL, "Turkish");
int sayi, sonuc, says;
cout << "Sayý Adedi ? : "<<endl;
cin>>sayi;
for(int i = 1; i <= sayi; i++) {
cout << i << ". Sayý: "; cin >> says;
sonuc = (int)sqrt(says);
if (sonuc * sonuc == says) 
{
cout << says << "tam karedir"<<endl;
}
else {
cout << says << "tam kare deðildir"<<endl;
}
}
return 0;
}
