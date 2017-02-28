#include <iostream>
#include <windows.h>
#include <stdlib.h>
using namespace std;

int beep1 = 1800;
int beep2 = 900;

void Annoying();

int main() {

	system("color 3D");
	Annoying();
	
}

void Annoying() {

	for (int i = 0; i < 1000000000; i++)
		cout << "Annoying" << endl;
	
	for (int j = 0; j < 7; j++) {
		beep1 += 100;
		Beep(beep1, beep2);
	}for (int j = 0; j < 7; j++) {
		beep1 -= 100;
		Beep(beep1, beep2);

	}
}