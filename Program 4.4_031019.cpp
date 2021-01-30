//Program 4.3
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num;
	cout<<"Angka\tAngka Kuadrat\n---------------------";
	for(num=1;num<=10;num++)
	{
		cout<<"\n"<<num<<"\t\t"<<(num*num);
	}
	getch();
	return 0;
}
