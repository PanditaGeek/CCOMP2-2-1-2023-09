#include <iostream>
using namespace std;

int main()
{
  cout<<"letra minúscula"<<endl;
  char char1 = 'v';
  cout << char1 << endl;
  cout << static_cast<int>(char1)<< endl;

  cout<<"simbolo"<<endl;
  char char2 = '*';
  cout << char2 << endl;
  cout << static_cast<int>(char2)<<endl;

  cout<<"letra mayúscula"<<endl;
  char char3 = 'J';
  cout << char3 << endl;
  cout << static_cast<int>(char3)<<endl;

  cout << "dígitos" <<endl;
  char char4 = '9';
  cout << char4 << endl;
  cout << static_cast<int>(char4)<<endl;
  
  

  
    return 0;
}