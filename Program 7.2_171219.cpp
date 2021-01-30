//Program 7.2
#include <iostream>
#include <conio.h>
using namespace std;
void TampilPesan()
{
	cout << " >> Salam Hello dari fungsi Tampil Pesan.\n";
}

main()
{
	cout << "Hello dari program Utama.\n";
	cout << "--------------------------------------------------\n";
	for (int count = 0; count < 5; count++)
	{
		TampilPesan(); // memanggil Fungsi TampilPesan
	}
	cout << "--------------------------------------------------\n";
	cout << "kembali ke Fungsi Utama lagi.\n";
	getch();
	return 0;
}
