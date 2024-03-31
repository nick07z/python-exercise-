#include<iostream>
using namespace std;
int main()
{
int m,temp,a;
int kk(int a);
cout<<"ÊäÈëmµÄÖµ";
cin>>a;
temp=kk(a);

cout<<"c="<<temp<<endl;
return 0;
}
int kk(int a)
{
int i;
static int c=1;

for(i=1;i<=a;i++)
{
	c=i*c;
}
return c;
}

