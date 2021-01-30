//5.19
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
main()
{
	const double PAY_RATE = 50.0;
	double hours, charges;
	cout << "Berapa jam anda bekerja? ";
	cin >> hours;
	hours = hours < 5 ? 5 : hours; // Conditional operator
	charges = PAY_RATE * hours;
	cout << fixed << showpoint << setprecision(2);
	cout << "Besar gaji anda adalah $" << charges << endl;
	getch();
	return 0;
}
