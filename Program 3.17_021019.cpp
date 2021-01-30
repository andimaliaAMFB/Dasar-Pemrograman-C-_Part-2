//Program 3.17
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	/*operesi aritmatika dengan bilangan bulat*/
	int v,w,x,y,z;
	v=100;
	w=3;
	x=v/w;
	y=v%w;
	z=v*w-w+v%v/w;
	cout<<"Operasi Aritmatika pada Bilangan Bulat\n";
	cout<<"X= "<<v<<"/"<<w<<endl;
	cout<<" = "<<x;
	cout<<"\nY= "<<v<<"MOD"<<w<<endl;
	cout<<" = "<<y;
	cout<<"\nZ= "<<v<<" x "<<w<<" -"<<w<<" +"<<v<<" MOD "<<v<<"/"<<w;
	cout<<"\n = "<<z;
	getch();
	return 0;
}
