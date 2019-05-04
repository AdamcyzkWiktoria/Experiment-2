#include <iostream>

using namespace std;

int main ()
{
	int gallons,unpaidBalance;
    double totalFee,fee;
	
	const int water_Demand_Fee = 35;
	const double rate_Per_Gallon = 1.10;
	const int late_Charge = 20;
	
	cout << "Input gallons used: "; cin >> gallons;
	cout << "Input balance remaining: "; cin >> unpaidBalance;
	
	fee = (gallons * rate_Per_Gallon) + water_Demand_Fee;
	
	if (unpaidBalance > 0)
	{
		totalFee = unpaidBalance + fee + late_Charge;
		
		cout << "Total Fee:" << totalFee;
	}
	else
	{
		cout << "Total Fee:" << fee;
	}
	
	return 0;
	
}
