#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int sum(int a, int b) {
	return a + b;
}

string combo(int a, int b) {
	return to_string(a) + to_string(b);
}

int main() {

	int ints[7] = { 1, 2, 3, 5, 2, 1, 3 };

	for (int i : ints) {
		cout << i << endl;
	}

	cout << "Number 3 of ints is: " << ints[3] << endl;

	cout << "Hello World" << endl << sum(5, 6) << endl << combo(5, 6);

	std::cin.ignore();
	return 0;
}