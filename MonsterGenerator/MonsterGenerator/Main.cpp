#include <iostream>
using namespace std;
#include <ctime>
#include <cstdlib>

void Monsters();
int main() {
	srand(time(NULL));
	while (true) {
		Monsters();
		system("pause");
	}
}
void Monsters() {
	int num = rand() % 10;
	switch (num) {
	case 0:
		cout << "Shadow Spawn" << endl;
		break;
	case 1:
		cout << "Metal Snake" << endl;
		break;
	case 2:
		cout << "Rotting Foot" << endl;
		break;
	case 3:
		cout << "Razor Soul" << endl;
		break;
	case 4:
		cout << "Phantom Deviation" << endl;
		break;
	case 5:
		cout << "Horror Mouth" << endl;
		break;
	case 6:
		cout << "Venom Sword" << endl;
		break;
	case 7:
		cout << "Acid Mouth" << endl;
		break;
	case 8:
		cout << "Aura Freak" << endl;
		break;
	case 9:
		cout << "Abyss Fang" << endl;
		break;
	}
}