//Program 4.27
#include<iostream>
#include<conio.h>
using namespace std;
int main(void)
{
	int jumlah=0;
	int bilangan;
	for(bilangan=1;bilangan<=20;bilangan++)
	{
		if(bilangan==10||bilangan==11)
		continue;
		jumlah+=bilangan;
	}
	cout<<"Deret Bilangan: 1+2+...+9+12+13+...+"<<bilangan-1<<endl;
	cout<<"Jumlah Deret Bilangan= "<<jumlah;
	getch();
	return 0;
}
