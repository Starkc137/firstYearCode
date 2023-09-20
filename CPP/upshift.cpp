#include <iostream>
#include <tuple> 
#include <vector>
#include <map>
using namespace std;

int main(){
	string s;
	cin>>s;
	string sum="";
	int length = s.length();
	for (int index = 0; index < length; index++){
	   string sum = sum+ (char(int(string[index])+1));
}
	cout<< sum <<endl;
	return 0;
}

