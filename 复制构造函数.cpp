#include<iostream>
using namespace std;
class circle
{
	public:
	    circle()//不要加分号 
		{cout<<"调用无参构造函数"<<endl;}
		circle(int p)
		{
			r=p;
			cout<<"调用有参构造函数"<<endl; 
		}
		double GetArea();
		double GetLen();
		circle(circle&p);//拷贝构造函数 定义const circle报错 
		private:
			int r;
			double pi=3.14;
};
circle::circle(circle&p)
{
	r=p.r;
	cout<<"拷贝构造函数调用"<<endl; 
}
double circle::GetArea()//
{
return pi*r*r;	
}
double circle::GetLen()
{
	return 2*pi*r;
}
int main()
{
	circle A(3);
	circle B=A;
	cout<<A.GetArea()<<endl;
	cout<<B.GetLen()<<endl;
	return 0;
}
