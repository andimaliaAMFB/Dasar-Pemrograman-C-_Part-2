//Program 1.1
#include <conio.h>
#include <iostream>
using namespace std;

int main ()
{
	double jam, besar, bayar;
	cout<<"Berapa Jam Kamu Bekerja? ";
	cin>>jam;
	cout<<"Berapa besar gaji tiap jamnya? ";
	cin>>besar;
	bayar=jam*besar;
	cout<<"Kamu mendapatkan Gaji(Rp) "<<bayar<<endl;
	getch();
	return 0;
}
