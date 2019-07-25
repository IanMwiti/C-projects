#include <iostream>
using namespace std;
int main()
{
	char choice;
	float num1, num2;
	cout<<"Enter operator of choice(+ or - or * or/):";
	cin>>choice;
	cout<<"Enter two operators";
	cin>>num1>>num2;
	switch(choice)
	{
		case'+':
			cout<<"your answer is"<<num1+num2;
			break;
		case'-':
			cout<<"your answer is"<<num1-num2;
			break;
		case'*':
			cout<<"your answer is"<<num1*num2;
			break;
		case'/':
			cout<<"your answer is"<<num1/num2;
			break;
		default:
			cout<<"select the appropriate operator";
			break;
	}
	return 0;
}
