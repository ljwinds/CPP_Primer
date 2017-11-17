#pragma once
/* Exercise 7.41 */
#include <iostream>
#include <string>

using namespace std;

class Sales_data {
public:
	Sales_data(string s, unsigned cnt, double price) : bookNo(s), units_sold(cnt), revenue(cnt * price) { cout << "a"; }
	Sales_data(): Sales_data("", 0, 0.0) { cout << "b"; }
	Sales_data(string s): Sales_data(s, 0, 0.0) { cout << "c"; }
private:
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};