#include "stdafx.h"
#include "Controller.h"

#include "Model.h"

std::vector<PlayerVK> playerVKs;
void KeyboardFunc(unsigned char key, int x, int y)
{
	// обработка русских символов
	key = toupper(key);
	std::cout << (int)playerVKs[0].up << " " << (int)playerVKs[0].left << " ";
	for (size_t i = 0; i < playerVKs.size(); i++)
	{
		if (playerVKs[i].setBomb == key)
		{
			std::cout << "F";
			PlayerSetBomb(i);
			break;
		}
		if (playerVKs[i].up == key)
		{
			std::cout << "W";
			PlayerMove(i, Vector2(0, 1));
			break;
		}
		if (playerVKs[i].down == key)
		{
			PlayerMove(i, Vector2(0, -1));
			break;
		}
		if (playerVKs[i].right == key)
		{
			PlayerMove(i, Vector2(1, 0));
			break;
		}
		if (playerVKs[i].left == key)
		{
			PlayerMove(i, Vector2(-1, 0));
			break;
		}
	}
}
// Перед вызовом функций из Controller нужно вызвать эту функцию
void InitController(std::vector<PlayerVK> &VKs)
{
	playerVKs = VKs;
}
void MainLoop() {
	glutKeyboardFunc(KeyboardFunc);	
}

