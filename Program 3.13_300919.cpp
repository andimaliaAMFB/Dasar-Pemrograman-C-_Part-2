//Program 3.13
#include<conio.h>
#include<iostream>
using namespace std;

main()
{
	int hitung=0,loop;
	loop=++hitung;
	cout<<"Loop = "<<loop<<" Hitung= "<<hitung;
	loop=hitung++;
	cout<<"\nLoop = "<<loop<<" Hitung= "<<hitung;
	getch();
	
}
