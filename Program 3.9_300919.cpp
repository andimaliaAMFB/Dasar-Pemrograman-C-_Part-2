//Program 3.9
#include<conio.h>
#include<iostream>
using namespace std;

main()
{
	short int ssintmin= -32768 ,ssintmak= 32767;
	unsigned short int usintmak= 65535;
	int intmin = -32768, intmak = 32767;
	unsigned int uintmak= 65535;
	long int slintmin =-2147483648, slintmak = 2147483647;
	unsigned long int ulintmak= 4294967295;
	cout<<"Range signed short int  :"<<ssintmin<<"       s/d      "<<ssintmak;
	cout<<"\nRange unsigned short int :"<<"0           s/d      "<<usintmak;
	cout<<"\nRnage signed int         :"<<intmin<<"      s/d      "<<intmak;
	cout<<"\nRange unsigned int       :"<<"0           s/d      "<<uintmak;
	cout<<"\nRange signed long int    :"<<slintmin<<" s/d "<<slintmak;
	cout<<"\nRange unsigned long int  :"<<"0           s/d "<<ulintmak;
	getch();
	return 0;
}
