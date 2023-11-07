#include<iostream>
#include<string.h>
using namespace std;

class Mother{
	private :
		char M[];
		public :
			Mother(char D[])
			{
				strcpy(M,D);
			}
			void set_value()
			{
				cout<<"Whom Day Is Today"<<endl;
			}
			void set_value(char D[])
			{
				cout<<M<<" "<<D;
			}
};
main()
{
	Mother m("Today is");
	m.set_value();
	m.set_value("Mother's Day.");
}