//Parameter dengan Nilai Default_coba
#include<iostream>
using namespace std;

double luas_segi3(int alas,int tinggi=10)
{
	return(0.5*alas*tinggi);
}

main()
{
	int a,t;
	cout<<"Masukan Panjang Alas Segitiga: ";cin>>a;
	cout<<"Masukan Tinggi Segitiga      : ";cin>>t;
	cout<<endl;
	cout<<"Luas Segitiga= "<<luas_segi3(a,t)<<endl;
	cout<<"Luas Segitiga (tinggi= 10)= "<<luas_segi3(a)<<endl;
}
