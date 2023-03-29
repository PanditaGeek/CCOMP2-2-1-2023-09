#include <iostream>

using namespace std;

int main(){
    int num1, num2, num3, num4, num5;

   cout << "Ingrese 5 números: ";
   cin >> num1 >> num2 >> num3 >> num4 >> num5;

    int smaller, higher;

    if(num1<num2 && num1<num3 && num1<num4 && num1<num5)
        smaller = num1;
   else if(num1>num2 && num1>num3 && num1>num4 &&     num1>num5)
        higher = num1;
    
    if(num2 < num1&&num2 <num3 &&num2 <num4 &&num2 <num5)
        smaller =num2; 
   else if(num2 > num1 && num2 >num3 &&num2 >num4 &&num2 >num5)
        higher =num2;

    if(num3 < num1&&num3 <num2 &&num3 <num4 &&num3 <num5)
        smaller =num3;
   else if(num3 > num1&&num3 >num2 &&num3 >num4 &&num3 >num5)
        higher =num3;

    if(num4 < num1&&num4 <num2 &&num4 <num3 &&num4 <num5)
        smaller =num4;
   else if(num2 > num1&&num2 >num3 &&num2 >num4 &&num2 >num5)
        higher =num4;

    if(num5 < num1&&num5 <num2 &&num5 <num3 &&num5 <num4)
        smaller =num5;
   else if(num5 > num1&&num5 >num2 &&num5 >num3 &&num5 >num4)
        higher =num5;

   cout << "El mayor numero es: " << higher << endl;
   cout << "El menor numero es: " << smaller << endl;

    return 0;
}