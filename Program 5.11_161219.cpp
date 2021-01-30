//5.11
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int testScore;
	char grade;
	bool goodScore = true;
	cout << "Masukan Nilai Angka maka saya akan mengujinya\n";
	cout << "Nilai Konversi huruf adalah: ";
	cin >> testScore;
	if (testScore < 60)
		grade = 'F';
	else if (testScore < 70)
		grade = 'D';
	else if (testScore < 80)
		grade = 'C';
	else if (testScore < 90)
		grade = 'B';
	else if (testScore <= 100)
		grade = 'A';
	else
		goodScore = false;
	if (goodScore)
		cout << " Grade Anda Adalah " << grade << ".\n";
	else
	{
		cout << testScore << " Adalah skor anda yang tidak sah.\n";
	cout << "Silakan masukan skor dibawah 100. \n";
	}
	getch();
	return 0;
}
