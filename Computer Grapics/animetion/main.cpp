/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

float transFactor = 0.0f;
float getX(int val)
{
    int width = glutGet(GLUT_WINDOW_WIDTH);
    float frac = (float)val/((float)width/2);
    return frac;
}
float getY(int val)
{
    int height = glutGet(GLUT_WINDOW_HEIGHT);
    float frac = (float)val/((float)height/2);
    return frac;
}
void drawScene()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glColor3ub(255,0,0);
    glPushMatrix();
        glTranslatef(transFactor,0,0);
        glBegin(GL_QUADS);
            glVertex2f(getX(-400),getY(-100));
            glVertex2f(getX(-300),getY(-100));
            glVertex2f(getX(-300),getY(100));
            glVertex2f(getX(-400),getY(100));
        glEnd();
    glPopMatrix();
    glutSwapBuffers();

}
void update(int value)
{
    transFactor+=0.01f;
    if(transFactor>getX(400*2))
       transFactor = -1 * getX(100 * 2);
    glutPostRedisplay();
    glutTimerFunc(20,update,0);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(800, 800);
	glutCreateWindow("Transformation");
	glutDisplayFunc(drawScene);
	glutTimerFunc(20,update,0);
	glutMainLoop();
	return 0;
}
