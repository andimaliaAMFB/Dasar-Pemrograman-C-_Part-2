//Program 7.3
#include <iostream>
#include <conio.h>
using namespace std;

void pertama()
{
	cout << " >>Saya sekarang sedang di Fungsi Pertama.\n";
}

void kedua()
{
	cout << " >> Saya sekarang sedang di Fungsi Kedua.\n";
}

int main()
{
	cout << "Saya sedang di program Utama.\n";
	pertama(); // pemanggilan fungsi pertama
	kedua(); // pemanggilan fungsi kedua
	cout << "Saya kembali ke Program Utama.\n";
	getch();
	return 0;
}
