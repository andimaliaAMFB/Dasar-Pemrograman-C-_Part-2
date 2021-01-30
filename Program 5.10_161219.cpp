//Program 5.10
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int skortest;
	char nilai;
	cout << "Masukan Nilai Angka maka saya akan mengujinya\n";
	cout << "Nilai Konversi huruf adalah: ";
	cin >> skortest;
	if (skortest < 0)
	{
		nilai='-';
	}
	if (skortest > 0&&skortest < 60)
	{
		nilai = 'F';
	}
	if (skortest > 60&&skortest < 70)
	{
		nilai = 'D';
	}
	if (skortest > 70&&skortest < 80)
	{
		nilai = 'C';
	}
	if (skortest > 80&&skortest < 90)
	{
		nilai = 'B';
	}
	if (skortest > 90&&skortest <= 100)
	{
		nilai = 'A';
	}
	cout << " Nilai Anda Adalah " << nilai << ".\n";
	getch();
	return 0;
}
