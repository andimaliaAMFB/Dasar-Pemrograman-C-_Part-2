//5.21
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	char kode;
	cout<<"Masukkan Kode Barang [A..C] : ";
	cin>>kode;
	switch(kode)
	{
		case 'A' :
			cout<<"Alat Olah Raga";
			break;
		case 'B' :
			cout<<"Alat Elelktronik";
			break;
		case 'C' :
			cout<<"Alat Masak";
			break;
		default:
			cout<<"Anda Salah Memasukan kode";
			break;
	}
	getch();
}
