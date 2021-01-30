//Program 5.9
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int testScore;
	char grade;
	
	cout<<"Masukan Nilai Angka maka saya akan mengujinya\n";
	cout<<"Nilai Konversi huruf adalah: ";
	cin>>testScore;
	
	if(testScore<60)
	grade ='F';
	else if(testScore<70)
	grade ='D';
	else if(testScore<80)
	grade ='C';
	else if(testScore<90)
	grade ='B';
	else if(testScore<=100)
	grade ='A'; 
	else if(testScore<0)
	grade ='INVALID';
	
	cout<<"Grade Anda Adalah "<<grade;
	getch();
	return 0;
}
