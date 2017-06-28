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
	int n;
	int m;
	int b;

	int j = 1;

	while (true) {
		cin >> n;
		if (!n)
			break;
		b = 0;
		while (n--) {
			cin >> m;
			b += m ? 1 : -1;
		}
		cout << "Case " << j << ": " << b << endl;
		j++;
	}
}