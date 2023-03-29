#include <iostream>
using namespace std;

int main(){

float kilos, metros;
cout<< "Ingresar su peso en kilos: "<<endl;
cin >> kilos;

cout << "Ingresar su altura en metros: " << endl;
cin >> metros;

float BMI = kilos/(metros*metros);
cout << "Su BMI es: " << BMI << endl;

cout << "\nBMI VALUES:\n" << endl;
cout << "Bajo de peso: " << "Menos de 18.5"<< endl;
cout << "Normal: " << "Entre 18.5 y 24.9" << endl;
cout << "Sobrepeso: " << "Entre 25 y 29.9" << endl;
cout << "Obeso: " << "Más de 30" << endl;

return 0;
}