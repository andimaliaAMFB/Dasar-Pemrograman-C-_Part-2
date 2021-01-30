//5.27
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
main()
{
	int choice, months;
	double charges;
	// Display menu pilihan
	cout << "Menu Anggota Klub Kesehatan\n\n";
	cout << "1. Keanggotaa Standard Dewasa\n";
	cout << "2. Keanggotaan Anak\n";
	cout << "3. Keanggotaan Masyarakat Senior\n";
	cout << "4. Keluar Program\n\n";
	cout << "Masukan Pilihan Anda: ";
	cin >> choice;
	cout << fixed << showpoint << setprecision(2);

	if (choice == 1)
	{
		cout << "Untuk berapa Bulan? ";
		cin >> months;
		charges = months * 40.00;
		cout << "Total pembayaranya adalah: $" << charges << endl;
	}
	else if (choice == 2)
	{
		cout << "Untuk berapa Bulan? ";
		cin >> months;
		charges = months * 20.00;
		cout << "Total pembayaranya adalah: $" << charges << endl;
	}
	else if (choice == 3)
	{
		cout << "Untuk berapa Bulan? ";
		cin >> months;
		charges = months * 30.00;
		cout << "Total pembayaranya adalah: $" << charges << endl;
	}
	else if (choice != 4)
	{
		cout << "Pilihan yang valid adalah antara 1 sampai 4\n";
		cout << "Program akan memilih lagi dari salah satu menu diatas\n";
	}
	getch();
	return 0;
}
