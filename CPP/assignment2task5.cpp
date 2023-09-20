#include <iostream>
#include <string>
#include <vector>

using namespace std;

void cipher(){
		string x = "";
	
	string ting; getline(cin, ting);
	
	for (char j : ting)
	{
	int num = int(j) - 65;
	x += num;
	}
	
		string kryptonite; getline(cin, kryptonite);
	
	vector<char> krypton;
	int index = 0;
	
	for (char j : kryptonite)
	{
		if ((int(j) + x[index]) < 91)
		{
			char a = char(int(j) + x[index]);
			krypton.push_back(a);
		}
		else
		{
			char a = char(int(j) + x[index] - 26);
			krypton.push_back(a);
		}
		if ((index + 1) < x.size())
		{
			index++;
		}
		else
		{
			index = 0;
		}
	
	}
	
	for (char i : krypton)
	{
		cout << i;
	}
}

void decipher(){
	
		string x = "";
	
	string ting;  getline(cin,ting);
	
	for (char j : ting)
	{
	int num = int(j) - 65;
	x += num;
	}
	
		string kryptonite; getline(cin, kryptonite);
	
	vector<char> krypton;
	int position = 0;
	
	for (char j : kryptonite)
	{
		if ((int(j) - x[position]) > 64)
		{
			char a = char(int(j) - x[position]);
			krypton.push_back(a);
		}
		else
		{
			char a = char(int(j) - x[position] + 26);
			krypton.push_back(a);
		}
		if ((position + 1) < x.size())
		{
			position++;
		}
		else
		{
			position = 0;
		}
	
	}
	
	for (char i : krypton)
	{
		cout << i;
	}
	
}


int main(){
	
	string input;
	getline(cin,input);
	
	if (input== "encrypt"){
		
		cipher();
	}
	else if(input== "decrypt"){
		decipher();
	}
	return 0;	
}
