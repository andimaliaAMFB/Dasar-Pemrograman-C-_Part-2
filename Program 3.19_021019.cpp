//Program 3.19
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int x,x1,x2,y,y1,y2,z,z1,z2,a,b,c;
	a=125;
	b=100;
	c=25;
	x1=a<b;
	x2=a>b;
	y1=c<=b;
	y2=c>=b;
	z1=a==c;
	z2=a!=c;
	x=x1&&x2;
	y=y1||y2;
	z=!z1;
	cout<<"A= "<<a;cout<<"  B= "<<b;cout<<"  C= "<<c;
	cout<<"\n\nX1= a<b\n  = "<<a<<"<"<<b<<" = "<<x1;
	cout<<"\n\nX2= a>b\n  = "<<a<<">"<<b<<" = "<<x2;
	cout<<"\n\nY1= c<=b\n  = "<<c<<"<="<<b<<" = "<<y1;
	cout<<"\n\nY2= c>=b\n  = "<<c<<">="<<b<<" = "<<y2;
	cout<<"\n\nZ1= a==c\n  = "<<a<<"=="<<c<<" = "<<z1;
	cout<<"\n\nZ2= a!=c\n  = "<<a<<"!="<<c<<" = "<<z2;
	
	cout<<"\n\nX= X1&&X2\n  = "<<x1<<"&&"<<x2;cout<<"\n  = "<<x;
	cout<<"\n\nY= Y1||Y2\n  = "<<y1<<"||"<<y2;cout<<"\n  = "<<y;
	cout<<"\n\nZ= !Z1\n = "<<"!"<<z1<<"\n  = "<<z;
	getch();
	return 0;
}
