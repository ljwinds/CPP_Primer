#include "Screen.h"

inline Screen Screen::Move(pos row, pos column) {
	cursor = row * width + column;
	return *this;
}

inline Screen Screen::Set(pos row, pos column, char c) {
	contents[row * width + column] = c;
	return *this;
}