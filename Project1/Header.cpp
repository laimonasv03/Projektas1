#include "Header.h"

studentas ivesk() {
	studentas temp;
	cout << "Iveskite varda: ";
	cin >> temp.var;
	return temp;
}

void ivesk2(studentas* Temp) {
	cout << "Iveskite varda: ";
	cin >> Temp->var;
}

void ivesk3(studentas& Temp) {
	cout << "Ivesk varda: ";
	cin >> Temp.var;
}
