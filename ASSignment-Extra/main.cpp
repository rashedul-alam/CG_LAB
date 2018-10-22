#include <stdio.h>

#include <GL/glut.h>

void DrawScene(void)

{

    glClear (GL_COLOR_BUFFER_BIT);

    glColor3f (0.0, 0.0, 0.0);

    glPointSize(1.0);

    glBegin(GL_POLYGON);

    glVertex2i(280,120);

    glVertex2i(250, 170);

    glVertex2i(200, 200);

    glVertex2i(150, 200);

    glVertex2i(100, 170);

    glVertex2i(80, 120);

    glVertex2i(100, 70);

    glVertex2i(160, 30);

    glVertex2i(210, 30);

    glVertex2i(250, 70);

    glEnd();

    glFlush ();

}

void myInit (void)

{

    glClearColor(1.0, 1.0, 1.0, 0.0);

    glMatrixMode(GL_MODELVIEW);

    glLoadIdentity();

    gluOrtho2D(0.0, 800.0, 0.0, 800.0);

}

main(int argc, char** argv)

{

    glutInit(&argc, argv);

    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);

    glutInitWindowSize (800, 800);

    glutInitWindowPosition (0, 0);



    glutCreateWindow ("Decagon");

    glutDisplayFunc(DrawScene);

    myInit ();

    glutMainLoop();

}
