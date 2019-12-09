#include <iostream>
#include <string>
using namespace std;

class CBank {
	string name;
	string account;
	int balance;

public :
	CBank() { };
	CBank(string name, string account, int balance) {
		this->name = name;
		this->account = account;
		this->balance = balance;
	}

	void setName(string name) 
	{	this->name = name;			}
	string getName() 
	{  return this->name;			}
	void setAccount(string account) 
	{  this->account = account;	}
	string getAccount() 
	{  return this->account;			}
	void setBalance(int balance) 
	{  this->balance = balance;	}
	int getBalanbe() 
	{  return this->balance;			}

	void in(int in);
	void out(int out);
};

void CBank::in(int in) {

}
void CBank::out(int out) {

}

void main() {
	CBank c;

	string temp;
	int tem;

	cout << "이름 입력 : ";
	cin >> temp;
	c.setName(temp);
	cout << "계좌번호 입력 : ";
	cin >> temp;
	c.setAccount(temp);
	cout << "잔고 입력 : ";
	cin >> tem;
	c.setBalance(tem);

}