#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;


void main() {
	char empNum[20]; // 사번
	char empName[20]; // 이름
	char position[20]; // 직급
	ofstream fout("info.txt"); // ofstream fout; fout.open(ˮinfo.txtˮ);

	for (int i = 0; i<3; i++) {
		cout << i + 1 << "번째 사람의 사번을 입력하세요 = >";
		cin >> empNum;
		cout << "이름을 입력하세요 = >";
		cin >> empName;
		cout << "직급을 입력하세요 = >";
		cin >> position;
		fout << empNum << setw(10) << empName <<
			setw(22) << position << endl; //파일에 입력한 내용을 출력
		cout << empName << setw(10) << empNum <<  // 화면애 입력한 내용을 출력
			setw(22) << position << endl;
		// empNum << setw(10)에서 empNum을 10자리로 출력하라.
		cout << endl;
	}
}