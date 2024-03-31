//一个数等于它的因子和6=1+2+3 
#include<iostream>
using namespace std;
int main()
{
	int n,i,sum=0;
	for(n=1;n<=1000;n++)//输入1000个数 
{ 
	for(i=1;i<n;i++)//n=3 m=1,2判断n/1和n/2 
	{
	if(n%i==0)
	sum+=i;
	}
	if(sum==n)
	cout<<n<<endl;
}
return 0;
}

