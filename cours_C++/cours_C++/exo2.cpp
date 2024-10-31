/*
* Write a C++ program that implement a class "Account" that contains a  data member "name",
* constructor to initialize the  data member "name", and member functions to set and get the value of "name".
*/

#include <iostream>
using namespace std;

class Account {
private:
	string name;
public:

	//Account() {};
	Account() : name("") {}
	// parameterized constructor
	// you can add & for better performence and also in parameterized constructor
	Account(string AccountName) {
		this->name = AccountName;
	}
	// option 2 of param constructor
	//Account(const string& accountName) : name(accountName) {}

	// you can add & for better performence and also in parameterized constructor
	void setName(string AccountName) {
		name = AccountName;
	}

	string getName() {
		return name;
	}

	~Account() {};
};

/*
int main() {
	Account account1("Haris");
	cout << "Account name is : " << account1.getName() << endl;
	account1.setName("Test");
	cout << "Account name is : " << account1.getName() << endl;
	return 0;
}
*/
