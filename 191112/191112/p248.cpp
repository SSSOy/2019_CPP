#include <iostream>
#include <exception>
using namespace std;

int main() {
	int *p[101];
	try {
		for (int i = 1; i < 100; i++) {
			p[i] = new int[10000000];
			cout << "i" << "��° �迭 ����" << endl;
		}
	}
	catch (bad_alloc &e) {
		cout << "Exception : " << e.what() << endl;
	}
}