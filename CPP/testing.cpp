#include <iostream>
#include <vector>
#include <string>

using namespace std;

//For this task, first create 2 void functions, each with the encryption and decryption traits such that the first input calls onto the function we want to work with
	 
void encrypter(){ //Function for encryption
	
	vector<int> c;
	
	string code; getline(cin, code);
	
	for (char j : code)
	{
	int cNum = int(j) - 65;
	c.push_back(cNum);
	}
	
	string encryptee; getline(cin, encryptee); //word to be encrypted!
	getline(cin, encryptee);
	vector<char> encrypto;
	int indexer = 0;
	
	for (char j : encryptee)
	{
		if (int(j) < 65){
			char cd = char(int(j));
				encrypto.push_back(cd);
		}
		if (islower(j)){
				if ((int(j) + c[indexer]) < 123)
			{
				char cd = char(int(j) + c[indexer]);
				encrypto.push_back(cd);
			}
			else
			{
				char cd = char(int(j) + c[indexer] - 26);
				encrypto.push_back(cd);
			}
			if ((indexer + 1) < c.size())
			{
				indexer++;
			}
			else
			{
				indexer = 0;
			}
		}
		else if (isupper(j)){
			if ((int(j) + c[indexer]) < 91)
			{
				char cd = char(int(j) + c[indexer]);
				encrypto.push_back(cd);
			}
			else
			{
				char cd = char(int(j) + c[indexer] - 26);
				encrypto.push_back(cd);
			}
			if ((indexer + 1) < c.size())
			{
				indexer++;
			}
			else
			{
				indexer = 0;
			}
	}
}

		for (char i : encrypto)
	{
		cout << i;
	}

}

	//This is the seperation of the encryption and the decrytion of the words. The code below is to perform decryption 

void decrypter(){ //Function for decryption
	vector<int> c;
	
	string code; getline(cin, code);
	
	for (char j : code)
	{
	int cNum = int(j) + 65;
	c.push_back(cNum);
	}
	
	string dencrypto; getline(cin, dencrypto);
	
	vector<char> decryptee;
	int indexer = 0;
	
	for (char j : dencrypto)
	{
		if (int(j) < 65){
			char cd = char(int(j));
				dencrypto.push_back(cd);
		}
		if (islower(j)){
				if ((int(j) + c[indexer]) < 123)
			{
				char cd = char(int(j) + c[indexer]);
				dencrypto.push_back(cd);
			}
			else
			{
				char cd = char(int(j) + c[indexer] - 26);
				dencrypto.push_back(cd);
			}
			if ((indexer + 1) < c.size())
			{
				indexer++;
			}
			else
			{
				indexer = 0;
			}
		}
		else if (isupper(j)){
			if ((int(j) + c[indexer]) < 91)
			{
				char cd = char(int(j) + c[indexer]);
				dencrypto.push_back(cd);
			}
			else
			{
				char cd = char(int(j) + c[indexer] - 26);
				dencrypto.push_back(cd);
			}
			if ((indexer + 1) < c.size())
			{
				indexer++;
			}
			else
			{
				indexer = 0;
			}
	}
	}

	
	for (char i : decryptee)
	{
		cout << i;
	}
}


int main(){
	
	string function; getline(cin, function);
	
	if (function == "encrypt")
	{
		encrypter();
	}
	else
	{
		decrypter();
	}
	return 0;
}

