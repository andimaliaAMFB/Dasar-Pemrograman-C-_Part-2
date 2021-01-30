//Program 3.2_modul 3
#include <iostream>
using namespace std;
int main()
{
	float bil1, bil2, hasil;
	int pil;
	cout << " Menu Program\n"; cout << "-------------------\n";
	cout << "1. Penjumlahan\n"; cout << "2. Pengurangan\n";
	cout << "-------------------\n";
	cout << "Pilihan anda : "; cin >> pil;
	switch(pil)
	{
		case 1:
			cout << "Masukkan bil ke-1 : "; cin >> bil1;
			cout << "Masukkan bil ke-2 : "; cin >> bil2;
			hasil = bil1 + bil2;
			cout << bil1 << " + " << bil2 << " = " << hasil; break;
		case 2:
			cout << "Masukkan bil ke-1 : "; cin >> bil1;
			cout << "Masukkan bil ke-2 : "; cin >> bil2;
			hasil = bil1 - bil2;
			cout << bil1 << " - " << bil2 << " = " << hasil; break;
		default:
			cout << "Maaf, anda salah input";
	}
}
