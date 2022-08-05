#include <iostream>
#include <cmath>
using namespace std;

int doubleNumber(int a) {

	a=a*2;
	return a;
}

int main() {

	int a;
	doubleNumber(a);
	cout << "Enter your Number" << endl;
	cin >> a;
	cout << "Your doubled number will be " << doubleNumber(a) << endl;

return 0;
}