// #include <iostream>

// using namespace std;

// int main(){
//    int age = 25;
//    char grade = 'A';
//   float PI = 3.14f;
//   bool isSafe = false;
//   double price = 100.99;

//    cout << isSafe  << endl; //true -> 1 , false -> 0
   
   

//     return 0 ;
// }


// ---------------------------Type Casting----------------------------------------->

// # include <iostream>
// using namespace std;

// int main (){
    
//     char grade = 'A';
//     int value = grade;

//     double price = 100.99;
//     int newPrice = (int)price;

//     cout << newPrice << endl;


//     return 0;
// }


//---------------------------------------Operators in C++ -------------------------------------------------->

// #include <iostream>
// using namespace std;

// int main(){

// cout << (5 / (float)2) << endl;
//     cout << (3 < 1) << endl;
//     cout << !(3 < 1) << endl;
//     return 0;
// }


// problems . Sum of two numbers

#include <iostream>
using namespace std ;

int main(){
    int a , b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    int sum = a + b;
    cout << "Sum: " <<sum << endl;


    return 0 ;
}