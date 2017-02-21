#include <iostream>
using namespace std;
int main() {

	char input;

	cout << "What kind of cookie do you want? (c=chocolate chip, p=peanut butter, o=oatmeal raisin)" << endl;
	cin >> input;
	switch (input) {
		
	case 'c':
		cout << "Chocolate Chip";
		break;
	case 'p':
		cout << "Peanut Butter";
		break;
	case 'o':
		cout << "Oatmeal Raisin";
		break;
	default:
		cout << "Invalid Input";

	}
}