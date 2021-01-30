//Program 4.9
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char huruf;
	for(huruf='A';huruf<='Z';huruf++)
	cout<<"Huruf Abjad= "<<huruf<<"\n";
	getch();
	for(huruf='A';huruf<='Z';huruf+=13)
	cout<<"\nHuruf Abjad= "<<huruf<<"\n";
	getch();
	for(huruf='z';huruf>='a';huruf--)
	cout<<"\nHuruf Abjad= "<<huruf<<"\n";
	getch();
	for(huruf='z';huruf<='a';huruf-=8)
	cout<<"Huruf Abjad= "<<huruf;
	getch();
	return 0;
}
