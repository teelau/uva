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
	string s;
	int n = 1;
	while (cin >> s, s[0] != '*') {
		cout << "Case " << n << ": ";
		if (s == "Hajj")
			cout << "Hajj-e-Akbar";
		else
			cout << "Hajj-e-Asghar";
		cout << endl;
		n++;
	}
}