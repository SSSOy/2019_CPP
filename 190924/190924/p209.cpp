#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<string> v1;

	v1.push_back("Mirim");
	v1.push_back("Meister");
	v1.push_back("IT_Science");

	//auto e : 에서 e는 v1의 자료형을 따라가기 때문에 자료형은 string
	//메모리가 생성되기 때문에 메모리 낭비
	for (auto e : v1)
		cout << "  " << e;
	cout << endl;

	//참조형으로 선언되었기 때문에 메모리 따로 할당 X
	for (auto& e : v1)
		cout << "  " << e;
	cout << endl;

	return 0;
}