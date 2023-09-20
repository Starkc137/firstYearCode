#include <iostream>

using namespace std;

int main()
{
    char str[100];
    int i,vowelcounter=0,consocounter=0;
    gets(str);
    for(i=0; str[i]; i++){
        if(str[i] == 'a'|| str[i] == 'e'|| str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u'){
        vowelcounter++;
    }
    else if((str[i] >= 'a' && str[i] <= 'z')){
        consocounter++;
    }
}
cout<< abs(vowelcounter-consocounter)<<endl;

    return 0;
}
