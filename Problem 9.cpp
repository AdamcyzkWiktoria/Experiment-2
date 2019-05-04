#include <iostream>

using namespace std;

int main ()
{
	int row,col;
	
	cout << "Enter desired number of rows: "; cin >> row;
	cout << "Enter desired number of columns: "; cin >> col;
	
	for (int a = 0; a <= row; ++a)
	{
		for (int b = 0; b <= col; ++b)
		{	
			cout << "* ";
		}
		
		cout << endl;
	}
	
	return 0;
}
