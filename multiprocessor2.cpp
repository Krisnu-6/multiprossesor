#include<iostream>
#include<string.h>
using namespace std;

class Student{
	public :
		void set_value()
		{
			cout<<"Student Name Is Krishna"<<endl;
		}
		void set_value(int n)
		{
			cout<<"Krishna's Id Is "<<n<<endl;
		}
		void set_value(char s[],int b)
		{
			cout<<"Krishna Is Study In"<<s<<endl;
		}
		void set_value(char a[],float p,int r)
		{
			cout<<"He Is Brilliant In "<<a<<endl<<"Subject And His Total Percentage Is "<<p<<endl<<"% And He Achieve "<<r<<endl<<"nd rank in class"<<endl;
		}
};
main()
{
	Student s;
	s.set_value();
	s.set_value(5);
	s.set_value("Red & White",10);
	s.set_value("English",95.23,2);
}