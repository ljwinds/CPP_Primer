#pragma once
/* Exercise 7.32 */
#include <vector>

using namespace std;

class Screen;

class Window_mgr {
public:
	using ScreenIndex = vector<Screen>::size_type;
	Window_mgr();
	void Clear(ScreenIndex i);
private:
	vector<Screen> screens;
};

