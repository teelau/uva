#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
using namespace std;


int main() {
	int n, x, y, x0, y0;
	while (scanf("%d", &n), n) {
		scanf("%d %d", &x0, &y0);
		for (int i = 0; i < n; i++) {
			scanf("%d %d", &x, &y);
			if (x == x0 || y == y0) {
				printf("divisa\n");
				goto skip;
			}
			if (x > x0) {
				if (y > y0)
					printf("NE\n");//quad1
				else
					printf("SE\n");//quad4
			}
			else {
				if (y > y0)
					printf("NO\n");//quad 2
				else
					printf("SO\n");//quad 3
			}
		skip:;
		}
	}
	return 0;
}