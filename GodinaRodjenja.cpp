//Unesi trenutnu godinu te ispiši svoje godine a zatim svoje godine napisi u mjesecima.

#include <iostream>
using namespace std;

int main() {
	int TrenutnaGodina=2023;
	int MojaGodina;
    
    cout << "Unesi svoju godinu rodjenja: " << endl;
    cin >> MojaGodina;
    
    int Godina=TrenutnaGodina-MojaGodina;
    
    cout << "Broj tvojih godina: " << Godina << endl;
    cout << "Broj tvojih godina u mjesecima: " << Godina*12 << endl;
	
	return 0;
}
