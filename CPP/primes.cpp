#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int N){
	/*
	Complete the missing code here
	The function takes in an integer and returns true
	if it is prime. Otherwise, it returns false
	*/
	if (N <= 1){
		return False
	}
	if (N <= 3){
		return True	
	}
	
	if (N%2 == 0 or N%3 == 0){
		return False
	}
	
	for (int i=5,i<int(math.sqrt(N)+1),i=i+6):
		if (N%i == 0 or N%(i + 2)== 0){
			return False
		}
	
	return True

}

bool isTwinPrime(int N){
	/*
	Complete the missing code. The function takes in 
	an integer and returns true if it is a twin prime.
	Otherwise, it returns false. The function should
	make use of the isPrime() function in some way
	*/
}

int main(){
	int N;
	cin >> N;
	for (int i = 0; i < N; ++i){
		int p;
		cin >> p;
		if (isTwinPrime(p)){
			cout << "true" << endl;
		}
		else{
			cout << "false" << endl;
		}
	}
	return 0;
}
