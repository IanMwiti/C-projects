#include <iostream>
using namespace std;
	int main(){
		//local variable declaration:
		int day;
	cout<<"\t\t***Days of the week***\n";
	cout<<"1. Sunday\n";
	cout<<"2. Monday\n";
	cout<<"3. Tuesday\n";
	cout<<"3. Tuesday\n";
	cout<<"4. Wednesday\n";
	cout<<"5. Thursday\n";
	cout<<"6. Friday\n";
	cout<<"7. Saturday\n";
	menu://goto
		cout<<"Enter the day\n";
		cin>>day;
		switch(day){
			case 1:
				cout<<"Today is Sunday"<<endl;
				break;
				case 2:
					cout<<"Today is Monday"<<endl;
					break;
					case 3:
						cout<<"Today is Tuesday"<<endl;
						break;
						case 4:
							cout<<"Today is Wednesday"<<endl;
							break;
							case 5:
								cout<<"Today is Thursday"<<endl;
								break;
								case 6:
									cout<<"Today is Friday"<<endl;
									break;
									case 7:
										cout<<"Today is Saturday"<<endl;
										break;
							default:
								cout<<"Invalid Day"<<endl;
							
		}
		goto menu;
		return 0;
	}
