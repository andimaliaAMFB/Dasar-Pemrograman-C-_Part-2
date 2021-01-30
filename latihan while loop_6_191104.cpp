// latihan while loop 6_akar-kuadrat 191104//
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int num;
	cin>>num;
	while(num>=0)
	{
		float Val=sqrt(num);
		cout<<Val<<" kuadrat= "<<num<<endl;
		cin>>num;
	}
	return 0;
}
