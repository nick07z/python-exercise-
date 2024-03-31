#include<iostream>
using namespace std;
template<class T>
void sort(T*array,int size)
{
	T temp;
	for(int i=0;i<size;i++)
	{
	for(int j=0;j<size-i;j++)
	{
	if(*(array+j)>*(array+j+1))
	{
		temp=*(array+j);
		*(array+j)=*(array+j+1);
		*(array+j+1)=temp;
		}	
	}	
	}
}
int main()
{
	int a[4]={3,6,4,8};
	double b[4]={3.1,2.1,1.2,3.8};
	sort(a,4);
	for(int i=0;i<4;i++)
	{
		cout<<a[i];
	}
	sort(b,4);
	for(int j=0;j<4;j++)
	{
		cout<<b[j];
	}
	return 0;
}
