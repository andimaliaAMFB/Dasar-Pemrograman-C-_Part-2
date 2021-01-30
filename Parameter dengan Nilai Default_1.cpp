//Parameter dengan Nilai Default
#include<iostream>
using namespace std;

double luas_segi3(int alas,int tinggi=10)
{
	return(0.5*alas*tinggi);
}

main()
{
	int a=15,t=20;
	cout<<"Luas Segitiga= "<<luas_segi3(a,t)<<endl;
	cout<<"Luas Segitiga= "<<luas_segi3(a)<<endl;
}
