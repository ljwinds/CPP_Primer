#pragma once
/* Exercise 7.4, 7.5, 7.9, 7.15 */
#include <iostream>
#include <string>

using namespace std;

class Person {
friend istream &Read(istream &is, Person &p);
friend ostream &Print(ostream &os, const Person &p);

public:
	Person() = default;
	Person(const string &name, const string &address): name(name), address(address) { }
	Person(istream &is);
	const string &GetName() const;
	const string &GetAddress() const;
private:
	string name;
	string address;
};
