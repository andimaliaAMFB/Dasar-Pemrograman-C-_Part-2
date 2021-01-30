//Program 5.2
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int score1,score2,score3;
	double average;
	
	cout<<"Masukan 3 nilai Ujian dan saya akan mencari rata-ratanya:\n";
	cin>>score1>>score2>>score3;
	average=(score1+score2+score3)/3.0;
	
	cout<<fixed<<showpoint<<setprecision(1);
	cout<<"Rata-rata Nilai Anda Adalah "<<average<<endl;
	if(average==100)
	{
		cout<<"Selamat...!";
		cout<<"Nilai Anda Sempurna\n";
	}
	return 0;
}
