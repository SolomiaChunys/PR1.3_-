#include "Money.h"
#include <iostream>
#include <iomanip>
#include <sstream>

void Money::sethrn500(int value)
{
	if (value > 0)
		hrn500 = value;
	else
		hrn500 = 0;
}
void Money::sethrn200(int value)
{
	if (value > 0)
		hrn200 = value;
	else
		hrn200 = 0;
}
void Money::sethrn100(int value)
{
	if (value > 0)
		hrn100 = value;
	else
		hrn100 = 0;
}
void Money::sethrn50(int value)
{
	if (value > 0)
		hrn50 = value;
	else
		hrn50 = 0;
}
void Money::sethrn20(int value)
{
	if (value > 0)
		hrn20 = value;
	else
		hrn20 = 0;
}
void Money::sethrn10(int value)
{
	if (value > 0)
		hrn10 = value;
	else
		hrn10 = 0;
}
void Money::sethrn5(int value)
{
	if (value > 0)
		hrn5 = value;
	else
		hrn5 = 0;
}
void Money::sethrn2(int value)
{
	if (value > 0)
		hrn2 = value;
	else
		hrn2 = 0;
}
void Money::sethrn1(int value)
{
	if (value > 0)
		hrn1 = value;
	else
		hrn1 = 0;
}
void Money::setkop50(int value)
{
	if (value > 0)
		kop50 = value;
	else
		kop50 = 0;
}
void Money::setkop25(int value)
{
	if (value > 0)
		kop25 = value;
	else
		kop25 = 0;
}
void Money::setkop10(int value)
{
	if (value > 0)
		kop10 = value;
	else
		kop10 = 0;
}
void Money::setkop5(int value)
{
	if (value > 0)
		kop5 = value;
	else
		kop5 = 0;
}
void Money::setkop2(int value)
{
	if (value > 0)
		kop2 = value;
	else
		kop2 = 0;
}
void Money::setkop1(int value)
{
	if (value > 0)
		kop1 = value;
	else
		kop1 = 0;
}

bool Money::Init(int hrn_500, int hrn_200, int hrn_100, int hrn_50, int hrn_20, int hrn_10, int hrn_5, int hrn_2, int hrn_1, int kop_50, int kop_25, int kop_10, int kop_5, int kop_2, int kop_1)
{
	if (hrn_500 > 0)
	{
		sethrn500(hrn_500);
		return true;
	}
	if (hrn_200 > 0)
	{
		sethrn200(hrn_200);
		return true;
	}
	if (hrn_100 > 0)
	{
		sethrn100(hrn_100);
		return true;
	}
	if (hrn_50 > 0)
	{
		sethrn50(hrn_50);
		return true;
	}
	if (hrn_20 > 0)
	{
		sethrn20(hrn_20);
		return true;
	}
	if (hrn_10 > 0)
	{
		sethrn10(hrn_10);
		return true;
	}
	if (hrn_5 > 0)
	{
		sethrn5(hrn_5);
		return true;
	}
	if (hrn_2 > 0)
	{
		sethrn2(hrn_2);
		return true;
	}
	if (hrn_1 > 0)
	{
		sethrn1(hrn_1);
		return true;
	}
	if (kop_50 > 0)
	{
		setkop50(kop_50);
		return true;
	}
	if (kop_25 > 0)
	{
		setkop25(kop_25);
		return true;
	}
	if (kop_10 > 0)
	{
		setkop10(kop_10);
		return true;
	}
	if (kop_5 > 0)
	{
		setkop5(kop_5);
		return true;
	}
	if (kop_2 > 0)
	{
		setkop2(kop_2);
		return true;
	}
	if (kop_1 > 0)
	{
		setkop1(kop_1);
		return true;
	}
	else
		return false;
}

double Money::firstsum(Money& x)
{
	return (x.hrn500 * 500. + x.hrn200 * 200. + x.hrn100 * 100. + x.hrn50 * 50. + x.hrn20 * 20. + x.hrn10 * 10. + x.hrn5 * 5. + x.hrn2 * 2. + x.hrn1 * 1. + x.kop50 * 0.50 + x.kop25 * 0.25 + x.kop10 * 0.1 + x.kop5 * 0.05 + x.kop2 * 0.02 + x.kop1 * 0.01);
}

double Money::secondsum(Money& y)
{
	return (y.hrn500 * 500. + y.hrn200 * 200. + y.hrn100 * 100. + y.hrn50 * 50. + y.hrn20 * 20. + y.hrn10 * 10. + y.hrn5 * 5. + y.hrn2 * 2. + y.hrn1 * 1. + y.kop50 * 0.50 + y.kop25 * 0.25 + y.kop10 * 0.1 + y.kop5 * 0.05 + y.kop2 * 0.02 + y.kop1 * 0.01);
}
void Money::Read(Money& x, Money& y)
{
	do
	{
		cout << "firstsum" << endl;
		cout << " 500  -  "; cin >> x.hrn500;
		cout << " 200  -  "; cin >> x.hrn200;
		cout << " 100  -  "; cin >> x.hrn100;
		cout << " 50   -  "; cin >> x.hrn50;
		cout << " 20   -  "; cin >> x.hrn20;
		cout << " 10   -  "; cin >> x.hrn10;
		cout << " 5    -  "; cin >> x.hrn5;
		cout << " 2    -  "; cin >> x.hrn2;
		cout << " 1    -  "; cin >> x.hrn1;
		cout << " 0.50 -  "; cin >> x.kop50;
		cout << " 0.25 -  "; cin >> x.kop25;
		cout << " 0.10 -  "; cin >> x.kop10;
		cout << " 0.05 -  "; cin >> x.kop5;
		cout << " 0.02 -  "; cin >> x.kop2;
		cout << " 0.01 -  "; cin >> x.kop1;
		cout << endl;
	} while (!Init(x.hrn500, x.hrn200, x.hrn100, x.hrn50, x.hrn20, x.hrn10, x.hrn5, x.hrn2, x.hrn1, x.kop50, x.kop25, x.kop10, x.kop5, x.kop2, x.kop1));

	do
	{
		cout << "secondsum" << endl;
		cout << " 500  -  "; cin >> y.hrn500;
		cout << " 200  -  "; cin >> y.hrn200;
		cout << " 100  -  "; cin >> y.hrn100;
		cout << " 50   -  "; cin >> y.hrn50;
		cout << " 20   -  "; cin >> y.hrn20;
		cout << " 10   -  "; cin >> y.hrn10;
		cout << " 5    -  "; cin >> y.hrn5;
		cout << " 2    -  "; cin >> y.hrn2;
		cout << " 1    -  "; cin >> y.hrn1;
		cout << " 0.50 -  "; cin >> y.kop50;
		cout << " 0.25 -  "; cin >> y.kop25;
		cout << " 0.10 -  "; cin >> y.kop10;
		cout << " 0.05 -  "; cin >> y.kop5;
		cout << " 0.02 -  "; cin >> y.kop2;
		cout << " 0.01 -  "; cin >> y.kop1;
		cout << endl;
	} while (!Init(y.hrn500, y.hrn200, y.hrn100, y.hrn50, y.hrn20, y.hrn10, y.hrn5, y.hrn2, y.hrn1, y.kop50, y.kop25, y.kop10, y.kop5, y.kop2, y.kop1));
}

void Money::Display(Money& x, Money& y) const
{
	Money n;
	cout << "firstsum" << endl;
	cout << " 500   - " << x.hrn500 * 500. << endl;
	cout << " 200   - " << x.hrn200 * 200. << endl;
	cout << " 100   - " << x.hrn100 * 100. << endl;
	cout << " 50    - " << x.hrn50 * 50. << endl;
	cout << " 20    - " << x.hrn20 * 20. << endl;
	cout << " 10    - " << x.hrn10 * 10. << endl;
	cout << " 5     - " << x.hrn5 * 5. << endl;
	cout << " 2     - " << x.hrn2 * 2. << endl;
	cout << " 1     - " << x.hrn1 * 1. << endl;
	cout << " 0.50  - " << x.kop50 * 0.5 << endl;
	cout << " 0.25  - " << x.kop25 * 0.25 << endl;
	cout << " 0.10  - " << x.kop10 * 0.1 << endl;
	cout << " 0.05  - " << x.kop5 * 0.05 << endl;
	cout << " 0.02  - " << x.kop2 * 0.02 << endl;
	cout << " 0.01  - " << x.kop1 * 0.01 << endl;
	cout << "RESULT-" << n.firstsum(x) << endl;
	cout << endl;
	cout << "secondsum" << endl;
	cout << " 500   - " << y.hrn500 * 500. << endl;
	cout << " 200   - " << y.hrn200 * 200. << endl;
	cout << " 100   - " << y.hrn100 * 100. << endl;
	cout << " 50    - " << y.hrn50 * 50. << endl;
	cout << " 20    - " << y.hrn20 * 20. << endl;
	cout << " 10    - " << y.hrn10 * 10. << endl;
	cout << " 5     - " << y.hrn5 * 5. << endl;
	cout << " 2     - " << y.hrn2 * 2. << endl;
	cout << " 1     - " << y.hrn1 * 1. << endl;
	cout << " 0.50  - " << y.kop50 * 0.5 << endl;
	cout << " 0.25  - " << y.kop50 * 0.25 << endl;
	cout << " 0.10  - " << y.kop10 * 0.1 << endl;
	cout << " 0.05  - " << y.kop5 * 0.05 << endl;
	cout << " 0.02  - " << y.kop2 * 0.02 << endl;
	cout << " 0.01  - " << y.kop1 * 0.01 << endl;
	cout << "RESULT-" << n.secondsum(y) << endl;
	cout << endl;
}

void Money::Number1(Money& x, Money& y) const
{
	Money n;
	cout << "Dilenia = " << setprecision(3) << n.firstsum(x) / n.secondsum(y) << endl;
}

void Money::Number2(Money& x, Money& y) const
{
	Money n;
	double N;
	cout << "DROBnumber : "; cin >> N;
	double d = n.firstsum(x) + n.secondsum(y);
	d /= N;
	cout << "AMOUNT / N : " << d << endl;
}

void Money::Number3(Money& x, Money& y) const
{
	Money n;
	if (n.firstsum(x) > n.secondsum(y))
	{
		cout << "AMOUNT1 > AMOUNT2" << endl;
	}
	if (n.firstsum(x) < n.secondsum(y))
	{
		cout << "AMOUNT1 < AMOUNT2" << endl;
	}
	if (n.firstsum(x) == n.secondsum(y))
	{
		cout << "AMOUNT1 = AMOUNT2" << endl;
	}
}

string Money::ToString(Money& x, Money& y) const
{
	Money n;
	double result = n.firstsum(x) + n.secondsum(y);
	stringstream sstr;
	sstr << result << "hrn";

	return sstr.str();
}