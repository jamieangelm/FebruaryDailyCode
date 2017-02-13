#include <iostream>
using namespace std;
int main() {

	char input;
	int dog = 0;
	int whale = 0;
	int cat = 0;
	int snail = 0;

	cout << "Welcome to the 'What aniaml are you' quiz!" << endl;  //introduction to the quiz

	cout << "What is your favorite color? (pink=p, blue=b, black=l, green=g)" << endl; //first question
	cin >> input;
	if (input == 'p')
		dog = dog + 1;
	else if (input == 'b')
		whale = whale + 1;
	else if (input == 'l')
		cat = cat + 1;
	else if (input == 'g')
		snail = snail + 1;

	cout << "What is your favorite weekend activity? (running=r, swimming=s, napping=n, chilling=c)" << endl; //second question
	cin >> input;
	if (input == 'r')
		dog = dog + 1;
	else if (input == 's')
		whale = whale + 1;
	else if (input == 'n')
		cat = cat + 1;
	else if (input == 'c')
		snail = snail + 1;

	cout << "What is your favorite food? (beef=b, fish=f, chicken=c, salad=s)" << endl; //third question
	cin >> input;
	if (input == 'b')
		dog = dog + 1;
	else if (input == 'f')
		whale = whale + 1;
	else if (input == 'c')
		cat = cat + 1;
	else if (input == 's')
		snail = snail + 1;

	cout << "What is your favorite dessert? (fruit=f, ice cream=i, pie=p, chocolate=c)" << endl; //fourth question
	cin >> input;
	if (input == 'f')
		dog = dog + 1;
	else if (input == 'i')
		whale = whale + 1;
	else if (input == 'p')
		cat = cat + 1;
	else if (input == 'c')
		snail = snail + 1;

	cout << "What is your eye color? (brown=b, black=l, hazel=h, green=g)" << endl; //fifth question
	cin >> input;
	if (input == 'b')
		dog = dog + 1;
	else if (input == 'l')
		whale = whale + 1;
	else if (input == 'h')
		cat = cat + 1;
	else if (input == 'g')
		snail = snail + 1;

	cout << "How do you prefer to get around? (jogging=j, biking=b, driving=d, walking=w)" << endl; //sixth question
	cin >> input;
	if (input == 'j')
		dog = dog + 1;
	else if (input == 'b')
		whale = whale + 1;
	else if (input == 'd')
		cat = cat + 1;
	else if (input == 'w')
		snail = snail + 1;

	cout << "What is your favorite type of music? (pop=p, rock=r, hip hop=h, country=c)" << endl; //seventh question
	cin >> input;
	if (input == 'p')
		dog = dog + 1;
	else if (input == 'r')
		whale = whale + 1;
	else if (input == 'h')
		cat = cat + 1;
	else if (input == 'c')
		snail = snail + 1;

	cout << "Where would you go right now if you had the chance? (park=p, ocean=o, desert=d, forest=f)" << endl; //eighth question
	cin >> input;
	if (input == 'p')
		dog = dog + 1;
	else if (input == 'o')
		whale = whale + 1;
	else if (input == 'd')
		cat = cat + 1;
	else if (input == 'f')
		snail = snail + 1;

	cout << "What is the most important thing you grab when you leave the house? (phone=p, wallet=w, keys=k, sweater=s)" << endl; //ninth question
	cin >> input;
	if (input == 'p')
		dog = dog + 1;
	else if (input == 'w')
		whale = whale + 1;
	else if (input == 'k')
		cat = cat + 1;
	else if (input == 's')
		snail = snail + 1;

	cout << "What is your favorite movie genre? (action=a, horror=h, mystery=m, romance=r)" << endl; //tenth question
	cin >> input;
	if (input == 'a')
		dog = dog + 1;
	else if (input == 'h')
		whale = whale + 1;
	else if (input == 'm')
		cat = cat + 1;
	else if (input == 'r')
		snail = snail + 1;

	if ((dog > whale) && (dog > cat) && (dog > snail)) //checking which animal you are
		cout << "You are a DOG!" << endl;
	else if ((whale > dog) && (whale > cat) && (whale > snail))
		cout << "You are a WHALE!" << endl;
	else if ((cat > dog) && (cat > whale) && (cat > snail))
		cout << "You are a CAT!" << endl;
	else if ((snail > dog) && (snail > whale) && (snail > cat))
		cout << "You are a SNAIL!" << endl;

}