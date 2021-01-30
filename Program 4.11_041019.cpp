//Program 4.11
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
using namespace std;
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

main()
{
	int n=0;
	for(;;)
	{
		++n;
		SetConsoleTextAttribute(console,n+((n+1)<4));;
		cout<<"warna ke "<<n+(n+1)<<" \n";
		if(n==20)
		break;
	}
	getch();
	return 0;
}
