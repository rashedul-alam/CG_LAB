#include <stdio.h>
#include <GL/glut.h>
void myDisplay();
void myDisplayFilled();
void myDisplayOutlined();
void myDisplayShip();
void myInit();
void myInit1();
void myInit2();
void myInitShip();
main(int argc, char** argv)
{

glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (1024, 768);
glutInitWindowPosition (0, 0);
glutCreateWindow ("Display Ship");
glutDisplayFunc(myDisplayShip);

myInitShip ();



glutMainLoop();
}









void myDisplayShip(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (0.0, 0.0, 0.0);
glPointSize(5.0);
glBegin(GL_TRIANGLES);
glVertex2i(600,300);
glVertex2i(500,400);
glVertex2i(540,300);
glEnd();

glBegin(GL_QUADS);
glVertex2i(640,200);
glVertex2i(600,300);
glVertex2i(540,300);
glVertex2i(560,240);
glEnd();

glBegin(GL_TRIANGLES);
glVertex2i(640,200);
glVertex2i(560,240);
glVertex2i(560,160);

glEnd();

glBegin(GL_QUADS);
glVertex2i(640,200);
glVertex2i(560,160);
glVertex2i(540,100);
glVertex2i(600,100);
glEnd();

glBegin(GL_TRIANGLES);
glVertex2i(600,100);
glVertex2i(540,100);
glVertex2i(500,0);
glEnd();

glBegin(GL_QUADS);
glVertex2i(560,240);
glVertex2i(500,220);
glVertex2i(500,180);
glVertex2i(560,160);
glEnd();

glBegin(GL_QUADS);
glVertex2i(500,220);
glVertex2i(440,240);
glVertex2i(440,160);
glVertex2i(500,180);
glEnd();

glBegin(GL_QUADS);
glVertex2i(440,240);
glVertex2i(360,240);
glVertex2i(360,160);
glVertex2i(440,160);
glEnd();





glFlush ();
}





void myInitShip (void)
{
glClearColor(1.0, 1.0, 1.0, 0.0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}
