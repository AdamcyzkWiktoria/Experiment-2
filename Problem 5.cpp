#include <iostream>

using namespace std;

int main ()
{	
	int counter,i;
	
	cout << "The program will count from 1 to 10,"
	     << "then it will add increments of 2 from 10 until 30"
	     << endl;
	cout << endl;
	
	counter = 1;
	while (counter <= 10)
	{
		cout << counter << ", ";
		counter++;
	}
	
	counter = 12;
	while (counter <= 30)
	{
		cout << counter << ", ";
		counter += 2;
	}
	
	return 0;
}
