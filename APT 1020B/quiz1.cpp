#include<iostream>
using namespace std;
int main()
{
cout<<"WELCOME TO WAMAIKOS"<<endl;
cout<<"**************************"<<endl;
cout<<"**************************"<<endl;
cout<<"**************************"<<endl;
cout<<"MENU"<<endl;
cout<<"1. Tilapia----------Ksh 500"<<endl;
cout<<"2. Matumbo----------ksh200"<<endl;
cout<<"3. Chai/Chapo----------ksh 100"<<endl;
cout<<"4. Mbuzi---------ksh400"<<endl;
cout<<"5. Githeri----------ksh50"<<endl;
cout<<"Choose your food by typing a number"<<endl;
int x;
cin>>x;
		switch(x){
			case 1:
				cout<<"You chose Tilapia costing ksh500"<<endl;
				break;
				case 2:
					cout<<"You chose Matumbo costing ksh200"<<endl;
				case 3:
					cout<<"You chose Chai/Chapo costing ksh100"<<endl;
					break;
					case 4:
						cout<<"You chose Mbuzi costing ksh400"<<endl;
						break;
						case 5:
							cout<<"You chose Githeri costing ksh 50"<<endl;
							default:
								cout<<"Invalid choice"<<endl;
							
		}
}

