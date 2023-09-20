#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str1[20], str2[20];
    int len1, len2, i, j, there=0, notThere=0;
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
    cin>>str1>> str2;
}

 
    len1 = strlen(str1);
    len2 = strlen(str2);
    if(len1 == len2)
    {
        for(i=0; i<len1; i++)
        {
            there = 0;
            for(j=0; j<len1; j++)
            {
                if(str1[i] == str2[j])
                {
                    there = 1;
                    break;
                }
            }
            if(there == 0)
            {
                notThere = 1;
                break;
            }
         for(int i=0;i<N;i++){
        
        if(notThere == 1)
            cout<<"\nFalse";
        else
            cout<<"\nTrue";
    }

    else
        cout<<"\nFalse";
    cout<<endl;

    return 0;
}
