//Program 4.24
#include<iostream>
#include<conio.h>
using namespace std;
int main(void)
{
	int jumlah=0;
	int bilangan;
	for (bilangan=0;bilangan<20;bilangan++)
	{
		jumlah+=bilangan;
		if(jumlah>=100)
		break;
	}
	cout<<"Deret Bilangan: 1+2+...+"<<bilangan<<endl;
	cout<<"Jumlah Deret Bilangan= "<<jumlah;
	getch();
	return 0;
}
