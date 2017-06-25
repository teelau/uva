#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
#include <iostream>
#include <string>
#include <istream>
using namespace std;

int main() {
	string s;
	while(getline(cin, s))
		cout << s << endl;
}