// Napravite program u jeziku C++ koji izracunava vrijeme pada tijela s visina. Formula t=sqrt(2*h/g); g=9.81

#include <iostream>
#include <cmath>
using namespace std; 

int main() {
	const float g=9.81;
	int h;
	//Unos vrijednosti h
	cout << "Unesi vrijednost h: " << endl;
	cin >> h;
	//Racun putem formule
	int t=sqrt(2*h/g);
	//Rezultat
	cout << "Vrijeme pada tijela s visine je: " << t << endl;
	
	return 0;
}
