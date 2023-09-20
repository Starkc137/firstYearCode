#include <iostream>
#include <tuple> 
using namespace std;

int main(){
	string x,y;
	cin >>x;
	cin >>y;
	
if (x=="rock"){
    if (y=="scissors"){
        cout<<"Player 1 wins"<< endl;
    }
    if (y=="paper"){
        cout<<"Player 2 wins" <<endl;
		}
    if (y=="rock"){
        cout<<"Tie"<< endl;
		}
	}

if (x=="paper"){
        if (y=="scissors"){
            cout<<"Player 2 wins" <<endl;
        }
        if (y=="rock"){
             cout<<"Player 1 wins"<< endl;
         }
        if (y=="paper"){
           cout<<"Tie"<< endl;
       }
   }

if (x=="scissors"){
        if (y=="paper"){
             cout<<"Player 1 wins"<< endl;
         }
        if (y=="rock"){
            cout<<"Player 2 wins" <<endl;
        }
        if (y=="scissors"){
            cout<<"Tie"<< endl;
        }
	}
	return 0;
}
