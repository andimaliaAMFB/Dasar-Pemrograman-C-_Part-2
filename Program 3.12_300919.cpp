//Program 3.12
#include<conio.h>
#include<iostream>
using namespace std;

int main()
{
	double regHours=40.0,
	otHours=10,
	regPayRate=18.25,
	otPayRate=27.78,
	regWages,
	otWages,
	totalWages;
	regWages=regPayRate*regHours;
	otWages=otPayRate*otHours;
	totalWages=regWages+otWages;
	cout<<"Upah untuk minggu ini adalah Rp."<<totalWages;
	getch();
	return 0;
}
