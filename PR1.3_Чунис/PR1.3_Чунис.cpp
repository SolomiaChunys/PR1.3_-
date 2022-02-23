#include <iostream>
#include <iomanip>
#include "Money.h"

using namespace std;

int main()
{
	Money x, y, n;
	n.Read(x, y);
	n.Display(x, y);
	cout << "Amount = " << n.ToString(x, y) << endl;
	n.Number1(x, y);
	n.Number2(x, y);
	n.Number3(x, y);

	return 0;
}