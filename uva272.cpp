#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
#include <iostream>
#include <string>
#include <istream>
using namespace std;

int main() {
	string s;
	string quote;
	bool direction = 1;
	while (getline(cin, s)) {
		int j = 0;
		for (int i = 0; (i+j) < s.length()+j; i++) {
			if (s[i] == '"') {
				s.erase(s.begin() + i);
				if (direction)
					quote = "``";
				else
					quote = "''";
				direction = !direction;
				s.insert(i, quote);
				j++;
			}
		}
		cout << s << endl;

	}
}