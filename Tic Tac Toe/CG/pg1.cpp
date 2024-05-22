#include <GL/glut.h>
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,0.0,0.0);
	glPointSize(10.0);
	glBegin(GL_POINTS);
	glVertex2f(0.0,0.0);
	glEnd();
	glFlush();
}
void main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitWindowPosition(0,0);
	glutInitWindowSize(640,480);
	glutCreateWindow("example");
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glClearColor(1.0,1.0,1.0,1.0);
	glutDisplayFunc(display);
	glutMainLoop();
}