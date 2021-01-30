//Overloading
#include<iostream>
using namespace std;

void luas_segi3(int alas)
{
	int tinggi=10;
	cout<<"Luas Segitiga 1= "<<(0.5*alas*tinggi)<<endl;
}

void luas_segi3(int alas,int tinggi)
{
	cout<<"Luas Segitiga 2= "<<(0.5*alas*tinggi)<<endl;
}

void luas_segi3(int alas,int tinggi,int bagi)
{
	cout<<"Luas Segitiga 2 bagi "<<bagi<<" = "<<(0.5*alas*tinggi)/bagi<<endl;
}

main()
{
	luas_segi3(10);
	luas_segi3(10,15);
	luas_segi3(10,15,3);
}
