#include <iostream>
using namespace std;

class AccsessTest {
public :
	void showJumsu();
	void setJumsu(const int data);
	int getJumsu();
private :
	int jumsu;
};
void AccsessTest :: showJumsu() {
	cout << "점수 : " << jumsu << endl;
}
void AccsessTest :: setJumsu(int data) {
	jumsu = data;
}
int AccsessTest :: getJumsu() {
	return jumsu;
}
void main() {
	AccsessTest access;
	access.setJumsu(100);
	cout << "점수 : " << access.getJumsu() << endl;
	access.showJumsu();
}