//Program 7.4
#include <iostream>
#include <conio.h>
using namespace std;

void PalingDalam()
{
	cout << "Saya sekarang sedang di dalam fungsi PalingDalam.\n";
}

void AgakDalam()
{
	cout << "sekarang saya sedang di fungsi AgakDalam.\n";
	PalingDalam(); // panggil Fungsi
	cout << "Sekarang saya Kembali ke fungsi AgakDalam.\n";
}

int main()
{
	cout << "saya sekarang sedang didalam fungsi Utama.\n";
	AgakDalam(); // Panggil Fungsi
	cout << "Saya kembali ke Fungsi Utama Lagi.\n";
	getch();
	return 0;
}
