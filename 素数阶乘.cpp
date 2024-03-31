#include<iostream>
using namespace std;
class numbler
{
	public:
		numbler(int a){a=n;
		}
		int factorial(int n);
		int prime(int n);
		private:
			int n;
};
int numbler::factorial(int n)
{
	int a=1;
   for(int i=1;i<=n;i++)
   {
   	 a=a*i;
   }
   return a;
}
int numbler::prime(int n)
{
	int i=2;
	while(i<n)
	{
      if(n%i==0)
			break; 
	   else 
		i++;
	}
	if(i=n)
	cout<<"是素数"<<endl;
	else
	cout<<"不是素数"<<endl; 
	return 0;
}
int main()
{
	int a;
	numbler A(a);
	cin>>a;
	A.prime(a);
	int t=A.factorial(a);
	cout<<"阶乘"<<t<<endl;
	return 0;
}
