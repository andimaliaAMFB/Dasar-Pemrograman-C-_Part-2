//Program 4.22
#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main(void)
{
	int row=0;
	do
	{
		int col=0;
		do
		{
			cout<<" ";
			col++;
		}
		while(col<=3-row);
		col=0;
		do
		{
			cout<<" "<<(int)pow(2,col);
			col++;
		}
		while(col<=row);
		col=row-1;
		do
		{
			cout<<" "<<(int)pow(2,col);
			col--;
		}
		while(col>=0);
		cout<<"\n";
		row++;
	}
	while(row<=3);
	getch();
	return 0;
}
