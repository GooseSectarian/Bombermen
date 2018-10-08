#include "stdafx.h"
#include "Controller.h"

#include "Model.h"

#define VK_UP_PLAYER1 1
#define VK_DOWN_PLAYER1 12
#define VK_RIGHT_PLAYER1 13
#define VK_LEFT_PLAYER1 14

void KeyboardUpFunc(unsigned char key, int x, int y)
{
	int a = 5;
	switch (key)
	{
		case VK_UP_PLAYER1:
		{
			break;
		}
		case VK_DOWN_PLAYER1:
		{
			break;
		}
		case VK_RIGHT_PLAYER1:
		{
			break;
		}
		case VK_LEFT_PLAYER1:
		{
			break;
		}
		default:
			break;
	}
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glBegin(GL_TRIANGLES);
	glVertex3f(-0.5, -0.5, 0.0);
	glVertex3f(0.0, 0.5, 0.0);
	glVertex3f(0.5, -0.5, 0.0);
	glEnd();

	glutSwapBuffers();
}
void MainLoop() {
	glutKeyboardUpFunc(KeyboardUpFunc);
	
}

