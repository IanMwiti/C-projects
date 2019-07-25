#include <iostream>
using namespace std;
class areaoftriangle{
public:
void getarea(){
int b,h,area;
b=5;
h=10;
area=0.5*b*h;
cout<<"Answer is: "<<area<<endl;	
}
};
int main(){
	areaoftriangle x;
	x.getarea();
	return 0;
}
