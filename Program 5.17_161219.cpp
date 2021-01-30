//5.17
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	double income;
	int years;
	cout << "Berapa masukan tahunan Anda? ";
	cin >> income;
	cout << "berapa banyak anda bekerja setiap tahunnya "<< "Pekerjaan anda sekarang? ";
	cin >> years;
	if (income >= 35000 || years > 5) // Uses the || logical operator
		cout << "Kwalifikasi Anda.\n";
	else
	{
		cout << "Anda akan mendapatkan gaji paling tidak $35,000 atau lebih\n";
		cout << "setelah bekerja lebih dari lima tahun.\n";
	}
	getch();
	return 0;
}
