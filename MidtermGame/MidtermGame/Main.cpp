#include <iostream>
using namespace std;
int main() {
	
	char input = 'a';
	int room = 1;

	while (input != 'q') {
		switch (room) {
		case 1:
			cout << "you're in room 1! you can go east(e)!";
			cin >> input;
			if (input == 'e')
				room = 2;
			else
				cout << "invalid input" << endl;
			break;

		case 2:
			cout << "you're in room 2! you can go east(e) or south (s)!";
			cin >> input;
			if (input == 'e')
				room = 3;
			if (input == 's')
				room = 5;
			break;

		case 3:
			cout << "you're in room 3! you can go west(w) or south (s)!";
			cin >> input;
			if (input == 'w')
				room = 2;
			if (input == 's')
				room = 4;
			break;

		case 4:
			cout << "you're in room 4! you can go north(n) or west(w)!";
			cin >> input;
			if (input == 'n')
				room = 3;
			if (input == 'w')
				room = 5;
			break;

		case 5:
			cout << "you're in room 5! you can go north(n) or east(e)!";
			cin >> input;
			if (input == 'n')
				room = 2;
			if (input == 'e')
				room = 4;
			break;
		}
	}
}