#include <iostream>
using namespace std;

int main() 
{   
    int radio;
    float pi = 3.14159;
    cout << "Ingrese el radio del círculo: " << endl;
    cin >> radio;

    int diametro = radio * 2;
    cout << "El diametro es: " << diametro << endl;

    float circunferencia = pi * diametro;
    cout << "La circunferencia es: " << circunferencia << endl;

    float area = (radio*radio)*pi;
  cout << "El area es: " << area << endl;


    return 0;
}

