#include <iostream>
using namespace std;
int area(int x,int y)
{
	int area;
	area=x*y;
	return (area);
}
int main()
{
	int x, y, p;
	x=9;
	y=8;
	p=area (x,y);
	cout<<"The area is \n"<<p<<endl;
}
