#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
#include <iostream>
#include <string>
#include <istream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	int m[3];
	cin >> n;
	int j = n;
	while(n--) {
		scanf("%d %d %d", &m[0], &m[1], &m[2]);
		sort(m, m + 3);
		cout << "Case " << j-n << ": " <<m[1] << endl;
	}
}