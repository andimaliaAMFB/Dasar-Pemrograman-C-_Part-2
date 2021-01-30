//Program 5.8
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	double num1, num2, quotient;
	cout<<"Masukan Angka: ";
	cin>>num1;
	cout<<"Masukan Angka Lain: ";
	cin>>num2;
	
	if(num2==0)
	{
		cout<<"Pembagian oleh 0 tidak mungkin dilakukan\n";
		cout<<"Silahkan masukan Angka Lain,\n";
		cout<<"Angka Lain yang lebih besar daripada 0";
	}
	else
	{
		quotient=num1/num2;
		cout<<"The quotient of "<<num1<<" divided by "<<num2<<" is "<<quotient;
	}
	getch();
	return 0;
}
