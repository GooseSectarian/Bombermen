// Bombermen.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Controller.h"

int main(int argcp, char *argv)
{
	glutInit(&argcp, &argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(400, 400);
	glutCreateWindow("Урок 1");
	
	glutDisplayFunc(MainLoop);

	std::vector<PlayerVK> playerVK;
	playerVK.push_back(PlayerVK());
	InitController(playerVK);
	std::cout << (char)'w' << " " << (char)KeyCodes::W;
	glutMainLoop();
    return 0;
}

