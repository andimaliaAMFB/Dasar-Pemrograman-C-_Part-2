//Program 4.5
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	const int NUM_DAYS=7;
	int count;
	double total;
	for(count=1,total=0.0; count<=NUM_DAYS;count++)
	{
		double sales;
		cout<<"Masukan Penjualan untuk Hari ini "<<count<<": ";cin>>sales;
		total+=sales;
	}
	cout<<"Total Penjualan Adalah Rp"<<total;
	return 0;
}
