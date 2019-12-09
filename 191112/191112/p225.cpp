#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main() {
	char empNum[20]; // 사번
	char empName[20]; // 이름
	char position[20]; // 직급
	ifstream fin; // 입력 클래스
	fin.open("info.txt");
	while (fin >> empNum >> empName >> position) {
		cout << empNum << setw(10) <<
			empName << setw(22) << position << endl;
	}
	fin.close();
	return 0;
}