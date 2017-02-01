#include <iostream>
using namespace std;

int main() {
	char input;
	cout << "Are the New England Patriots your favorite team?" << endl;
	cin >> input;

		if (input == 'y')
			cout << "You're pretty cool, let's be friends" << endl;
		else if (input == 'n')
			cout << "You're ugly and have bad taste in football teams" << endl;
}
