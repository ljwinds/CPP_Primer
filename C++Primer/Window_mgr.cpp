/* Exercise 7.32 */
#include "Window_mgr.h"
#include "Screen.h"

Window_mgr::Window_mgr() {
	screens.push_back(Screen(24, 80, ' '));
}

void Window_mgr::Clear(ScreenIndex i) {
	Screen &s = screens[i];
	s.contents = string(s.width * s.height, ' ');
}
