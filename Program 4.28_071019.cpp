//Program 4.28
#include<iostream>
#include<conio.h>
using namespace std;
int main(void)
{
	int jumlah=0;
	int bilangan;
	while(bilangan<20)
	{
		bilangan++;
		if(bilangan==10||bilangan==11)
		continue;
		jumlah+=bilangan;
	}
	cout<<"Deret Bilangan: 1+2+...+9+12+13+...+"<<bilangan<<endl;
	cout<<"Jumlah Deret Bilangan= "<<jumlah;
	getch();
	return 0;
}
