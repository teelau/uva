#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
#include <iostream>
#include <string>
#include <istream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
	int n, size;
	string s;
	cin >> n;
	while (n--) {
		cin >> s;
		size = s.size();
		if (s[0] == '9'&& s[size - 1] == '4')
			//fail
			cout << '*';
		else if (s[size - 2] == '3' && s[size - 1] == '5')
			//negative
			cout << '-';
		else if (s[0] == '1' && s[1] == '9' && s[2] == '0')
			//not complete
			cout << '?';
		else
			//positive
			cout << '+';
		cout << endl;
	}
}