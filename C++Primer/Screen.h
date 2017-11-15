#pragma once
/* Exercise 7.23 */
#include <iostream>
#include <string>

using namespace std;

class Screen {
public:
	using pos = string::size_type;
	Screen() = default;
	Screen(pos width, pos height) : width(width), height(height), contents(width * height, ' ') { }
	Screen(pos width, pos height, char c): width(width), height(height), contents(width * height, c) { }
	Screen Move(pos row, pos column);
	Screen Set(pos row, pos column, char c);
private:
	pos cursor = 0;
	pos width = 0, height = 0;
	string contents;
};