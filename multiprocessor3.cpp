#include<iostream>
#include<string.h>
using namespace std;

class A{
	public :
		void lakshya(){
			cout<<"lakshya wear shirt & paint"<<endl;
		}
};
class C : public A{
	public :
		void lakshya(){
			cout<<"lakshya wear kurta & cap"<<endl;
		}
};
int main()
{
	C c;
	c.lakshya();
	c.A::lakshya();
}