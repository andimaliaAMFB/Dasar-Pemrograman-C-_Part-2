//5.14
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
	cout << "telahkan Anda selesai sekolah ";
	cout << "dalam dua tahun ini? ";
	cin >> barululus;

	if (pekerja == 'Y')
	{ // Nested if
		if (barululus == 'Y')
		{
			cout << "Kwalitas anda khusus ";
			cout << "Anda tertarik\n";
		}
		else
		{
			cout << "Anda harus Lulus dari ";
			cout << "sekolah paling lama 2 tahun\n";
			cout << "dan berkwalitas.\n";
		}
	}
	else
	{
		cout << "Anda harus menjadi pekerja yang berkualitas.\n";
	}
	getch();
	return 0;
}
