#include <iostream>
using namespace std;

int main(){
	string alph; cin >> alph;
	for (char i : alph) {
		cout<< int(i) -65<< ' ';
	}
	return 0;
}
