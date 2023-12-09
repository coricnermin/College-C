#include <iostream>
using namespace std;

int main () {
	char slovo;
	
	cout << "Ovaj program pretvara uneseno veliko slovo u malo, i obratno! " << endl;
	cout << "Unesite slovo: " << endl;
	cin >> slovo;
	
	if (slovo>=97 && slovo<=122) {
		cout << "Slovo: " << char(slovo-32);
	} else if (slovo>=97 && slovo<=122) {
		cout << "Slovo: " << char(slovo+32);
	} else {
		cout << "Niste unijeli slovo. Pokusajte ponovo! " << endl;
	}
	
	
	
	return 0;
}
