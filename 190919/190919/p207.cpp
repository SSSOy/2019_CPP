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

	vector<int> ::iterator iter;
	for (iter = v.begin(); iter != v.end; iter++)
		cout << *iter << " ";
	cout << endl << endl;
}