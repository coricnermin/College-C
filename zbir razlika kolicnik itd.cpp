//Ucitati 2 cijela broja i izracunati im zbir, razliku, proizvod i kolicnik

#include <iostream>
using namespace std;

int main() {
	
	int a,b;
	cout << "Unesi dva broja" << endl;
	cin>> a >> b;
	
	cout<<"Zbir je: " << a+b << endl;
	cout<<"Razlika je: " << a-b << endl;
	cout<<"Proizvod je: " << a*b << endl;
	if(b!=0) cout << "Kolicnik je: " << a/b << endl;
	else cout  << "Dijeljenje nulom nije definisano "<< endl;

return 0;
}
