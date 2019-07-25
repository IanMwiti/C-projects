#include <iostream>
using namespace std;
int add(int x, int y)
{
    int sum;
    sum=x+y;
	return (sum);
};
int main(){
    int x,y,z;
    x=5;
    y=6;
    z=add(x,y);
	cout<< "the sum is: "<<z<<endl;
	return 0;
}
