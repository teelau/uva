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
	int queries;
	int farmers;
	int size, animals, frnd;
	int sum;
	cin >> queries;
	while (queries--) {
		cin >> farmers;
		sum = 0;
		for (int i = 0; i < farmers; i++) {
			cin >> size >> animals >> frnd;
			sum += size*frnd;
		}
		cout << sum << endl;
	}
}