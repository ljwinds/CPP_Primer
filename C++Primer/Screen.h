#pragma once
/* Exercise 7.23, 7.27, 7.32, 7.33 */
#include <iostream>
#include <string>
#include "Window_mgr.h"

using namespace std;

class Screen {
	friend void Window_mgr::Clear(ScreenIndex i);
public:
	using pos = string::size_type;
	Screen() = default;
	Screen(string s = " ") { }
	Screen(pos width, pos height) : width(width), height(height), contents(width * height, ' ') { }
	Screen(pos width, pos height, char c): width(width), height(height), contents(width * height, c) { }
	Screen &Move(pos row, pos column);
	Screen &Set(char c);
	Screen &Set(pos row, pos column, char c);
	Screen &Display(ostream &os) { doDisplay(os); return *this; }
	const Screen &Display(ostream &os) const { doDisplay(os); return *this; }
	pos size() const;
private:
	void doDisplay(ostream &os) const { os << contents; }
	pos cursor = 0;
	pos width = 0, height = 0;
	string contents;
};

inline Screen &Screen::Move(pos row, pos column) {
	cursor = row * width + column;
	return *this;
}

inline Screen &Screen::Set(char c)
{
	contents[cursor] = c;
	return *this;
}

inline Screen &Screen::Set(pos row, pos column, char c) {
	contents[row * width + column] = c;
	return *this;
}