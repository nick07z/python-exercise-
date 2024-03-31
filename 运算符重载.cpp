#include<iostream>
using namespace std;
class complex//Ã°ºÅ 
	{
		public:
			complex()
			{
				real=imag=0;
			}
			complex(double a,double b)//ÊäÁ½×éÊý 
			{
				real=a;imag=b;
			}
			complex operator +(const complex&c);
			complex operator -(const complex&c);
			complex operator *(const complex&c);
			complex operator /(const complex&c);
			friend void print(const complex&c);
		private:
			double real,imag; 	
	};
	inline complex complex::operator +(const complex&c)
	{
		return complex(real+c.real,imag+c.imag);
	}
	inline complex complex::operator -(const complex&c)
    {
    	return complex(real-c.real,imag-c.imag);
	}	
	inline complex complex::operator *(const complex&c)
	{
		return complex(real*c.real-imag*c.imag,real*c.imag+imag*c.real);
	}
	inline complex complex::operator /(const complex&c)
	{
		return complex((real*c.real+imag+c.imag)/
		(real*c.real+imag*c.imag),
		(imag*c.real-real*c.imag)/
		(c.real*c.real+c.imag*c.imag));
	}
	void print(const complex&c)
	{
		if(c.imag<0)
		cout<<c.real<<c.imag<<'i';
		else
		cout<<c.real<<'+'<<c.imag<<'i'; 
	}
	int main()
	{
		complex c1(2.0,3.0),c2(4.2,4.6),c3;
		c3=c1+c2;
	print(c3);
		c3=c1-c2;
		print(c3);
		c3=c1*c2;
		print(c3);
		c3=c1/c2;
		print(c3);
	return 0;	
	}
