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
	int a, b, c;
	cin >> n;
	m = n;
	while (n--) {
		scanf("%d %d %d", &a, &b, &c);
		printf("Case %d: ", m - n);
		if (a > 20 || b > 20 || c > 20)
			printf("bad");
		else
			printf("good");
		cout << endl;
	}
}