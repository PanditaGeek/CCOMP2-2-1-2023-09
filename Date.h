#include <iostream>
#include <string>
using namespace std;

class Date
{
private:
	int dia, mes, a�o;
public:
	Date(int _d�a, int _mes, int _a�o) {
		dia = _d�a;
		mes = _mes;
		a�o = _a�o;

	}

	int getDia() {
		return dia;
	}

	void setDia(int _d�a) {
		dia = _d�a;
	}

	int getMes() {
		return mes;
	}

	void setMes(int _mes) {
		mes = _mes;
	}

	int getA�o() {
		return a�o;
	}

	void setA�o(int _a�o) {
		a�o = _a�o;
	}

	void Fechas() {
		cout << mes << " / " << dia << " / " << a�o << endl;
	}

	void mes() {
		if (mes > 12 or mes < 1) 
			mes = 1;
		
	}
};

