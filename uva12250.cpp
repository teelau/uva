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
	string str;
	int i = 1;
	map <string, string> m = {
		{ "HELLO", "ENGLISH" },
		{ "HOLA", "SPANISH" },
		{ "HALLO", "GERMAN" },
		{ "BONJOUR", "FRENCH" },
		{ "CIAO", "ITALIAN" },
		{ "ZDRAVSTVUJTE", "RUSSIAN" } };
	while ( getline(cin, str), str[0] != '#') {
		cout << "Case " << i << ": ";
		if (m.find(str) == m.end())
			cout << "UNKNOWN";
		else
			cout << m[str];
		cout << endl;
		i++;
	}
}