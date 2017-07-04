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
	int n,m;
	string s;
	int sum = 0;
	cin >> n;
	while (n--) {
		cin >> s;
		if (s == "report")
			cout << sum << endl;
		else {
			cin >> m;
			sum += m;
		}
	}
}
