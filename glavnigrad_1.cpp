#include<iostream> 
#include <stdio.h>
using namespace std;
int main() {
	int drzava;
	cout<<"Unesi broj drzave kako bi dobio njen glavni grad: "<<endl;
	cout<<"1. Njemacka"<<endl<<"2. Austrija"<<endl<<"3. Hrvatska"<<endl<<"4. Srbija"<<endl<<"5. Finska"<<endl<<"6. Island"<<endl
	<<"7. Danska"<<endl<<"8. Madjarska"<<endl<<"9. Bugarska"<<endl;
	cin>>drzava;
	cout<<"Glavni grad trazene drzave je: ";
	switch(drzava){
		case 1: 
			cout<<"Berlin"<<endl;
			break;
		case 2: 
			cout<<"Bec"<<endl;
			break;
		case 3: 
			cout<<"Zagreb"<<endl;
			break;
		case 4: 
			cout<<"Beograd"<<endl;
			break;
		case 5: 
			cout<<"Helsiniki"<<endl;
			break;
		case 6: 
			cout<<"Rejkjavik"<<endl;
			break;
		case 7: 
			cout<<"Kopenhagen"<<endl;
			break;
		case 8: 
			cout<<"Budimpesta"<<endl;
			break;
		case 9: 
			cout<<"Sofija"<<endl;
			break;
		default:
			cout<<" X "<<endl<<"Unijeli ste nepravilan broj. Pokusajte ponovo!";
	}


	return 0;
}
