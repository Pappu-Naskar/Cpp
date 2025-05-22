#include <iostream>
#include <string>

using namespace std;

int main(){
    cout<<"Hello World"<<endl ;
    // cout<<"my name is pappu naskar"<<endl;
    string firstname , lastName;
    cout << "Enter your First Name: ";
    cin >> firstname;
   
    cout << "Enter your Last Name: ";
    cin >> lastName;
    
    string fullName = firstname + " " + lastName;
    cout << "Your fullName is " << fullName << endl ;
 
    return 0;
}

