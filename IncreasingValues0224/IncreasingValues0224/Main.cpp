#include <iostream>
using namespace std;
#include <iomanip>
int main() {
	double num = 1;
	
	for (int i = 0; i <= 11; i++) {
		num *= 10;
		cout << setprecision(0) <<fixed << num << endl<<endl;
	}
}