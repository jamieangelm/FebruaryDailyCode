#include <iostream>
using namespace std;
int main() {

	int song;

	cout << "What song would you like to play?" << endl;
	cout << "Work Out by J. Cole (1)" << endl;
	cout << "Let Me Love You by Mario (2)" << endl;
	cout << "Can't Believe It by T-Pain (3)" << endl;
	cin >> song;
	if (song == 1) {
		cout << "Take a chance roll a dice," << endl;
		cout << "Money can't buy you love cause it's over priced." << endl;
		cout << "Don't overthink just hope it's right." << endl;
	}
	else if (song == 2) {
		cout << "You're the type of woman (deserves good thangs)." << endl;
		cout << "Fistful of diamonds (hand full of rings)." << endl;
		cout << "Baby you're a star (I just want to show you, you are)" << endl;
	}
	else if (song == 3) {
		cout << "Put you in a mansion, somewhere in Wis-canson," << endl;
		cout << "Like I said, ain't nuttin to the Pain, we can change the last name, what's hap'nin?" << endl;
		cout << "'Cause you look so GOOOOD, tell me why you wanna work here." << endl;
	}

}