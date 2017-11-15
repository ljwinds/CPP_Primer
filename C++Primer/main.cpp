#include "Person.h"
#include "Screen.h"

int main() {
	Person p(cin);
	Print(cout, p);
	string s = p.GetAddress();
	cout << s << endl;
	s = "aaa";
	cout << p.GetAddress() << endl;
	system("pause");
	return 0;
}