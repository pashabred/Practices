#include <iostream>

using namespace std;

int main() {
	double a, b;
	char act;
	cout << "Enter two numbers" << endl;
	cin >> a >> b;
	cout << "Enter arithmetic action" << endl;
	cin >> act;
	switch (act) {
	case '+':
		cout << a << "+" << b << "=" << a + b << endl;
		break;
	case '-':
		cout << a << "-" << b << "=" << a - b << endl;
		break;
	case '*':
		cout << a << "*" << b << "=" << a * b << endl;
		break;
	case '/':
		cout << a << "/" << b << "=" << a / b << endl;
		break;
	default:
		cerr << "Error!" << endl;
		break;
	}
	
	return 0;
}
