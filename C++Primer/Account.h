#pragma once
/* Exercise 7.57 */
#include <iostream>
#include <string>

using namespace std;

class Account {
public:
	void Calculate() { amount += amount * interestRate; }
	static double rate() { return interestRate; }
	static void rate(double);
private:
	string owner;
	double amount;
	static double interestRate;
	static double initRate();
};