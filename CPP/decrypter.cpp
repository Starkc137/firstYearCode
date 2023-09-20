#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

	string x = "";
	
	string ting; getline(cin,ting);
	
	for (char j : ting)
	{
	int num = int(j) - 65;
	x += num;
	}
	
		string kryptonite; getline(cin,kryptonite);
		kryptonite= kryptonite + ' ';
	
	vector<char> krypton;
	int position = 0;
	
	for (char j : kryptonite)
	{
		if (int(j) < 65){
			char a = char(int(j));
			krypton.push_back(a);
			int position = 0;
		}
		if ((int(j) - x[position]) > 96 && (int(j) - x[position]) < 122)
		{
			char a = char(int(j) - x[position]);
			krypton.push_back(a);
		}
		else if ((int(j) - x[position]) < 96 && int(j) >96)
		{
			char a = char(int(j) - x[position] + 26);
			krypton.push_back(a);
		}
		else if ((int(j) - x[position]) > 64 && (int(j) - x[position]) <91) 
		{
			char a = char(int(j) - x[position]);
			krypton.push_back(a);
		}
		else if  ((int(j) - x[position]) >38 && (int(j) - x[position])  <64)
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
	return 0;
}

