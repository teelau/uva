#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;

int main() {
	int n, m, x, max, min;
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &m);
		scanf("%d", &x); max = x; min = x;
		for (int i = 1; i < m; i++) {
			scanf("%d", &x);
			if (x > max)
				max = x;
			else if (x < min)
				min = x;
		}
		printf("%d\n", (max - min) * 2);
	}
}