#include <iostream>
using namespace std;
class area{
public:
void getArea(){
int x,y,area;
x=5;
y=10;
area=x*y;
cout<<"Answer is: "<<area<<endl;	
}
};
int main(){
	area a;
	a.getArea();
	return 0;
}

