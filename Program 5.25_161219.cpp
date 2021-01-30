//5.25
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int Bil;
	cout << "masukan bilangan : ";
	cin >> Bil;
	if (Bil % 2 == 0)
	{
		cout << "bilangan genap";
	}
	else
	{
		cout << "bilangan ganjil";
	}
	getch();
	return 0;
}
