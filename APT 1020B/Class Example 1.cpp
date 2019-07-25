#include <iostream>
using namespace std;
class addition{
public:
void addnumber(){
int num1,num2,sum;
num1=20;
num2=30;
sum=num1+num2;
cout<<"Answer is: "<<sum<<endl;	
}
};
int main(){
	addition a;
	a.addnumber();
	return 0;
}
