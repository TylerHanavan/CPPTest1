#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <time.h>
#include <dos.h>     
#include <conio.h>
#include <windows.h>

using namespace std;

typedef int(*Function)(int a, int b);

int sum(int a, int b) {
	return a + b;
}

int combo(int a, int b) {
	return std::stoi(to_string(a) + to_string(b));
}

int main() {

	int a, b;

	cout << "Enter the first parameter" << endl;

	cin >> a;

	cout << "Enter the second parameter" << endl;

	cin >> b;

	Function funcs[2] = { sum, combo };

	int c = 0;

	for (Function func : funcs) {
		cout << "Func: " << c << " is " << func(a, b) << " with parameters (2, 3)" << endl;
		c++;
	}

	cout << "------------" << endl;

	int ints[7] = { 1, 2, 3, 5, 2, 1, 3 };

	for (int i : ints) {
		cout << i << endl;
	}

	cout << "Number 3 of ints is: " << ints[3] << endl;

	cout << "Hello World" << endl << sum(5, 6) << endl << combo(5, 6);

	Sleep(500);

	_getch();
	return 0;
}