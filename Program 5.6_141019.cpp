//Program 5.6
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int number;
	cout<<"Masuka bilangan bulat dan saya akan memilahnya dengan IF\n";
	cout<<"adalah ganjil atau genap ";
	cin>>number;
	if(number%2==0)
	{
		cout<<number<<" adalah genap";
	}
	else
	{
		cout<<number<<" adalah ganjil";
	}
	getch();
	return 0;
}
