/* Exercise 7.4, 7.5, 7.9, 7.15 */
#include "Person.h"

Person::Person(istream &is) {
	Read(is, *this);
}

const string &Person::GetName() const{
	return name;
}

const string &Person::GetAddress() const {
	return address;
}

istream &Read(istream &is, Person &p) {
	is >> p.name >> p.address;
	return is;
}

ostream &Print(ostream &os, const Person &p) {
	os << "name: " << p.name << endl;
	os << "address: " << p.address << endl;
	return os;
}