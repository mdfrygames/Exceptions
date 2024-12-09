// Matthew Fryman
// CIS 1202 501
// December 8, 2024
#include<iostream>
#include<new>
#include<cstdlib>

using namespace std;



char character(char, int);





int main() {

	
	try {
		cout << character('c', 2);

	}

	catch (exception invalidRangeException) {
		cout << "Out of range";
	}
	catch (exception invalidCharacterException) {
		cout << "Not a letter";
	}
	return 0;
}


char character(char start, int offset) {
	char end;


	exception invalidRangeException;
	exception invalidCharacterException;
	if (start >= 'a' && start <= 'z') {
		end = start + offset;
		if (end >= 'a' && end <= 'z') {
			return end;
		}
		else {
			throw invalidRangeException;
		}
	}
	else if (start >= 'A' && start <= 'Z') {
		end = start + offset;
		if (end >= 'A' && end <= 'Z') {
			return end;
		}
		else {
			throw invalidRangeException;
		}
	}
	else {
		throw invalidCharacterException;
	}
}