#include <iostream>
using namespace std;

int main(){
  int f1, a1, v1;
  f1= 0;
  a1 = (f1*f1)*6;
  v1 = f1*f1*f1;

  int f2, a2, v2;
  f2 = 1;
  a2 = (f2*f2)*6;
  v2 = f2*f2*f2;

  int f3, a3, v3;
  f3 = 2;
  a3 = (f3*f3)*6;
  v3 = f3*f3*f3;
  
  int f4, a4, v4;
  f4 = 3;
  a4 = (f4*f4)*6;
  v4 = f4*f4*f4;
  
  int f5, a5, v5;
  f5 = 4;
  a5 = (f5*f5)*6;
  v5 = f5*f5*f5;

  cout << "\tFace\t Area\t Volume" << endl;
  
  cout << "\n\t"<<" "<< f1 << "\t\t" <<"   "<< a1 << "\t\t" << v1 << endl;

   cout << "\n\t"<<" "<< f2 << "\t\t" <<"   "<< a2 << "\t\t" << v2 << endl;
  
   cout << "\n\t"<<" "<< f3 << "\t\t" <<"   "<< a3 << "\t\t" << v3 << endl;

   cout << "\n\t"<<" "<< f4 << "\t\t" <<"   "<< a4 << "\t\t" << v4 << endl;

   cout << "\n\t"<<" "<< f5 << "\t\t" <<"   "<< a5 << "\t\t" << v5 << endl;

return 0;
}