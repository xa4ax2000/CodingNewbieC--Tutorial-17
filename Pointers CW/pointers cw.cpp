#include <iostream>
using namespace std;

int main()
{
	int apple = 5;
	int *pApple = &apple;

	cout << apple << endl;
	cout << &apple << endl;
	cout << *pApple << endl;
	cout << pApple << endl;

	cin.get();
	return 0;
}
