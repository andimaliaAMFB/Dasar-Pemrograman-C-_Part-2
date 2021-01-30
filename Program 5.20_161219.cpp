//5.20
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int bil;
	cout << "Masukkan bilangan : ";
	cin >> bil;
	switch (bil)
	{
		case 1 : cout << "Anda memasukkan bil. satu";
			break;
		case 2 : cout << "Anda memasukkan bil. dua";
			break;
		case 3 : cout << "Anda memasukkan bil. tiga";
			break;
		default: cout << "Anda memasukkan bil selain 1, 2, dan 3";
			break;
	}
}
