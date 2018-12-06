#include <iostream>
using namespace std;

int main(){
	int n, x, wrong;
	string word, number[3]={"one","two","three"};
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> word; x=1;
		for(int j=0; j<3; j++){
			if(word.length()==number[j].length()){
				wrong=0;
				for(int k=0; k<word.length(); k++){
					if(word[k]!=number[j][k]) wrong++;
				} if(wrong<=1) cout << x << endl;
			} x++;
		}
	}
}
