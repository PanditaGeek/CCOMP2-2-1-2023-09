#include <iostream>
using namespace std;

int main(){
    float gasto1, gasto2, gasto3, gasto4, gasto5;

    cout << "Ingrese los kilometros totales que ha recorrido en el día: ";
    cin >> gasto1;
    cout << "Ingrese el precio del galon de gasolina: ";
    cin >> gasto2;
    cout << "Ingrese el promedio de kilometros que se pueden recorrer por cada galon: ";
    cin >> gasto3;
    cout << "Ingrese el costo del estacionamiento por dia: ";
    cin >> gasto4;
    cout << "Ingrese el monto de peajes por día: ";
    cin >> gasto5;

    cout << gasto1 / gasto3 * gasto2 + gasto4 + gasto5 << endl;

    return 0;

}