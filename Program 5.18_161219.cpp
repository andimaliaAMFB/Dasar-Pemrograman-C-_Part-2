//5.18
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	double income;
	int years;
	cout << "Berapa masukan tahunan Anda? ";
	cin >> income;
	cout << "berapa banyak anda bekerja setiap tahunnya "<< "Pekerjaan anda?";
	cin >> years;
	
	if (!(income >= 35000 || years > 5)) // menggunakan operator !
	{
		cout << "Anda akan mendapatkan gaji paling tidak $35,000 atau lebih\n";
		cout << "setelah bekerja lebih dari lima tahun.\n";
	}
	else
	cout << "Kwalifikasi Anda.\n";
	return 0;
}
