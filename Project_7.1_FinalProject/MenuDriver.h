#pragma once



using namespace std;

class MenuDriver
{

private:
	int row = 0;

public:

	
	int CheckKeyPress();
	void DrawMenu(vector<string>, int, int);
	void SetNewCursor(int row, int col);
	void HideCursorBlink();
	void ShowCursorBlink();
	void RunMenu(vector<string>, int&, int);
	int MenuModifier(vector<string>& menu);
	void SetWindowSize(int w, int h);
	int GetWindowWidth();
	void SetColor(int color);
	void SetRow(int row);

};

