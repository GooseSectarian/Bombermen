// Bombermen.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

void renderScene(void) {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glBegin(GL_TRIANGLES);
	glVertex3f(-0.5, -0.5, 0.0);
	glVertex3f(0.0, 0.5, 0.0);
	glVertex3f(0.5, -0.5, 0.0);
	glEnd();

	glutSwapBuffers();
}

int main(int argcp, char *argv)
{
	glutInit(&argcp, &argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(400, 400);
	glutCreateWindow("Урок 1");

	glutDisplayFunc(renderScene);

	glutMainLoop();
    return 0;
}

