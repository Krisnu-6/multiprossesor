#include<iostream>
#include<string.h>
using namespace std;

class points{
	public : 
	     int x;
	     int y;
	     void setdata(int x,int y)
	     {
	     	this->x = x;
	     	this->y = y;
		 }
		 void getdata()
		 {
		 	cout<<"x = "<<x<<endl;
		 	cout<<"y = "<<y<<endl;
		 }
		 points operator ++(int x)
		 {
		 	points ans;
		 	ans.x = x++;
		 	return ans;
		 }
		 points operator --(int x)
		 {
		 	points ans;
		 	ans.y = y--;
		 	return ans;
		 }
};
int main()
{
	points p,p1;
	p.setdata(10,20);
	p++;
	p.getdata();
	p1.setdata(30,40);
	p1--;
	p1.getdata();
	
}