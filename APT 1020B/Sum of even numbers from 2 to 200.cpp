#include <iostream>
using namespace std;
int main()
{  
    int n = 200;
    int k = 0;
    int sum = 0;
    sum = 0;
    k = 2; 
    cout << "Enter a number: " ;
	cin >> n;
    while (k <= n)  
          {
                if (k%2==0)
                {
                   sum = sum + k;
                   k = k+2;         
                }
          }
          cout << "the sum of even numbers from 2 to " << n << " is  " << sum << endl;                     
	return 0;
}
