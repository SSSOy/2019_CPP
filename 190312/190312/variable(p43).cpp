#include <iostream>
using namespace std;

int same = 2;
int global = 2;

int main() {
	int same = 3;

	cout << "전역변수라면 2, 지역변수라면 3을 출력한다" << endl;
	cout << "변수 same : " << same << endl;
	cout << "변수 global : " << global << endl;

	return 0;
}