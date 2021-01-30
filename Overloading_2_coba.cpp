//Overloading_coba
#include<iostream>
using namespace std;

void luas_segi3(int alas)
{
	int tinggi=10;
	cout<<"Luas Segitiga 1(tinggi segitiga = 10)= "<<(0.5*alas*tinggi)<<endl;
}

void luas_segi3(int alas,int tinggi)
{
	cout<<"Luas Segitiga 2= "<<(0.5*alas*tinggi)<<endl;
}

void luas_segi3(int alas,int tinggi,int bagi)
{
	cout<<"Luas Segitiga 2 bagi "<<bagi<<" = "<<(0.5*alas*tinggi)/bagi<<endl;
}

void luas_segi3(char*alas)
{
	cout<<alas<<endl;
}

main()
{
	int a,b,c;
	cout<<"Masukan Panjang Alas Segitiga: ";cin>>a;
	cout<<"Masukan Tinggi Segitiga: ";cin>>b;
	cout<<"Masukan Pembagi Segitiga: ";cin>>c;
	luas_segi3(a);
	luas_segi3(a,b);
	luas_segi3(a,b,c);
	luas_segi3("Berikut contoh pemrograman");
}
