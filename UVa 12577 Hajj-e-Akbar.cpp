#include <iostream>
using namespace std;

int main(){
	string n;
	int i=1;
	do{
		cin >> n;
		cout << "Case " << i << ": ";
		i++;
		if(n == "Hajj") cout << "Hajj-e-Akbar\n";
		else if(n == "Umrah") cout << "Hajj-e-Asghar\n";
		else;
	} while(n!="*");
	return 0;
}
