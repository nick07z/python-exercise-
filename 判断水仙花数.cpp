#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	for(int i=100;i<1000;i++)
	{
		a=i%100;
		b=(i-a)/10%10;
		c=i/100;
		d=a*a*a+b*b*b+c*c*c;
		if(d==i)
		cout<<i;
	}
	return 0;
}
