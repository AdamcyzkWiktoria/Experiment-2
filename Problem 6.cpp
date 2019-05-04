#include <iostream>

using namespace std;

int main()
{
    int previous1,previous2,current;
    previous1 = 0;
    previous2 = 1;
    current = 1;
 
    cout << "The Fibonacci Series is as follows : " << endl 
	     << previous1 << " " 
		 << previous2 << " ";

    while (previous1 + previous2 <= 10946)
    {
        current = previous1 + previous2;
        previous1 = previous2;
        previous2 = current;
        cout << current << " ";
    }
 
    return 0;
}
