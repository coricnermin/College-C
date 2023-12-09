#include <iostream>
using namespace std;

int main () {
	cout << "Ovo je program koji pretvara Fahrenheite u Celzijuse, i obrnuto!";
	
	cout << "F=Fahrenheit " << endl;
	cout << "C=Celzijus " << endl;
	
	char znak;
	int Temp;
	
	cout << "Unesi u sta zelis pretvoriti temperaturu(F or C): " << endl;
	cin >> znak;
	cout << "Unesi temperaturu: " << endl;
	cin >> Temp;
	
	if (znak=='F' || znak=='f') {
		cout << "Temperatura u Fahrenheitima je: " << (1.8*Temp) + 32;
	} else if (znak=='C' || znak=='c') {
		cout << "Temperatura u Celzijusima je: " << (Temp-32) / 1.8;
	} else {
		cout << "Pogresan unos, pokusajte ponovo!";
	}
	return 0;
}
