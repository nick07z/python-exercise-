#include<iostream>
#include<cmath>
using namespace std;
class point 
{
	public:
		friend double A(point &a,point &b);
			point(double xx,double yy){x=xx;y=yy;}
	private:
		int x;
		int y;
};
double A(point &a,point &b)//有元函数的实现 
{
	double dx=a.x-b.x;
	double dy=b.y-b.y;
	return sqrt(dx*dx+dy*dy);
}
int main()
{
	point p1(2,3),p2(1,1);
	double d=A(p1,p2);
	cout<<"distance is"<<" "<<d<<endl;
	return 0;
}
 
