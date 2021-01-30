//Program 3.5
#include<conio.h>
#include<iostream>
using namespace std;

void tambah(void);

main()
{
	int k=100;
	tambah();
	tambah();
	cout<<"Nilai k dalam main()= "<<k;
	getch;
	return 0;
}

void tambah(void)
{
	static int k; //variabel statis
	k++;
	cout<<"Nilai k dalam tambah()= "<<k<<endl;
}
