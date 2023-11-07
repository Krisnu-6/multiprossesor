#include<iostream>
#include<string.h>
using namespace std;

class points{
	public :
		int a,b;
		void get(int a,int b)
		{
			this->a = a;
			this->b = b;
		}
		void set()
		{
			cout<<"A = "<<a<<"B = "<<b<<endl;
		}
		points operator+(points t){
			points temp;
			temp.a = this->a+t.a;
			temp.b = this->b+t.b;
			return temp;
		}
};
int main()
{
	points p,p1,p2;
	p.get(10,35);
	p.set();
	p1.get(20,40);
	p1.set();
	p2 = p1 + p;
	p2.set();	
}