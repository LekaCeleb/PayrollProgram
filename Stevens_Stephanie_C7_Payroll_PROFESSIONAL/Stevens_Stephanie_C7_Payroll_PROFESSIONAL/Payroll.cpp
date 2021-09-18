/*payroll.cpp
class definition
*/

#include "payroll.h"
#include <iostream>
using namespace std;



void Payroll::setHours(double h)
{
	hours = h;
}

void Payroll::setRate(double r)
{
	rate = r;
}

double Payroll::getGross()
{
	gross = (rate * hours);

	return gross;
}

