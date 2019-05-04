#include <iostream>
using namespace std;

int main()
{
    int num,total;

    cout << "Enter a positive integer: ";
    cin >> num;

    if (num >= 0)
    {
        for (int i = 1; i <= num; ++i) 
	    {
           total += i;
        }
    }
    else
    {
    	cout << "Try again and enter a positive integer" << endl;
	}

    cout << "Sum = " << total << endl;
    return 0;
}
