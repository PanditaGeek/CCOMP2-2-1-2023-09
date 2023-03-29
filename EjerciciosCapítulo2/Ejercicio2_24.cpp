#include <iostream>
using namespace std;

int main() 
{
  int num1, num2;
  cout << "Ingrese 2 números: " << endl;
  cin >> num1 >> num2;

  if(num1%2 == 1)
    cout << num1 << " es impar." << endl;
  else 
    cout << num1 << " es par."<< endl;
  if(num2%2 == 1)
    cout << num2 << " es impar." << endl;
  else
     cout << num2 << " es par."<< endl;

  int suma = num1 + num2;
  cout << "La suma es: " << suma << endl;
  
    
    return 0;