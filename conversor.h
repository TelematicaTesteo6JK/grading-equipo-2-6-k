#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>

using namespace std;

string conversion(float calificacion)
{
	string res=" ";
	if (calificacion>=83 && calificacion<=100)
		res = "HD";
		else if (calificacion == 100)
		res = "D";
	else if (calificacion>=73 && calificacion<=82.99)
		res = "D";
		else if (calificacion == 82.99)
		res = "D";
	else if (calificacion>=63 && calificacion<=72.99)
		res = "C";
		else if (calificacion == 72.99)
		res = "C";
	else if (calificacion>=50 && calificacion<=62.99)
		res = "P";
		else if (calificacion == 62.99)
		res = "P";
	else if (calificacion>=0 && calificacion <= 49.99)
		res = "N";
		else if (calificacion == 49.99)
		res = "N";
	else
		res = "Invalida";

	return res;
}
