/*
* Write a C++ program that implement a class "Account" that contains a  data member "name",
* constructor to initialize the  data member "name", and member functions to set and get the value of "name".
*/

#include <iostream>
using namespace std;

class Account {
private:
	string name;
	int age;
public:

	//Account() {};
	Account() : name(""), age(0) {}
	// parameterized constructor
	// you can add & for better performence and also in parameterized constructor
	Account(string AccountName, int AccountAge) {
		name = AccountName;
		age = AccountAge;
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

	void setAge(int AccountAge) {
		age = AccountAge;
	}

	int getAge() {
		return age;
	}

	~Account() {};
};

/*
int main() {
	// il va utiliser le parameterized constructor qui en gros va permettre de jouer le rôle de tout les setter mais en 1 setter
	// au lieu d'en avoir plusieur et les setName... les setter à part il vont nous permettre de changer les données d'un objet
	// dans la fonction par exemple ici on a initiliser le data member avec le parameterized constructor et on a mis
	// name = "Haris", age = 19 et après on a appeler le même objet avec la fonction setName pour prendre un setter
	// et modifier la valeur de name de l'objet account1
	Account account1("Haris", 19);
	cout << "Account name and age is : " << account1.getName() << " " << account1.getAge() << endl;
	account1.setName("Test");
	cout << "Account name is : " << account1.getName() << " " << account1.getAge() << endl;
	return 0;
}
*/