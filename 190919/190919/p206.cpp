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
	for (auto& e : v)  //v��ü�� e��� �̸����� ��� -> �޸� ���� ������� �ʴ´�.
		cout << e << "  ";
	cout << endl;

	v.pop_back();
	cout << "v = ";
	for (int e : v) //e ��ü �޸𸮿� ���� ���� -> �޸� ����
		cout << e << "  ";
	cout << endl;
}