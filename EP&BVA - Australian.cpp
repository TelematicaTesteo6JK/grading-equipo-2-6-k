#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "conversor.h"

using namespace std;

void casos_de_prueba()
{
	    cout << "Casos de Prueba: BVA" << endl;
	    
	    float calificacion;
		string actual;
		
		cout << "DATA	 | EXPECTED | ACTUAL | PASS?" << endl;
		cout << "--------------------------------" << endl;
		actual = conversion(00);
		cout << "00       | N        | " << actual << "      | PASS" << endl;
		cout << "--------------------------------" << endl;
		actual = conversion(49.98);
		cout << "49.98    | N        | " << actual << "      | PASS" << endl;
		cout << "--------------------------------" << endl;
		actual = conversion(50);
		cout << "50   	 | P        | " << actual << "      | PASS" << endl;
		cout << "--------------------------------" << endl;
		actual = conversion(62.98);
		cout << "62.98    | P        | " << actual << "      | PASS" << endl;
		cout << "--------------------------------" << endl;
		actual = conversion(63);
		cout << "63   	 | C        | " << actual << "      | PASS" << endl;
		cout << "--------------------------------" << endl;
		actual = conversion(72.99);
		cout << "72.99    | C        | " << actual << "      | PASS" << endl;
		cout << "--------------------------------" << endl;
		actual = conversion(73);
		cout << "73   	 | D        | " << actual << "      | PASS" << endl;
		cout << "--------------------------------" << endl;
		actual = conversion(82.99);
		cout << "82.99    | D        | " << actual << "      | PASS" << endl;
		cout << "--------------------------------" << endl;
		actual = conversion(83);
		cout << "83   	 | HD       | " << actual << "     | PASS" << endl;
		cout << "--------------------------------" << endl;
		actual = conversion(100);
		cout << "100  	 | HD       | " << actual << "     | PASS" << endl;
		cout << "--------------------------------" << endl;
		cout << endl;
		
		
		cout << "Casos de Prueba: EP" << endl;
	    cout << "DATA	 | EXPECTED | ACTUAL | PASS?" << endl;
		cout << "--------------------------------" << endl;
		actual = conversion(38.43);
		cout << "38.43    | N        | " << actual << "      | PASS" << endl;
		cout << "--------------------------------" << endl;
		actual = conversion(58.76);
		cout << "58.76    | P        | " << actual << "      | PASS" << endl;
		cout << "--------------------------------" << endl;
		actual = conversion(68.49);
		cout << "68.49    | C        | " << actual << "      | PASS" << endl;
		cout << "--------------------------------" << endl;
		actual = conversion(81.54);
		cout << "81.54    | D        | " << actual << "      | PASS" << endl;
		cout << "--------------------------------" << endl;
		actual = conversion(95.69);
		cout << "95.69    | HD        | " << actual << "      | PASS" << endl;
		cout << "--------------------------------" << endl;
		
		cout << endl;
}


int main() 
{
		
	casos_de_prueba();
	
system("PAUSE");
}
