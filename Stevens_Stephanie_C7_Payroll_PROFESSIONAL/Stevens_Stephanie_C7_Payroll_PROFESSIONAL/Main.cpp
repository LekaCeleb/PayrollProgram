/*Main.cpp
3 files in thes project: 2 source, 1 header
class: payroll*/

#include "payroll.h"
#include <iostream>
using namespace std;



int main()
{
	Payroll pRoll1, pRoll2;

	pRoll1.setHours(40);
	pRoll1.setRate(10);
	cout << "Ojct1: Gross Pay: $ " << pRoll1.getGross() << endl << endl;

	pRoll2.setHours(80);
	pRoll2.setRate(25);
	cout << "Ojct2: Gross Pay: $ " << pRoll2.getGross() << endl << endl;

	system("pause");
	return 0;
}

