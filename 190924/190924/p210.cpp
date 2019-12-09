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

	//초기버전
	vector<int>::iterator ptr1;
	//ptr1 = v.begin() : 벡터 v의 첫번째 주소 값 저장
	//v.end() : 벡터 v의 마지막 데이터 다음의 주소값
	//ptr1++은 벡터v에 들어있는 데이터가 int이기 때문에 주소 4씩 증가
	for (ptr1 = v.begin(); ptr1 != v.end(); ptr1++)
		cout << *ptr1 << "  ";
	cout << endl;

	//C++14버전 1
	//ptr2변수가 자동으로 iterator변수가 된다.
	for (auto ptr2 = v.begin(); ptr2 != v.end(); ptr2++)
		cout << *ptr2 << "  ";
	cout << endl;

	//C++14버전 2
	for (auto& ptr3 : v)
		cout << ptr3 << "  ";
	cout << endl;

	for (int ptr4 : v)
		cout << ptr4 << "  ";
	cout << endl;
	
	return 0;
}