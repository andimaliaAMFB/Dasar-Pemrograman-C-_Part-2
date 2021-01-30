//Program 4.18
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int cacah, data,jumlah;
	while(data!=-1)
	{
		cout<<"Masukan data angka: ";cin>>data;
		jumlah+=data;
		cacah++;
	}
	cout<<"Jumlah data adalah: "<<jumlah<<endl;
	cout<<"Rata-rata: "<<jumlah/cacah;
	return 0;
}
