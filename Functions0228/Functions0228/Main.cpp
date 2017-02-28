#include <iostream>
#include <windows.h>
#include <stdlib.h>
using namespace std;

int beep1 = 1800;
int beep2 = 900;
int index1 = 1;
char test1 = 0;

void Annoying();

int main() {

	system("color 3D");
	Annoying();
	
}

void Annoying() {

	for (int j = 0; j < 7; j++) {
		beep1 += 100;
		Beep(beep1, beep2);
	}for (int j = 0; j < 7; j++) {
		beep1 -= 100;
		Beep(beep1, beep2);
	
	for (int i = 0; i < 25; i++)
	MessageBox(NULL, "levy's ugly", "boi", MB_OK);

	}
}