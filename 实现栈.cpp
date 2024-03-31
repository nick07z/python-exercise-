#include<iostream>
using namespace std;
template<class T>
class stack
{
	public:
		int push(ElementType &num);
		int pop(ElementType num);
		stack(int=8);
		~stack(){delete[] date
		};
		private:
			T*a;int num,size;
			elementType *date;
};
template<class elementType>
int stack<elementType>::pop(ElementType &num)
{
	if(num==0)
	return 0;
	num=date[--num];
	return 1;
}
template<class ElementType>
stack<ElemantType>::stack(int s)
{
	size=s>0?s:8;
	date=newElementType[s];
	num=0;
}
int main()
{
	stack<double>doublestack(6);
	double f=3.14;
	while(doublestack.push(f))
	{
		cout<<f<<'';
		f+=f;
	}
	while(doublestack.pop(f))
	cout<<f<<'';
	stack<int>intstack;
	inti=1;
	return ;
}
