/*
Project Name: Chapter 5 Program 4
File Name: Chapter5Program4.cpp
Programmer: Kristen White
Date: 11/2025
Requirements: Write a program that uses a loop to display Pattern A
followed by another loop that displays pattern B
*/

#include <iostream>
using namespace std;

int main() {
	// Pattern A
	for (int row = 1; row <= 10; row++) {
		for (int col = 1; col <= row; col++) {
			cout << "+";
		}
		cout << endl;
	}

	// Pattern B
	for (int row = 10; row >= 1; row--) {
		for (int col = 1; col <= row; col++) {
			cout << "+";
		}
		cout << endl;
	}

	return 0;
}