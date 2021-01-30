//Program 5.4
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int usia;
	cout<<"Berapa usia Anda: ";
	cin>>usia;
	if(usia<17)
	{
		cout<<"Anda tidak boleh menonton bioskop";
	}
	else
	{
		cout<<"Anda boleh menonton bioskop";
	}
	getch();
	return 0;
}
