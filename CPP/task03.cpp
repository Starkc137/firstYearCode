#include <iostream>


using namespace std;

int main()
{
	int N;
	cin>> N;
	
    double matrix[N][N]={};
	for(int i=0;i<N;i++)
	{
    for(int j=0;j<N;j++)
   {
       cin>>matrix[i][j];
   }
}
    double trace=0;
   

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==j)                        
                trace=trace+matrix[i][j];
        }
    }

    cout<<trace<<endl;
}


