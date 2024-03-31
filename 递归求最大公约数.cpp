#include<iostream>
using namespace std;
int main()
{
	int a,b,temp; 
	int gcd(int,int);
	cout<<"输入两个数的值";
	cin>>a>>b;
	if(b>a)
	a=b;
	temp=gcd(a,b);
	cout<<temp<<endl;
	return 0;
}
int gcd(int a,int b)
{
	int c;
	if(a%b==0)
	c=b;
	else c=gcd(b,a%b);
	return  c;
}
