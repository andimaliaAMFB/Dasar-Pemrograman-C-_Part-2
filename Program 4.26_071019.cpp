//Program 4.26
#include<iostream>
#include<conio.h>
using namespace std;
int main(void)
{
	int jumlah=0;
	int bilangan=0;
	do
	{
	bilangan++;
	jumlah+=bilangan;
	if(jumlah>=100)
	break;
	}
	while(bilangan<20);
	cout<<"Deret Bilangan: 1+2+..."<<bilangan<<endl;
	cout<<"Jumlah Deret Bilangan= "<<jumlah;
	getch();
	return 0;
}
