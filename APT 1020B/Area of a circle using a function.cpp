#include <iostream>
using namespace std;
int area;
int getarea (int r);
int main()
{
	int r;
	r=10;
	area=getarea(r);
	cout<<area<<endl;
	return 0;
}
int getarea(int r)
{
	area=r*r*3.14;
	return (area);
}
