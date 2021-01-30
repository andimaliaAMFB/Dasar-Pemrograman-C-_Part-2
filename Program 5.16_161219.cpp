//5.16
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	char pekerja, barululus;
	cout << "Jawablah pertanyaan dibawah ini\n";
	cout << "dengan jawaban Y untuk Ya atau ";
	cout << "T untuk Tidak\n";
	cout << "Apakah Anda Bekerja? ";
	cin >> pekerja;
	cout << "telahkan Anda sekolah ";
	cout << "dalam dua tahun ini? ";
	cin >> barululus;
	if (pekerja == 'Y' && barululus == 'Y') // menggunakan &&
	{ // logical operator
		cout << "Kwalitas anda spesial ";
		cout << "dan anda tertarik.\n";
	}
	else
	{
		cout << "anda harus bekerja dan mempunyai\n";
		cout << "lulusan dari sekolah SMK dalam\n";
		cout << "waktu paling lama 3 tahun.\n";
	}
	getch();
	return 0;
}
