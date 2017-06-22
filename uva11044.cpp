#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;

int main() {
	int n, x, y;
	cin >> n;
	while (n--) {
		scanf("%d %d", &x, &y);
		printf("%d\n", ((x - 2) / 3 + (((x-2)% 3) ? 1 : 0) )*( (y - 2) / 3 + (((y-2)% 3) ? 1 : 0)) );
	}
	return 0;
}