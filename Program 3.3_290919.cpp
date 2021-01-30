//Program 3.3
#include<conio.h>
#include<iostream>
using namespace std;

void tampil(void);

main()
{
	auto int i=11;
	tampil();
	cout<<"\ni dalam main()= "<<i;
	getch();
	return 0;	
}

void tampil(void)
{
	auto int i=10;
	cout<<"i dalam tampil()= "<<i;
}
