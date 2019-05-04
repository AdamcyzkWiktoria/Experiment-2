#include <iostream>

using namespace std;

int main ()
{
	int num;
	
	cout << "Enter a positive integer: "; cin >> num;
	
	if (num >= 0)
	{
		for (int i = 1; i <= 10; ++i)
		{
           cout << num << " * " << i << " = " << num * i << endl;
        }
	}
	else
	{
		cout << "Try again and Enter a postive integer" << endl;
	}
	return 0;
}
