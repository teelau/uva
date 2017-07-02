#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;


int main() {
	int n;
	string s;
	cin >> n;
	while (n--) {
		cin >> s;
		if (s.size() == 5)
			cout << '3';
		else {
			if (s[0] == 't'&&s[1] == 'w' || s[0] == 't'&&s[2] == 'o' || s[1] == 'w'&&s[2] == 'o')
				cout << '2';
			else
				cout << '1';
		}
		cout << endl;
	}
}