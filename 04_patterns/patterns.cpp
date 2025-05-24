// ---------------------Square Pattern Easy with numbers n=4 ------------------------------------->

// #include <iostream>
// using namespace std;

// int main (){
//    int n = 4;
//    for(int i =1 ; i <= n ; i++){ // outer loop
//     for(int j=1; j<=n ; j ++){ // inner loop
//         cout<<j <<" ";
//     }
//     cout<<endl;
//    }

//     return 0;
// }

// ------------Star Patterns ------------------>

// #include <iostream>
// using namespace std;

// int main (){
//    int n = 4;
//    for(int i =0 ; i< n ; i++){ // outer loop
//     for(int j=0; j<n; j ++){ // inner loop
//         cout<<"* ";
//     }
//     cout<<endl;
//    }

//     return 0;
// }

// --------------------------Char patterns----------------------------->

// #include <iostream>
// using namespace std;

// int main (){
//    int n = 4;
//    for(int i =0 ; i< n ; i++){ // outer loop
//     char ch = 'A';
//     for(int j=0; j<n; j ++){ // inner loop
//         cout<<ch << " ";
//         ch = ch +1;
//     }
//     cout<<endl;
//    }

//     return 0;
// }

// -------------------Square Pattern n = 3------------------------------->
// 1 2 3
// 4 5 6
// 7 8 9

// #include <iostream>
// using namespace std;

// int main (){
//    int n = 3;
//    int num = 1 ;    
//    for(int i =0 ; i< n ; i++){ // outer loop
//     for(int j=0; j<n; j ++){ // inner loop
//         cout << num <<" ";
//         num ++ ;
        
//     }
//     cout<<endl;
//    }

//     return 0;
// }

// ---------------------------Char Patterns--------------------------------------------->
// A B C D
// E F G H
// I J K L
// M N O P

// #include <iostream>
// using namespace std;

// int main (){
//    int n = 4;
//    char ch = 'A' ;    
//    for(int i =0 ; i< n ; i++){ // outer loop
//     for(int j=0; j<n; j ++){ // inner loop
//         cout << ch <<" ";
//         ch++ ;
        
//     }
//     cout<<endl;
//    }

//     return 0;
// }

// --------------------Triangle Pattern---------------------------->
// *
// * *
// * * *
// * * * *

// #include <iostream>
// using namespace std;

// int main (){
//    int n = 6;
      
//    for(int i =0 ; i< n ; i++){ // outer loop
//     for(int j=0; j<i+1; j ++){ // inner loop
//         cout <<"*" <<" ";
        
        
//     }
//     cout<<endl;
//    }

//     return 0;
// }

// NUMBER PATTERNS

// #include <iostream>
// using namespace std;

// int main (){
//    int n = 6;
      
//    for(int i =0 ; i< n ; i++){ // outer loop
//     for(int j=0; j<i+1; j ++){ // inner loop
//         cout <<(i+1) <<" ";
        
        
//     }
//     cout<<endl;
//    }

//     return 0;
// }

// ------------------char Patterns----------------------------------

// A 
// B B 
// C C C 
// D D D D 
// E E E E E 
// F F F F F F 
// #include <iostream>
// using namespace std;

// int main (){
//    int n = 6;
//    for(int i =0 ; i< n ; i++){ // outer loop
//     char ch = 'A' + i;  
//     for(int j=0; j<i+1; j ++){ // inner loop
//         cout <<ch <<" ";
        
        
//     }
//     cout<<endl;
//    }

//     return 0;
// }

// -------------------------------------------------------------------------------------
// 1 
// 1 2 
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
// 1 2 3 4 5 6
// #include <iostream>
// using namespace std;

// int main (){
//    int n = 6;
//    for(int i =0 ; i< n ; i++){ // outer loop
     
//     for(int j=1; j<=i+1; j ++){ // inner loop
//         cout <<j<<" ";
        
        
//     }
//     cout<<endl;
//    }

//     return 0;
// }
// -------------------------------------------------------------------
// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 
// 5 4 3 2 1 
// 6 5 4 3 2 1 
// #include <iostream>
// using namespace std;

// int main (){
//    int n = 6;
//    for(int i =0; i<n ; i++){ // outer loop
     
//     for(int j=i+1; j>0; j --){ // inner loop
//         cout <<j<<" ";
        
        
//     }
//     cout<<endl;
//    }

//     return 0;
// }

// -------------------------------------------------------------->
// 1 
// 2 3
// 4 5 6
// 7 8 9 10
// #include <iostream>
// using namespace std;

// int main (){
//    int n = 4;
//    int num = 1;
//    for(int i =0; i<n ; i++){ // outer loop
     
//     for(int j=0; j<i+1; j ++){ // inner loop
//         cout <<num<<" ";
//         num ++;
        
//     }
//     cout<<endl;
//    }

//     return 0;
// }
  

// ----------------------------------------------------------------- >
// A 
// B C
// D E F
// G H I J
// #include <iostream>
// using namespace std;

// int main (){
//    int n = 4;
//    char ch = 'A';
//    for(int i =0; i<n ; i++){ // outer loop
     
//     for(int j=0; j<i+1; j ++){ // inner loop
//         cout <<ch<<" ";
//         ch ++;
        
//     }
//     cout<<endl;
//    }

//     return 0;
// }

// -------------------------Inverted Triangle Pattern------------------------------------------------------>

// 1111
//  222
//   33
//    4
// #include <iostream>
// using namespace std;

// int main (){
//    int n = 4;
   
//    for(int i =0; i<n ; i++){ // outer loop
     
//     for(int j=0; j<i; j ++){ // inner loop
//         cout <<" ";
        
//     }
//     //num
//     for(int j=0;j<n-i;j++){
//         cout<< (i+1);
//     }
//     cout<<endl;
//    }

//     return 0;
// }

// ----------------------Pyramid Pattern--------------------------------------------->
//    1
//   121
//  12321
// 1234321
// #include<iostream>
// using namespace std;

// int main (){
//     int n = 4;
//     for(int i=0;i<n;i++){
//         //spaces
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         //num1 : i +1
//         for(int j=1;j<=i+1;j++){
//             cout<<j;
//         }
//         //num2
//         for(int j = i; j>=1 ; j--){
//             cout<<j;
//         }
//         cout << endl;
//     }


//     return 0;
// }


// -----------------Hollow Diamond Pattern---------------------------------------->
//    *
//   * *
//  *   *
// *     *
//  *   *
//   * *
//    *

// #include <iostream>
// using namespace std;

// int main(){
//     int n=4;
//     for(int i=0; i<n; i++){
//         //space
//        for (int j=0; j<n-i-1; j++){
//         cout << " ";
//        }

//        cout << "*";

//        if(i != 0){
//         //spaces
//         for(int j=0; j<2*i-1; j++){
//             cout << " ";
//         }
//         cout<<"*";
//        }
//       cout<<endl;
//     }

//     //bottom

//     for(int i=0 ; i<n-1; i++){//0 to n-2
//         //space
//         for(int j=0;j<i+1;j++){
//             cout<<" ";
//         }
//         cout<<"*";
//         if(i !=n-2){
//             //space
//             for(int j=0;j<2*(n-i)-5;j++){
//                 cout << " ";
//             }
//             cout<<"*";
//         }
//         cout << endl;
//     }

//     return 0;
// }