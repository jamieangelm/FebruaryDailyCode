#include <iostream>
using namespace std;
int main() {

	char input = 'y';

	while (input == 'y') {
		cout << "do you want cookies?" << endl;
		cin >> input;
	}
	cout << "you're too greedy, no more cookies" << endl;
}