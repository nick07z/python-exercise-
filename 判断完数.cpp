//һ���������������Ӻ�6=1+2+3 
#include<iostream>
using namespace std;
int main()
{
	int n,i,sum=0;
	for(n=1;n<=1000;n++)//����1000���� 
{ 
	for(i=1;i<n;i++)//n=3 m=1,2�ж�n/1��n/2 
	{
	if(n%i==0)
	sum+=i;
	}
	if(sum==n)
	cout<<n<<endl;
}
return 0;
}

