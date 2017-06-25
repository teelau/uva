#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
#include <iostream>
#include <string>
#include <istream>
using namespace std;

int main() {
	int n,m;
	cin >> n;
	while(n--) {
		cin >> m;
		cout << abs(((m * 567 / 9 + 7492) * 235 / 47 - 498) / 10 % 10) << endl;
	}
}