#include <iostream>
using namespace std;
int main() {

	int cookies;
	cout << "How many cookies do you want?" << endl;
	cin >> cookies;

	if (cookies <= 5)
		cout << "Are you sure?" << endl;
	else if (cookies >= 6 && cookies <= 10)
		cout << "Here are your cookies!" << endl;
	else if (cookies >= 10)
		cout << "That's too much!" << endl;
}