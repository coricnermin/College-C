#include <iostream>
#include <cmath>
using namespace std; 

int main() {
	const float Pi = 3.14; //Pi
	float r,O,P;
	cout << "Unesite poluprecnik kruga (r):" << endl;
	cin >> r;
	O = 2*r*Pi;
	P = r*r*Pi;
	//Ipis rezultata
	cout<<"Obim kruga je: " << O << endl;
	cout<<"Povrsina kruga je: " << P << endl;
	
	return 0;
}
