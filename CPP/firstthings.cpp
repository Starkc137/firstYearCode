#include <iostream>
#include <string>

using namespace std;

int main(){
    string firstName;
    cout << "Please enter your first name" << endl;
    cin >> firstName; //input first name
    int yearOfBirth;
    cout << "Please enter your year of birth" << endl;
    cin >> yearOfBirth;
    int age = 2018 - yearOfBirth;
    cout << "Hello, " << firstName << endl; //output message and name
    cout << "Your age is " << age << endl; //output message and age
    return 0;
}
