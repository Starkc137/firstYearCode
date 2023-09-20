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
	int num = int(j) - 97;
	x += num;
	}
	
		string kryptonite; cin >> kryptonite;
	
	vector<char> krypton;
	int index = 0;
	
	for (char j : kryptonite)
	{
		if ((int(j) + x[index]) < 123 )
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
	return 0;
}

