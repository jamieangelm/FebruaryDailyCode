#include <iostream>
using namespace std;
int main() {

	char input;
	int number1 = 0;
	int number2 = 0;
	int sum;

	cout << "Do you want to add (a), subtract (s), multiply (m), or divide (d)?" << endl;
	cin >> input;
	cout << "What is the first number?" << endl;
	cin >> number1;
	cout << "What is the second number?" << endl;
	cin >> number2;

	if (input == 'a')
		sum = number1 + number2;
	if (input == 's')
		sum = number1 - number2;
	if (input == 'm')
		sum = number1 * number2;
	if (input == 'd')
		sum = number1 / number2;

	cout << "The answer is " << sum << "!" << endl;

}