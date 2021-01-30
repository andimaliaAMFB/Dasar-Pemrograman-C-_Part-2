//Program 4.30
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
main()
{
	int a,b;
	char lagi;
	atas:
		cout<<"\nMasukan Bilangan= ";
		cin>>a;
		b=a%2;
		cout<<"Nilai"<<a<<" %2 adalah= "<<b;
		cout<<"\n\ningin Hitung lagi [Y/T]: ";
		lagi=getche();
		if(lagi=='Y'||lagi=='y')
		goto atas;
		getch();
		return 0;
}
