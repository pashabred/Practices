#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double a, x, y, t;
	cout << "Enter a and x" << endl;
	cin >> a >> x;
	if (a <= x)
		y = a + log(x + a);
	else
		y = sqrt(abs(sin(a*x)));
	if (a < y)
		t = tan(a*x) + cos(2*a*y);
	else {
		if (a == y)
			t = y / (a - x) + (a + x) / pow(y, 2);
		else
			t = y / (a - x);
	}
	cout << "y = " << y << endl;
	cout << "t = " << t << endl;
	
	return 0;
}
