#include "stdafx.h"
#include "Controller.h"

#include "Model.h"
#include <iostream>
#include <map>

enum class VKPlayer1
{
	UP		= (int)KeyCodes::W,
	DOWN	= (int)KeyCodes::S,
	RIGHT	= (int)KeyCodes::D,
	LEFT	= (int)KeyCodes::A,

};

void KeyboardFunc(unsigned char key, int x, int y)
{
	key = toupper(key);

	switch (key)
	{
		case (int)VKPlayer1::UP:
		{
			std::cout << "VK_PLAYER1_UP" << std::endl;
			PlayerMove(PlayersNumber::_1, Vector2(0, 1));
			break;
		}
		case (int)VKPlayer1::DOWN:
		{
			PlayerMove(PlayersNumber::_1, Vector2(0, -1));
			break;
		}
		case (int)VKPlayer1::RIGHT:
		{
			PlayerMove(PlayersNumber::_1, Vector2(1, 0));
			break;
		}
		case (int)VKPlayer1::LEFT:
		{
			PlayerMove(PlayersNumber::_1, Vector2(-1, 0));
			break;
		}
		default:
			break;
	}
}

void MainLoop() {
	glutKeyboardFunc(KeyboardFunc);	
}

