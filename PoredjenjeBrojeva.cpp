#include <iostream>
using namespace std;

int main () {
	double Broj_1;
	double Broj_2;
	
	cout << "Unesite brojeve: " << endl;
	cin >> Broj_1;
	cin >> Broj_2;
	
	cout << "Veci broj je: " << max(Broj_1, Broj_2) << endl;
	cout << "Manji broj je: " << min(Broj_1, Broj_2) << endl;
		
	return 0;
}
