#include <iostream>
using namespace std;
int main() {

	int base = 0;
	int height = 0;
	int volume;

	cout << "What is the base of your cone?" << endl;
	cin >> base;
	cout << "What is the height of your cone?" << endl;
	cin >> height;
	volume = (base*height) / 3;
	cout << "The volume of your cone is " << volume << "!" << endl;
}