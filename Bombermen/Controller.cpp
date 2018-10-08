#include "stdafx.h"
#include "Controller.h"

#include "Model.h"

void display(unsigned char key, int x, int y)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glBegin(GL_TRIANGLES);
	glVertex3f(-0.5, -0.5, 0.0);
	glVertex3f(0.0, 0.5, 0.0);
	glVertex3f(0.5, -0.5, 0.0);
	glEnd();

	glutSwapBuffers();
}
void MainLoop() {
	glutKeyboardUpFunc(display);
	
}

