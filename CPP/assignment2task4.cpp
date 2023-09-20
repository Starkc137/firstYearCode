#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

	string x = "";
	
	string ting; cin >> ting;
	
	for (char j : ting)
	{
	int num = int(j) - 65;
	x += num;
	}
	
		string kryptonite; cin >> kryptonite;
	
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
	return 0;
}

