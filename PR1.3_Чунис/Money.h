#pragma once
#include <iostream>

using namespace std;

class Money
{
private:
	int hrn500, hrn200, hrn100, hrn50, hrn20, hrn10, hrn5, hrn2, hrn1, kop50, kop25, kop10, kop5, kop2, kop1;
public:
	int gethrn500() const { return hrn500; }
	int gethrn200() const { return hrn200; }
	int gethrn100() const { return hrn100; }
	int gethrn50() const { return hrn50; }
	int gethrn20() const { return hrn20; }
	int gethrn10() const { return hrn10; }
	int gethrn5() const { return hrn5; }
	int gethrn2() const { return hrn2; }
	int gethrn1() const { return hrn1; }
	int getkop50() const { return kop50; }
	int getkop25() const { return kop25; }
	int getkop10() const { return kop10; }
	int getkop5() const { return kop5; }
	int getkop2() const { return kop2; }
	int getkop1() const { return kop1; }

	void sethrn500(int value);
	void sethrn200(int value);
	void sethrn100(int value);
	void sethrn50(int value);
	void sethrn20(int value);
	void sethrn10(int value);
	void sethrn5(int value);
	void sethrn2(int value);
	void sethrn1(int value);
	void setkop50(int value);
	void setkop25(int value);
	void setkop10(int value);
	void setkop5(int value);
	void setkop2(int value);
	void setkop1(int value);

	void Read(Money& x, Money& y);
	bool Init(int hrn_500, int hrn_200, int hrn_100, int hrn_50, int hrn_20, int hrn_10, int hrn_5, int hrn_2, int hrn_1, int kop_50, int kop_25, int kop_10, int kop_5, int kop_2, int kop_1);
	void Display(Money& x, Money& y) const;
	string ToString(Money& x, Money& y) const;
	double firstsum(Money& x);
	double secondsum(Money& y);
	void Number1(Money& x, Money& y) const;
	void Number2(Money& x, Money& y) const;
	void Number3(Money& x, Money& y) const;
};

