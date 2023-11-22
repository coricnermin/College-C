#include <iostream>
#include <cmath>
using namespace std; 

int main() {
	int a,b,c;
	cout << "Unesi stranice a,b,c: " << endl;
	cin >> a >> b >> c;
	
	if (a==b && b==c) {
		cout << "Trougao je jednakostranicni.";
	}
	else if (a==b || a==c || b==c) {
		cout << "Trougao je jednakokraki.";
	}
	else {
		cout<< "Trougao je raznostranicni.";
	}
		
	return 0;
}
