#include<iostream>
using namespace std;
class circle
{
	public:
	    circle()//��Ҫ�ӷֺ� 
		{cout<<"�����޲ι��캯��"<<endl;}
		circle(int p)
		{
			r=p;
			cout<<"�����вι��캯��"<<endl; 
		}
		double GetArea();
		double GetLen();
		circle(circle&p);//�������캯�� ����const circle���� 
		private:
			int r;
			double pi=3.14;
};
circle::circle(circle&p)
{
	r=p.r;
	cout<<"�������캯������"<<endl; 
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
