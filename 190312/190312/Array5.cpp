#include <iostream>
using namespace std;

int main() {
	char str[15] = "HELLO WORLD";
	int strlength = 0;

	for (int i = 0; str[i] != NULL; i++)
		strlength++;

	cout << "HELLO WORLD의 문자 길이 : " << strlength << endl;

	return 0;
}