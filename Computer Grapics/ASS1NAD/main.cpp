#include <stdio.h>
#include<GL/gl.h>
#include <GL/glut.h>
void myDisplayWithColorTriangle();
void myDisplayWithColorRectangle();
void myInit1();
void myInit2();
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_MULTISAMPLE | GLUT_RGB);
    glutInitWindowSize (1024, 768);
    glutInitWindowPosition (0, 0);
    glutCreateWindow ("Hello World");
    glutDisplayFunc(myDisplayWithColorTriangle);
    myInit1 ();
    //glutMainLoop();

    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_MULTISAMPLE | GLUT_RGB);
    glutInitWindowSize (1024, 768);
    glutInitWindowPosition (0, 0);
    glutCreateWindow ("Hello World");
    glutDisplayFunc(myDisplayWithColorRectangle);
    myInit2 ();
    glutMainLoop();
    return 0;
}
void myDisplayWithColorTriangle(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_TRIANGLES);
    glVertex2i(100, 50);
    glVertex2i(100, 130);
    glVertex2i(150, 130);
    glEnd();
    glFlush ();
}
void myDisplayWithColorRectangle()
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_POLYGON);
    glVertex2i(200, 100);
    glVertex2i(200, 200);
    glVertex2i(100, 200);
    glVertex2i(100,100);
    glEnd();
    glFlush ();
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
