//Prtogram 3.11
#include<conio.h>
#include<iostream>
using namespace std;

main()
{
	enum boolean{FALSE,TRUE};
	enum boolean kondisi;
	kondisi=TRUE;
	if(kondisi)
	cout<<"Kondisi: "<<kondisi;
	else
	{
		kondisi=FALSE;
		cout<<"Kondisi: "<<kondisi;
	}
	getch();
	return 0;
}
