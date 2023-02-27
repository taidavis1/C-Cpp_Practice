#include <iostream>

#include "AddressBook.h"

using namespace std;

int main(int argc, const char * argv[])
{
	int n;
	cin >> n;
	string name, lastname, email;
	AddressBook * myAddressBook;
	AddressBook::Entry * current = new AddressBook::Entry();
	myAddressBook->innitilize(n , current);
	AddressBook::Entry * current = new AddressBook::Entry();
	for (int i = 0; i < n; i++) {
		cin >> name;
		cin >> lastname;
		cin >> email;
		current->setName(name);
		current->setLastname(lastname);
		current->setEmail(email);
		myAddressBook->add(current);
	}

	myAddressBook->print();

	return 0;
}