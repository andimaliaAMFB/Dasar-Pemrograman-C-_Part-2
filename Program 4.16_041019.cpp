//Program 4.16
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char huruf='A';
	while(huruf<='Z')
	cout<<"Huruf Abjad= "<<huruf++<<"\n";
	cout<<"\n";
	getch();
	huruf='A';
	while(huruf<='Z')
	{
		cout<<"Huruf Abjad= "<<huruf<<"\n";
		huruf+=13;
		cout<<"\n";
	}
	getch();
	huruf='z';
	while(huruf>='a')
	cout<<"Huruf Abjad= "<<huruf--<<"\n";
	cout<<"\n";
	getch();
	huruf='z';
	while(huruf>='a')
	{
		cout<<"Huruf Abjad= "<<huruf<<"\n";
		huruf-=8;
		cout<<"\n";
	}
	getch();
	return 0;
}
