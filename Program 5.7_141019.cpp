//Program 5.7
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
main()
{
	double tot_beli, potongan=0, jum_bayar=0;
	cout<<"Total Pembelian Rp.";
	cin>>tot_beli;
	
	if(tot_beli>=50000)
	{
		potongan=0.2*tot_beli;
		cout<<"Besarnya Potongan Rp."<<potongan<<endl;
		jum_bayar=tot_beli-potongan;
		cout<<"Jumlah yang harus dibayarkan Rp."<<jum_bayar;
	}
	else
	{
		potongan=0.05*tot_beli;
		cout<<"Besarnya Potongan Rp."<<potongan<<endl;
		jum_bayar=tot_beli-potongan;
		cout<<"Jumlah yang harus dibayarkan Rp."<<jum_bayar;	
	}
	getch();
	return 0;
}
