#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<string> v1;

	v1.push_back("Mirim");
	v1.push_back("Meister");
	v1.push_back("IT_Science");

	//auto e : ���� e�� v1�� �ڷ����� ���󰡱� ������ �ڷ����� string
	//�޸𸮰� �����Ǳ� ������ �޸� ����
	for (auto e : v1)
		cout << "  " << e;
	cout << endl;

	//���������� ����Ǿ��� ������ �޸� ���� �Ҵ� X
	for (auto& e : v1)
		cout << "  " << e;
	cout << endl;

	return 0;
}