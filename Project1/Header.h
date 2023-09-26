#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

struct studentas {
	string var, pav;
	vector <int> paz;
	float egz;
};

studentas ivesk(); 
void ivesk2(studentas *Temp); // pointeriai(rodykles)
void ivesk3(studentas &Temp); //nuorodos