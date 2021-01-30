//Program 5.1
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	bool nilaiBetul,nilaiSalah;
	int x=5,y=10;
	nilaiBetul=x<y;
	nilaiSalah=y==x;
	
	cout<<"Benar adalah "<<nilaiBetul<<endl;
	cout<<"Salah adalah "<<nilaiSalah<<endl;
	getch();
	return 0;
}
