#include<iostream>
using namespace std;
int main()
{
	int temp1,m,n;
	int temp2;

	int kkk(int m,int n);
	int gbs(int m,int n);
	cout<<"����m,n��ֵ";
	cin>>m>>n;
	temp1=kkk(m,n);
	temp2=gbs(m,n);
	cout<<"���������"<<temp1<<endl; 
	cout<<"��С��������"<<temp2<<endl;
	return 0;
}
int kkk(int m,int n)
{
	//int m,n; �ظ�����m,n mian�����������ȫ�ֱ��� 
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
	int c,t; //ֱ����temp2���У�temp2û�ж��� 
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

