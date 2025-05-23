#include <iostream>
using namespace std;
int main(){
    
    int n;
    cout << "Enter n value : ";
    cin >> n ;
    
    if (n >= 0){
        cout << "n is positive\n";
    }else{
        cout << "n is negative\n";
    }


    return 0;
}


// -----------------------------age Example----------------------------------->

#include <iostream>
using namespace std;
int main(){
    
    int age;
    cout << "Enter your age : ";
    cin >> age ;
    
    if (age >= 18){
        cout << "you can vote\n";
    }else{
        cout << "you can not vote\n";
    }


    return 0;
}


// ------------------------------------Odd / Even number ----------------------->

#include <iostream>
using namespace std;
int main(){
    
    int num;
    cout << "Enter your number : ";
    cin >> num ;
    
    if (num %2 == 0){
        cout << num <<" is Even number\n";
    }else{
        cout << num <<" is Odd number\n";
    }


    return 0;
}

// -------------------------Grade find out ----------------------------------->

#include <iostream>
using namespace std;

int main(){
    int marks;
    cout <<"Enter marks : ";
    cin >> marks;

    if (marks >= 90){
        cout << "A\n";
    }else if (marks >= 80 && marks < 90){
        cout << "B\n";
    }else{
        cout << "C\n";
    }
    return 0;

}

// ------------------Check if a number is prime or not--------------------------->

#include <iostream>
using namespace std;

int main(){
    int n;
    bool isPrime = true;
    cout << "Enter N: ";
    cin >> n;

    for(int i=2 ; i*i<=n ; i++){
        
       if(n% i == 0){
        isPrime = false;
        break;
       }
       
    }
    if(isPrime == true){
        cout << "prime";
    }else{
        cout << "non-Prime";
    }
    return 0;
}

// Qs. Sum of all numbers from 1 to n which are divisible by  3.

#include<iostream>
using namespace std;
int main(){
    int n;
    int sum =0;
    cout<<"Enter n: ";
    cin>>n;
    for(int i = 1; i<=n ; i++){
        if(i % 3 == 0){
            sum += i;
        }
    }
    cout<<sum<<endl;
    return 0;
}

// Qs.Print Factorial of number N.

#include<iostream>
using namespace std;
int main(){
    int n,fact=1;
    cout<<"enter positive number: ";
    cin >> n;
    if(n<=0){
        cout<< "Factorial is not defined for negative numbers."<<endl;
    }else{
        for(int i=1;i<=n;i++){
            fact*=i;
        }
        cout<<fact<<endl;
    }


   

    return 0;
}
