//Program 3.16
#include<conio.h>
#include<iostream>
using namespace std;

main()
{
	int x=67,y;   /*var pointer menujuk ke data yang bertipe int*/
	int*px;       //px diisi dengan alamat dari var x//
	px=&x;        //y diisi dengan nilai yang ditunjukan oleh pox//
	y=*px;
	cout<<"Alamat x                   = "<<&x;
	cout<<"\nIsi px                     = "<<px;
	cout<<"\nIsi x                      = "<<x;
	cout<<"\nNilai yang ditunjuk oleh px= "<<*px;
	cout<<"\nNilai y                    = "<<y;
	getch();
	return 0;
}
