/*
* JAVARIS personal assistant
*/

#include <iostream>
using namespace std;

class User {
private:
	string name;
	int age;
public:
	User(string username, int user_age) {
		name = username;
		age = user_age;
	}

	void setUsername(string username) {
		name = username;
	}

	string getUsername() {
		return name;
	}

	void setUserAge(int user_age) {
		name = user_age;
	}

	int getUserAge() {
		return age;
	}
};

int main() {
	User user1("Haris", 19);

	cout << "Hello " << user1.getUsername() << " you are " << user1.getUserAge() << endl;

	// add actual time and wheater so look at api
}