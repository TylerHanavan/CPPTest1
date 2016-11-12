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

	cout << "Hello World" << endl << sum(5, 6) << endl << combo(5, 6);

	std::cin.ignore();
	return 0;
}