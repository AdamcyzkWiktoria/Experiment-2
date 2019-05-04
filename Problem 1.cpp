#include <iostream>

using namespace std;

int main ()
{
	char package;
	int addHours,totalFee;
	
	const int package_A = 995;
	const int package_B = 1495;
	const int package_C = 1995;
	
	cout << "Enter a package letter:\n";
	cout << "1. For Package A: Php995/mo of 10 hours, additional hours is Php20/hr\n";
	cout << "2. For Package B: Php1495/mo of 20 hours, additional hours is Php10/hr\n";
	cout << "3. For Package C: Php 1995/mo of unlimited access\n";
	cin >> package;
	cout << "Enter additional hours used (if applicable):";
	cin >> addHours;
	
	switch (package)
	{
		case 'A':
			cout << "Package A is Php995\n";
			totalFee = package_A + (addHours * 20);
			cout << "Total Fee:" << totalFee;
			break;
		case 'B':
			cout << "Package B is Php1495\n";
			totalFee = package_B + (addHours * 10);
			cout << "Total Fee:" << totalFee;
			break;
		case 'C':
			cout << "Package C is Php1995";
			cout << "Total Fee: Php1995" << endl;
			break;
		default:
		    cout << "Your choice is invalid.\n";
	}
	
	return 0;
}
