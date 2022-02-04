#include <iostream>
using namespace std;
main(){
setlocale(LC_ALL, "Turkish");

float not1,not2,not3,not4,not5,not6,ortalama;
	cout << "1. Notu: ";
		cin >> not1;
	cout << "2. Notu: ";
		cin >> not2;
		cout << "3. Notu: ";
		cin >> not3;
	cout << "4. Notu: ";
		cin >> not4;
		cout << "5. Notu: ";
		cin >> not5;
	cout << "6. Notu: ";
		cin >> not6;

		ortalama = (not1*0.15)+(not2*0.15)+(not3*0.15)+(not4*0.15)+(not5*0.20)+(not6*0.20);
		cout << "\nNot Ortalamaniz: " << ortalama;
		cout << "\nHarf Notu: ";
		if(ortalama>=90) {
			cout << "AA";
		} 
		else if((ortalama>=85) && (ortalama<90)) {
			cout << "BA";
		} 
		else if((ortalama>=80) && (ortalama<85)) {
			cout << "BB";
		} 
		else if((ortalama>=75) && (ortalama<80)) {
			cout << "CB";
		} 
		else if((ortalama>=70) && (ortalama<75)) {
			cout << "CC";
		} 
		else if((ortalama>=65) && (ortalama<70)) {
			cout << "DC";
		} 
		else if((ortalama>=60) && (ortalama<65)) {
			cout << "DD";
		} 
		else if((ortalama>=50) && (ortalama<60)) {
			cout << "FD";
		} 
		else {
			cout << "FF";
		}

}

