#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;

int main() {
	int n, a, b;
	scanf("%d", &n);
	while (n--) {
		scanf("%d %d", &a, &b);
		if (a > b) {
			cout << ">" << endl;
		}
		else if (a < b) {
			cout << "<" << endl;
		}
		else
			cout << "=" << endl;
	}
	//return 0;
}