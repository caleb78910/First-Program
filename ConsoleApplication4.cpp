#include <iostream>
using namespace std;

int main() {

	string name;
	int age = 0;
	string favThing;

	cout << "What is your name?" << endl;
	cin >> name;
	cout << "Hello " << name << endl;

	cout << "How old are you?" << endl;
	cin >> age;
	cout << "You are " << age << endl;

	cout << "Whats is your favorite thing to do?" << endl; 
	cin >> favThing;
	cout << "Your favorite thing to do is " << favThing << endl;

	return 0; 
}