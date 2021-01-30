//Program 4.2
#include<iostream>
using namespace std;
int main()
{
	int num=1;
	cout<<"|Angka  | Angka Kuadrat |\n|-------|---------------|\n";
	while (num<=10)
	{
		cout<<"|"<<num<<"\t|\t"<<(num*num)<<"\t|"<<endl;
		num++;
	}
	return 0;
}
