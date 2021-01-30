//Program 3.4
#include <conio.h>
#include<iostream>
using namespace std;

/*variabel j disini merupakan variabel eksternal bagi fungsi kali dan fungsi main, shingga bariabel j dapat diakses oleh semua fungsi yang ada yaitu kali dan main*/

int j=1;
void kali(void);

main()
{
	cout<<"Nilai awal J= "<<j<<endl;
	j=j*5;
	cout<<"Nilai J kemudian= "<<j<<endl;
	kali();
	cout<<"Nilai J kini= "<<j<<endl;
	kali();
	cout<<"Nilai J sekarang= "<<j;
	getch();
	return 0;
}

void kali(void)
{
	j*=10;
}
