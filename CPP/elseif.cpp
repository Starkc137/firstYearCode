#include <iostream>
#include <tuple> 
using namespace std;

int main(){
	int grade;
	cin>> grade;
	if (grade >= 75 and grade <= 100){
	   cout <<"First" << endl;
	   }
	if (grade >= 70 and grade <= 74){
	 cout <<"Upper second" << endl;
	}
	if (grade >= 60 and grade <= 69){
	  cout <<"Lower second" << endl;
	}
	if (grade >= 50 and grade <= 59){
	  cout <<"Third" << endl;
	}
	if( grade < 50 and grade >= 0){
	 cout <<"Fail"<< endl;
	}
	return 0;
}


