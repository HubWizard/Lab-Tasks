#include <iostream>
using namespace std;
int recpower(int a ,int &b){			//Big lmao here.
	if (b > 1)
		a = a * a;					
	else
		return a;
	b--;
	recpower(a, b);					
}
//-----------------------------------------------------------------------------//
int main()
{
	int x, y;

	cout << "Please enter The number and then the power you want to raise it to : \n";

	cin >> x >> y;

	cout << "The answer is : " << recpower(x, y);

}