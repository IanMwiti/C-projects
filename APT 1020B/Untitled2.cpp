#include <iostream>
using namespace std;
	int main(){
		//local variable declaration:
		char grade;
		cout<<"enter grade\n";
		cin>>grade;
		switch(grade){
			case 'A':
				cout<<"Excellent!"<<endl;
				break;
				case 'B':
				case 'C':
					cout<<"Well Done"<<endl;
					break;
					case 'D':
						cout<<"You passed"<<endl;
						break;
						case 'F':
							cout<<"Better Try Again"<<endl;
							default:
								cout<<"Invalid Grade"<<endl;
							
		}
		cout<<"Your Grade is"<<grade<<endl;
		return 0;
	}
