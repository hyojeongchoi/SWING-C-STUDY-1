#include<iostream>
#include <string>
using namespace std;
int main()
{
	float a;
	float b;

	cout << "First number>>";
	cin >> a;
	cout << "Second number>>";
	cin >> b;
	cout << "============��� ���=============" << '\n';

	cout << a << "+" << b << '=' << a + b << '\n';
	cout << a << "-" << b << '=' << a - b << '\n';
	cout << a << "*" << b << '=' << a * b << '\n';
	cout << a << "/" << b << '=' << a / b << '\n';
}