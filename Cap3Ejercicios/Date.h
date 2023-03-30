#include <iostream>
#include <string>
using namespace std;

class Date
{
private:
	int dia, mes, año;
public:
	Date(int _día, int _mes, int _año) {
		dia = _día;
		mes = _mes;
		año = _año;

	}

	int getDia() {
		return dia;
	}

	void setDia(int _día) {
		dia = _día;
	}

	int getMes() {
		return mes;
	}

	void setMes(int _mes) {
		mes = _mes;
	}

	int getAño() {
		return año;
	}

	void setAño(int _año) {
		año = _año;
	}

	void Fechas() {
		cout << mes << " / " << dia << " / " << año << endl;
	}

	void mes() {
		if (mes > 12 or mes < 1) 
			mes = 1;
		
	}
};

