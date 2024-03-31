#include<iostream>
using namespace std;
int main()
{
	int factorial(int );
	int n,temp;
	cout<<"输入n的值"<<endl;
	cin>>n;
	temp=factorial(n);//输入参数的值要写在调用的前面 
	cout<<temp;
	return 0;
}
int factorial(int n)
{
	static int sum=0;
	static int b=1;

	for(int i=1;i<=n;i++)
	{
	b=i*b;
	sum+=b;	
	}
	return sum;
}
