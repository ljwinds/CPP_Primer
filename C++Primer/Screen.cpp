/* Exercise 7.23, 7.27, 7.32, 3.33 */
#include "Screen.h"

Screen::pos Screen::size() const {
	return height * width;
}