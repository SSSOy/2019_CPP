#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	//vector<int>::iterator iter = v.begin();

	//�ʱ����
	vector<int>::iterator ptr1;
	//ptr1 = v.begin() : ���� v�� ù��° �ּ� �� ����
	//v.end() : ���� v�� ������ ������ ������ �ּҰ�
	//ptr1++�� ����v�� ����ִ� �����Ͱ� int�̱� ������ �ּ� 4�� ����
	for (ptr1 = v.begin(); ptr1 != v.end(); ptr1++)
		cout << *ptr1 << "  ";
	cout << endl;

	//C++14���� 1
	//ptr2������ �ڵ����� iterator������ �ȴ�.
	for (auto ptr2 = v.begin(); ptr2 != v.end(); ptr2++)
		cout << *ptr2 << "  ";
	cout << endl;

	//C++14���� 2
	for (auto& ptr3 : v)
		cout << ptr3 << "  ";
	cout << endl;

	for (int ptr4 : v)
		cout << ptr4 << "  ";
	cout << endl;
	
	return 0;
}