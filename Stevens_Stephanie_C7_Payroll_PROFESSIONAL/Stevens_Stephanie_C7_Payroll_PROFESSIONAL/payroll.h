//#pragma once
/*payroll.h
class declarations
*/


#ifndef payroll_h
#define payroll_h


//Payroll::Payroll(double h = 30, double r = 10)
//{
//	Hours = h;
//	rate = r;
//}


class Payroll
{
private:
	double hours, rate, gross;

public:
	void setHours(double);
	void setRate(double);

	double getGross();

};

#endif // !