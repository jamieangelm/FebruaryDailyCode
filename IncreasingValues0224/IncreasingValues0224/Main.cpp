#include <iostream>
using namespace std;
int main() {
	double num = 1;
	
	for (int i = 0; i <= 11; i++) {
		num *= 10;
		cout << fixed << num << endl<<endl;
	}
}