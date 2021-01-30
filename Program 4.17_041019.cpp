//Program 4.17
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	int row=0;
	while(row<=3)
	{
		int col=1;
		while(col<=3-row)
		{
			cout<<"";
			col++;
		}
		col=0;
		while(col<=row)
		{
			cout<<""<<(int)pow(2,col);
			col++;
		}
		col=row-1;
		while(col>=0)
		{
			cout<<""<<(int)pow(2,col);
			col--;
		}
		cout<<"\n";
		row++;
	}
	getch();
	return 0;
}
