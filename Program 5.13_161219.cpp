//5.13
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
	{
		if (barululus == 'Y')
		{
			cout << "Kwalitas anda khusus ";
			cout << "tertarik ?\n";
		}
	}
	getch();
	return 0;
}
