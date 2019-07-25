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
	if (age<=20)
		cout<<"Teenager\n";
	else if(age<13)
	cout<<"About to reach teenage\n";
    else
    cout<<"Teen age crossed\n";
	return 0;
}
