#include<iostream>
using namespace std;
class triangle
{
public:
	void areatriangle()
	{
		int b, h, areatr;
		cout<<"Please enter the base of triangle ";
		cin>>b;
		cout<<"please enter height of the trainge ";
		cin>>h;
		areatr=b*h*0.5;
		cout<<"\n the area of the triangle is "<<areatr<<endl;
	}
};
int main()
{
	triangle t;
	t.areatriangle();
	return(0);
}



