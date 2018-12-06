#include <iostream>
using namespace std;

int main(){
	int m,k,sum=0;
	string act;
	cin>>m;
	for(int i=1; i<=m; i++){
		cin >> act;
		if(act=="donate"){
			cin >> k;
			sum = sum+k;
		}else if(act=="report") cout << sum << endl;
	}
	return 0;
}
