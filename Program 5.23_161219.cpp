//5.23
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int AngkaBulan,Tahun, JumlahHari;
	cout<<"Angka Bulan : ";
	cin >> AngkaBulan;
	cout <<"Tahun : ";
	cin >> Tahun;
	switch (AngkaBulan) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			JumlahHari = 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11 :
			JumlahHari = 30;
			break;
		case 2 : if (Tahun % 4 == 0) JumlahHari = 29;
		else
			JumlahHari = 28;
			break;
	}
	cout<<"Jumlah hari "<< JumlahHari;
	getch();
	return 0;
}
