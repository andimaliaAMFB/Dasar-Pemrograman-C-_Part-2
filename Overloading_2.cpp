//Overloading
#include<iostream>
using namespace std;

void luas_segi3(int alas)
{
	int tinggi=10;
	cout<<"Luas Segitiga 1 = "<<(0.5*alas*tinggi)<<endl;
}

void luas_segi3(char*alas)
{
	cout<<alas<<endl;
}

main()
{
	luas_segi3(10);
	luas_segi3("Belajar pemrograman");
}
