#include<iostream>
using namespace std;
class triangle
{
	public:
		triangle(int aa,int bb,int cc)
		{
			a=aa;
			b=bb;
			c=cc;
		if(a+b>c&&a-b<c)
		cout<<"������"<<endl;
		else cout<<"��������"<<endl;
		
	   }
		modifytriangle();
		private:
			int a,b,c;
};
 triangle::modifytriangle()
{
	
}
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	triangle w(a,b,c);
	w.we();
	return 0;
}
