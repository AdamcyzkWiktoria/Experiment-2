#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main ()
{
	int x,y;
	double V;
	
	const double z = 2.5;
	
	cout << "Enter integer for x: "; cin >> x;
	cout << "Enter integer for y: "; cin >> y;
	
	if (x == 1 && y == ((5 > y) > 1))
	{
		V = x * y * z;
		cout << "V = " << setprecision(2) << V << endl;
	}
	else if (x == 1 && y >= 5)
	{
		V = x + y / z;
		cout << "V = " << setprecision(2) << V << endl;
	}
	else if (x == 2 && y <=5)
	{
		fabs ((x - y) / z);
		cout << "V = " << setprecision(2) << V << endl;
	}
	else if (x == 2 && y > 5)
	{
		V = x - sqrt(y + z);
		cout << "V = " << setprecision(2) << V << endl;
	}
	else
	{
		V = x + y + z;
		cout << "V = " << setprecision(2) << V << endl;
	}
	
	return 0;
}
