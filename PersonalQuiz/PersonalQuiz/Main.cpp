#include <iostream>
using namespace std;
int main() {

	char input;
	int dog = 0;
	int whale = 0;
	int cat = 0;
	int snail = 0;

	cout << "What is your favorite color? (pink=p, blue=b, black=l, green=g)" << endl;
	cin >> input;
	if (input == 'p')
		dog = dog + 1;
	else if (input == 'b')
		whale = whale + 1;
	else if (input == 'l')
		cat = cat + 1;
	else if (input == 'g')
		snail = snail + 1;

	cout << "What is your favorite weekend activity? (running=r, swimming=s, napping=n, chilling=c)" << endl;
	cin >> input;
	if (input == 'r')
		dog = dog + 1;
	else if (input == 's')
		whale = whale + 1;
	else if (input == 'n')
		cat = cat + 1;
	else if (input == 'c')
		snail = snail + 1;

	cout << "What is your favorite food? (beef=b, fish=f, tuna=t, salad=s)" << endl;
	cin >> input;
	if (input == 'b')
		dog = dog + 1;
	else if (input == 'f')
		whale = whale + 1;
	else if (input == 't')
		cat = cat + 1;
	else if (input == 's')
		snail = snail + 1;

	cout << "What is your favorite dessert? (fruit=f, ice cream=i, pie=p, chocolate=c)" << endl;
	cin >> input;
	if (input == 'f')
		dog = dog + 1;
	else if (input == 'i')
		whale = whale + 1;
	else if (input == 'p')
		cat = cat + 1;
	else if (input == 'c')
		snail = snail + 1;

	cout << "What is your favorite color? (pink=p, blue=b, black=l, green=g)" << endl;
	cin >> input;
	if (input == 'p')
		dog = dog + 1;
	else if (input == 'b')
		whale = whale + 1;
	else if (input == 'l')
		cat = cat + 1;
	else if (input == 'g')
		snail = snail + 1;

	cout << "What is your eye color? (brown=b, black=l, hazel=h, green=g)" << endl;
	cin >> input;
	if (input == 'b')
		dog = dog + 1;
	else if (input == 'l')
		whale = whale + 1;
	else if (input == 'h')
		cat = cat + 1;
	else if (input == 'g')
		snail = snail + 1;

	cout << "How do you prefer to get around? (jogging=j, biking=b, driving=d, walking=w)" << endl;
	cin >> input;
	if (input == 'j')
		dog = dog + 1;
	else if (input == 'b')
		whale = whale + 1;
	else if (input == 'd')
		cat = cat + 1;
	else if (input == 'w')
		snail = snail + 1;

	cout << "What is your favorite type of music? (pop=p, rock=r, hip hop=h, country=c)" << endl;
	cin >> input;
	if (input == 'p')
		dog = dog + 1;
	else if (input == 'r')
		whale = whale + 1;
	else if (input == 'h')
		cat = cat + 1;
	else if (input == 'c')
		snail = snail + 1;

	cout << "Where would you go right now if you had the chance? (park=p, ocean=o, desert=d, forest=f)" << endl;
	cin >> input;
	if (input == 'p')
		dog = dog + 1;
	else if (input == 'o')
		whale = whale + 1;
	else if (input == 'd')
		cat = cat + 1;
	else if (input == 'f')
		snail = snail + 1;

	cout << "What is the most important thing you grab when you leave the house? (phone=p, wallet=w, keys=k, sweater=s)" << endl;
	cin >> input;
	if (input == 'p')
		dog = dog + 1;
	else if (input == 'w')
		whale = whale + 1;
	else if (input == 'k')
		cat = cat + 1;
	else if (input == 's')
		snail = snail + 1;

}