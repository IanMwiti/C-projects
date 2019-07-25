#include <iostream>
using namespace std;
int main()
{
	int age;
	int YearofBirth;
	cout<< "Enter your Year of Birth"<<endl;
	cin>>YearofBirth;
	age=2019-YearofBirth;
	cout<<"You are "<<age<<endl;
	if (age<=18){
		cout<<"Child\n";
	}
	else{
		cout<<"Adult\n";
	}
	return 0;
}

