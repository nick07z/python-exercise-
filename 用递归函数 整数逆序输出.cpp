#include<iostream>
using namespace std;
int main()
{
	int reverse(int );
	int a,temp;
	cout<<"输入一个正数"<<endl;
	cin>>a;
	 temp=reverse(a);
	 return 0;
}
void reverse(int a)
{
	cout<<a%10;
	if(a/10) reverse(a/10);
	
}
