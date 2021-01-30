//Program 3.14
#include<conio.h>
#include<iostream>
using namespace std;

main()
{
	int hitung=10,loop;
	loop=--hitung;
	cout<<"Loop= "<<loop<<", Hitung= "<<hitung;
	loop=hitung--;
	cout<<"\nLoop= "<<loop<<", Hitung= "<<hitung;
	getch();
	return 0;
}
