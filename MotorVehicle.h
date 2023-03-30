#include <iostream>
#include <string>
using namespace std;

class MotorVehicle {
private:
    string make;
    string fuelType;
    string yearOfManufacture;
    string color;
    int engineCapacity;

public:
    MotorVehicle(string _make, string _fuelType, string _yearOfManufacture, string _color, int _engineCapacity) {
        make = _make;
        fuelType = _fuelType;
        yearOfManufacture = _yearOfManufacture;
        color = _color;
        engineCapacity = _engineCapacity;
    }

    string getMake() {
        return make;
    }

    void setMake(string _make) {
        make = _make;
    }

    string getFuelType() {
        return fuelType;
    }

    void setFuelType(string _fuelType) {
        fuelType = _fuelType;
    }

    string getYearOfManufacture() {
        return yearOfManufacture;
    }

    void setYearOfManufacture(string _yearOfManufacture) {
        yearOfManufacture = _yearOfManufacture;
    }

    string getColor() {
        return color;
    }

    void setColor(string _color) {
        color = _color;
    }

    int getEngineCapacity() {
        return engineCapacity;
    }

    void setEngineCapacity(int _engineCapacity) {
        engineCapacity = _engineCapacity;
    }

    void info_carro() {
        cout << "Marca: " << make << endl;
        cout << "Tipo de gasolina: " << fuelType << endl;
        cout << "Año: " << yearOfManufacture << endl;
        cout << "Color: " << color << endl;
        cout << "Capacidad del motor: " << engineCapacity << endl;
    }
};

