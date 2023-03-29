#include <iostream>
using namespace std;

int main(){
    int num;
   cout << "Ingrese un número de 4 digitos: ";
   cin >> num;

  int digt1, digt2, digt3;
  digt1 = (num/1000) * 1000;
  digt2 = (num/100) * 100;
  digt3 = (num/10) * 10;

   cout << num -digt3 << "  " << (digt3 - digt2) / 10 << "  " << (digt2 -digt1) / 100 << "  " <<digt1/1000 << endl;

    return 0;
}