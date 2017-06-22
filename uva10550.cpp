#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;

int main() {
	int a, b, c, d;
	int turns;

	while (scanf("%d %d %d %d", &a, &b, &c, &d), (a || b || c || d) ) {
		turns = 1080; // 2 * 360 + 360
		turns += (a-b) >= 0 ? (a-b) * 9 : (40 + (a-b)) * 9;
		turns += (c-b) >= 0 ? (c-b) * 9 : (40 + (c-b)) * 9;
		turns += (c-d) >= 0 ? (c-d) * 9 : (40 + (c-d)) * 9;
		printf("%d\n", turns);
	}
	return 0;
}