#include "Person.h"
#include "Screen.h"
#include "Window_mgr.h"
#include "Sales_data.h"

int main() {
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