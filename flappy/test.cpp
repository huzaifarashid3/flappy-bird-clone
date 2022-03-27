#include <iostream>
#include <string>
using namespace std;
#include "olcConsoleGameEngine.h"

class OneLoneCoder_FlappyBird : public olcConsoleGameEngine
{
public:
	OneLoneCoder_FlappyBird()
	{
		m_sAppName = L"Flappy Bird";
	}
	float a = 0.0f;


private:
	float fLevelPosition = 0.0f; //stores the offset to the first section

protected:
	virtual bool OnUserCreate()
	{
		return true;
	}
	virtual bool OnUserUpdate(float fElapsedTime)
	{

		fLevelPosition += 14.0f * fElapsedTime;
		Fill(0, 0, ScreenWidth(), ScreenHeight(), L' ');
		DrawString(20+fLevelPosition, 10, L"\\\\\\");
		return true;
	}
};

int main(void)
{
	OneLoneCoder_FlappyBird game;
	game.ConstructConsole(80, 48, 16, 16);
	game.Start();

	return 0;
}