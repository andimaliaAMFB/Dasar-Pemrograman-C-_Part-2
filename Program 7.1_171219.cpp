//Program 7.1
#include <iostream>
#include <conio.h>
using namespace std;
void TampilPesan()
{
	cout << " >> Salam Hello dari fungsi TampilPesan.\n";
}

int main()
{
	cout << "Hello dari program Utama.\n";
	cout << "--------------------------------------------------\n";
	TampilPesan(); // memanggil TampilPesan
	cout << "--------------------------------------------------\n";
	cout << "kembli ke Fungsi Utama lagi.\n";
	getch();
	return 0;
}
