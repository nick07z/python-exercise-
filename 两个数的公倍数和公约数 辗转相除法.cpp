#include<iostream>
using namespace std;
int main()
{
	int temp1,m,n;
	int temp2;

	int kkk(int m,int n);
	int gbs(int m,int n);
	cout<<"输入m,n的值";
	cin>>m>>n;
	temp1=kkk(m,n);
	temp2=gbs(m,n);
	cout<<"最大公因数是"<<temp1<<endl; 
	cout<<"最小公倍数是"<<temp2<<endl;
	return 0;
}
int kkk(int m,int n)
{
	//int m,n; 重复定义m,n mian函数里面的是全局变量 
	int remind,t;
	while(n>0)
	{
		remind=m%n;
		m=n;
		n=remind;
	}
	return m;
}
int gbs(int m,int n)
{
	int c,t; //直接用temp2运行：temp2没有定义 
	if(n>m){
	m=n;
	t=m;
	n=t;
}
if(m%n==0)
c=m;
else c=m*n;
return c;
}

