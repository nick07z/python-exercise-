#include<iostream>
using namespace std;
int main()
{
	int fib(int );
	int n,F;
	cout<<"ÊäÈënµÄÖµ"<<endl;
	cin>>n;
	 F=fib(n);
	 cout<<F<<endl;
	 return 0;
}
int fib(int n)
{
	if(n==1)
	return 0;
	else if(n<=3)
	return 1;
	else return fib(n-1)+fib(n-2);	
}
