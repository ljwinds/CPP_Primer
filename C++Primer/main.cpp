#include "Person.h"
#include "Screen.h"
#include "Window_mgr.h"
#include "Sales_data.h"
#include "Account.h"
#include <list>
#include <deque>

auto display() {
	int i = 5;
}

int main() {
	list<deque<int>> ld;
	string sss[2];
	sss[0] = "asd";
	sss[1] = "qwd";
	for (string s : sss) {
		cout << s << endl;
	}
	cout << Account::rate() << endl;
	Sales_data sd;
	Window_mgr w;
	w.Clear(0);
	Screen s(2, 2, 'a');
	s.Move(1, 0).Set('#').Display(cout);
	cout << endl;
	Person p(cin);
	Print(cout, p);
	string str = p.GetAddress();
	cout << str << endl;
	str = "aaa";
	cout << p.GetAddress() << endl;
	system("pause");
	return 0;
}