#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	string x="";
	string code; cin>>code;
	for (char i : code)	{
	int cNum=int(i)-65;
	x += cNum;
	}
	cout<<x;
	
	string krypton; cin>>krypton;
	
	vector<char>kryp;
	int indexer =0
	
	for(char i: krypton)
	
	if ((int(i)+x[indexer])<91)
	{
		char cd=char(int(i)+x[indexer]);
		kryp.push_back(cd);
	}
	else
	{
		char cd= char(int(i)+x[indexer]-26);
		kryp.push_back(cd);
	}
	if((indexer+1)<x.size())
	{
		indexer++;
	}
	else
	{
		indexer=0;
	}
	
}
for (char j : kryp){
	cout<<j;
}
	return 0;
}
