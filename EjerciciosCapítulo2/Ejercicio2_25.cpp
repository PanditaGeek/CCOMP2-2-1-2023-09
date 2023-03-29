#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Ingresa 3 números: ";
    cin >> num1 >> num2 >> num3;
    if (num3 % num1 == 0  && num3 % num2 == 0 )
        cout << num1 << " y " << num2 << " sí son factores del tercero " << endl;
    else 
        cout << num1 << " y " << num2 << " no son factores del tercero " << endl;
    
    return 0;
}