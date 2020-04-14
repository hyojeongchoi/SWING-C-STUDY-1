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
	cout << "============계산 결과=============" << '\n';

	cout << a << "+" << b << '=' << a + b << '\n';
	cout << a << "-" << b << '=' << a - b << '\n';
	cout << a << "*" << b << '=' << a * b << '\n';
	cout << a << "/" << b << '=' << a / b << '\n';
}