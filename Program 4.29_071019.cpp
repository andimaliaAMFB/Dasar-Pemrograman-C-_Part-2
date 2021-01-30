//Program 4.29
#include<iostream>
#include<conio.h>
using namespace std;
int main(void)
{
	int jumlah=0;
	int bilangan;
	do
	{
		bilangan++;
		if(bilangan==10||bilangan==11)
		continue;
		jumlah+=bilangan;
	}
	while(bilangan<20);
	cout<<"Deret Bilangan: 1+2+...+9+12+13+...+"<<bilangan<<endl;
	cout<<"Jumlah Deret Bilangan= "<<jumlah;
	getch();
	return 0;
}
