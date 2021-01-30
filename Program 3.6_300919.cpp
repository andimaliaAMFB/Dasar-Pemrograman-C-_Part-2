//Program 3.6
#include<conio.h>
#include<iostream>
using namespace std;

main()
{
	register int n,jml;//varialbel register
	int m=242;
	for(n=1;n<m;n++)
	jml+=n;
	cout<<"1+2+3+...+"<<m<<"="<<jml;
	getch();
	return 0;
}
