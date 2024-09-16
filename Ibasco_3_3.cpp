#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	int sum, diff, prod, remainder;
	float quotient;
	cout << "Enter two numbers: ";
	cin >> num1 >> num2;
	
	sum = num1 + num2;
	diff = num1 - num2;
	prod= num1 * num2;
	quotient = num1 / num2;
	remainder = num1 % num2;
	
	cout << "Sum: " << sum << endl;
	cout << "Difference: " << diff << endl;
	cout << "Product: " << prod << endl;
	cout << "Quotient: " << quotient << endl;
	cout << "Remainder: " << remainder << endl;
	return 0;
}
