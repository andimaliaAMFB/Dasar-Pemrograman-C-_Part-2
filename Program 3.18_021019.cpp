//Program 3.18
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	float a,b,c,d,e;
	a=100.0;
	b=3.0;
	c=a/b;
	d=100%3;
	e=a*b-b+100%100/b;
	cout<<"Operasi Aritmatika pada Bilangan Real\n";
	cout<<"C= "<<a<<"/"<<b;
	cout<<"\n = "<<c;
	cout<<"\nD= "<<a<<" MOD"<<b;
	cout<<"\n = "<<d;
	cout<<"\nE= "<<a<<" x "<<b<<" -"<<b<<" +"<<a<<" MOD "<<a<<"/"<<b;
	cout<<"\n = "<<e;
	getch();
	return 0;
}
