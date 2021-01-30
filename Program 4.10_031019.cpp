//Program 4.10
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<windows.h>
using namespace std;
int main(void)
{
	int i=0;
	for(i=0;i<256;i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),i);
		cout<<"Warna atribut	";
		if(i==20)
		break;
	}
	getch();
	return 0;
}
