//Program 3.10
#include<conio.h>
#include<iostream>
using namespace std;

main()
{
	float floatmin=3.4E-38,floatmak=3.4E+38;
	double doublemin=1.7E-308,doublemak=1.7E+308;
	long double ldoublemin=3.4E-4932,ldoublemak=1.1E+4932;
	cout<<"Range float       :"<<floatmin<<" s/d "<<floatmak;
	cout<<"\nRange double      :"<<doublemin<<" s/d "<<doublemak;
	cout<<"\nRange long double :"<<ldoublemin<<" s/d "<<ldoublemak;
	getch();
	return 0;
}
