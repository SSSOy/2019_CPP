#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	v.push_back(11);
	v.push_back(22);
	v.push_back(33);
	v.push_back(44);
	v.push_back(55);

	cout << "v = ";
	for (auto& e : v)  //v객체를 e라는 이름으로 사용 -> 메모리 따로 사용하지 않는다.
		cout << e << "  ";
	cout << endl;

	v.pop_back();
	cout << "v = ";
	for (int e : v) //e 객체 메모리에 따로 만듦 -> 메모리 누수
		cout << e << "  ";
	cout << endl;
}