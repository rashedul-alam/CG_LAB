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
glutCreateWindow ("Display All Shapes");
glutDisplayFunc(myDisplay);
myInit ();


glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (1024, 768);
glutInitWindowPosition (0, 0);
glutCreateWindow ("Display Filled");
glutDisplayFunc(myDisplayFilled);

myInit1 ();

glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (1024, 768);
glutInitWindowPosition (0, 0);
glutCreateWindow ("Display Outlined");
glutDisplayFunc(myDisplayOutlined);

myInit2 ();

glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (1024, 768);
glutInitWindowPosition (0, 0);
glutCreateWindow ("Display Ship");
glutDisplayFunc(myDisplayShip);

myInitShip ();



glutMainLoop();
}


void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (1.0, 0.0, 0.0);
glPointSize(5.0);
glBegin(GL_POLYGON);
glVertex2i(100, 200);
glVertex2i(200, 200);
glVertex2i(200, 100);
glVertex2i(100, 100);
glEnd();

glBegin(GL_LINE_LOOP);
glVertex2i(100, 400);
glVertex2i(200, 400);
glVertex2i(200, 300);
glVertex2i(100, 300);
glEnd();

glBegin(GL_TRIANGLES);
glVertex2i(300, 100);
glVertex2i(400, 100);
glVertex2i(350, 200);
glEnd();

glBegin(GL_LINE_LOOP);
glVertex2i(300, 300);
glVertex2i(400, 300);
glVertex2i(350, 400);
glEnd();

glFlush ();
}

void myDisplayFilled(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (1.0, 0.0, 0.0);
glPointSize(5.0);
glBegin(GL_POLYGON);
glVertex2i(100, 200);
glVertex2i(200, 200);
glVertex2i(200, 100);
glVertex2i(100, 100);
glEnd();


glBegin(GL_TRIANGLES);
glVertex2i(300, 100);
glVertex2i(400, 100);
glVertex2i(350, 200);
glEnd();



}

void myDisplayOutlined(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (1.0, 0.0, 0.0);
glPointSize(5.0);



glBegin(GL_LINE_LOOP);
glVertex2i(100, 400);
glVertex2i(200, 400);
glVertex2i(200, 300);
glVertex2i(100, 300);
glEnd();

glBegin(GL_LINE_LOOP);
glVertex2i(300, 300);
glVertex2i(400, 300);
glVertex2i(350, 400);
glEnd();

glFlush ();
}


void myDisplayShip(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (1.0, 0.0, 0.0);
glPointSize(5.0);
glBegin(GL_LINE_LOOP);
glVertex2i(350, 100);
glVertex2i(300, 100);
glVertex2i(280, 100);
glVertex2i(280, 180);
glVertex2i(250, 180);
glVertex2i(250, 100);
glVertex2i(230, 100);
glVertex2i(230, 200);
glVertex2i(200, 200);
glVertex2i(200, 100);
glVertex2i(180, 100);
glVertex2i(180, 150);
glVertex2i(150, 150);
glVertex2i(150, 100);
glVertex2i(50, 100);
glVertex2i(100, 50);

glVertex2i(300, 50);
glEnd();

glColor3f (0.0, 0.0, 0.0);
glBegin(GL_POLYGON);
glVertex2i(270, 200);
glVertex2i(270, 210);
glVertex2i(260, 210);
glVertex2i(260, 200);
glEnd();


glBegin(GL_POLYGON);
glVertex2i(280, 230);
glVertex2i(280, 240);
glVertex2i(270, 240);
glVertex2i(270, 230);
glEnd();

glBegin(GL_POLYGON);
glVertex2i(290, 260);
glVertex2i(290, 270);
glVertex2i(280, 270);
glVertex2i(280, 260);
glEnd();

glBegin(GL_POLYGON);
glVertex2i(220, 210);
glVertex2i(220, 220);
glVertex2i(210, 220);
glVertex2i(210, 210);
glEnd();

glBegin(GL_POLYGON);
glVertex2i(230, 240);
glVertex2i(230, 250);
glVertex2i(220, 250);
glVertex2i(220, 240);
glEnd();

glBegin(GL_POLYGON);
glVertex2i(240, 270);
glVertex2i(240, 280);
glVertex2i(230, 280);
glVertex2i(230, 270);
glEnd();

glBegin(GL_POLYGON);
glVertex2i(170, 160);
glVertex2i(170, 170);
glVertex2i(160, 170);
glVertex2i(160, 160);
glEnd();

glBegin(GL_POLYGON);
glVertex2i(180, 190);
glVertex2i(180, 200);
glVertex2i(170, 200);
glVertex2i(170, 190);
glEnd();

glBegin(GL_POLYGON);
glVertex2i(190, 220);
glVertex2i(190, 230);
glVertex2i(180, 230);
glVertex2i(180, 220);
glEnd();



glFlush ();
}




void myInit (void)
{
glClearColor(1.0, 1.0, 1.0, 0.0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}
void myInit1 (void)
{
glClearColor(1.0, 1.0, 1.0, 0.0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

void myInit2 (void)
{
glClearColor(1.0, 1.0, 1.0, 0.0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}
void myInitShip (void)
{
glClearColor(1.0, 1.0, 1.0, 0.0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}
