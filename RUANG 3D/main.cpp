#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void ubin(){
    glColor3d(0.66,0.66,0.66);
    glPushMatrix();
        glTranslated(0.0,-14.0,-20.0);
        glScaled(12.0,0.2,10.0);
        glutSolidCube(10);
    glPopMatrix();
}
void jendela(){
    glColor3d(0.85,0.99,0.99);
    glutSolidCube(10);

    glColor3d(0.88,0.72,0.53);
    glPushMatrix();
        glTranslated(0.0,0.0,4.5);
        glScaled(4.0,1.0,0.1);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.0,0.0,-4.5);
        glScaled(4.0,1.0,0.1);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.0,4.5,0.0);
        glRotated(90.0,1.0,0.0,0.0);
        glScaled(4.0,1.0,0.1);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.0,-4.5,0.0);
        glRotated(90.0,1.0,0.0,0.0);
        glScaled(4.0,1.0,0.1);
        glutSolidCube(10);
    glPopMatrix();
}
void pintu(){
    glPushMatrix();
        glColor3d(0.88,0.72,0.53);
        glTranslatef(61.0, 14.75, -40.0);
        glScalef(0.075,5.5,3.0);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(61.0, 15.8, -56.5);
        glScalef(0.2,5.8,0.25);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(61.0, 15.8, -23.5);
        glScalef(0.2,5.8,0.25);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(61.0,44.0, -40.0);
        glScalef(0.2,0.3,3.5);
        glutSolidCube(10);
    glPopMatrix();

    glColor3d(0.75,0.59,0.4);
    glPushMatrix();
        glTranslatef(61.0, 14.5, -50.0);
        glScalef(4.0, 6.0, 10.0);
        glutSolidSphere(.3, 25, 25);
    glPopMatrix();
}
void dindingKanan(){
    glPushMatrix();
        glTranslatef(61.0, 25.0, -65.0);
        glScalef(0.2,8.0,1.5);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(61.0,25.0,3.75);
        glScalef(0.2,8.0,5.25);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(61.0,55.0, -40.0);
        glScalef(0.2,2.0,3.5);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(61.0,-14.0, -40.0);
        glScalef(0.2,0.2,3.5);
        glutSolidCube(10);
    glPopMatrix();
}
void dindingBelakang(){

    glPushMatrix();
        glTranslated(0.0,25.0,-71.0);
        glScaled(12.0,8.0,0.2);
        glutSolidCube(10);
    glPopMatrix();
}
void dindingKiri(){

    glPushMatrix();
        glTranslated(-51.0,25.0,-52.5);
        glScaled(0.2,8.0,3.5);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-51.0,25.0,12.5);
        glScaled(0.2,8.0,3.5);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-51.0,55.0,-20.0);
        glScaled(0.2,2.0,3.0);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-51.0,-2.5,-20.0);
        glScaled(0.2,2.5,3.0);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-51.0,27.5,-20.0);
        glScaled(0.05,3.5,3.0);
        jendela();
    glPopMatrix();
}

void dinding(){
    glColor3d(1.0,1.0,1.0);

    glPushMatrix();
        dindingKanan();
    glPopMatrix();

    glPushMatrix();
        dindingBelakang();
    glPopMatrix();

    glPushMatrix();
        glTranslated(-10.0,0.0,0.0);
        dindingKiri();
    glPopMatrix();
}
void kasur(){
    glRotated(270.0,0.0,1.0,0.0);
    glColor3d(0.88,0.72,0.53);
    glPushMatrix();
        glTranslated(-25.0,-7.5,0.0);
        glScaled(5.0,1.0,4.0);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-49.0,-4.0,0.0);
        glScaled(0.1,2.0,4.0);
        glutSolidCube(10);
    glPopMatrix();

    glColor3d(0.53,0.8,0.92);
    glPushMatrix();
        glTranslated(-40.0,-2.0,0.0);
        glScaled(1.0,0.5,2.0);
        glutSolidCube(10);
    glPopMatrix();

    glColor3d(0.95,0.95,0.95);
    glPushMatrix();
        glTranslated(-25.0,-2.5,0.0);
        glScaled(4.6,0.1,3.6);
        glutSolidCube(10);
    glPopMatrix();

    glColor3d(0.53,0.8,0.92);
    glPushMatrix();
        glTranslated(-15.0,-2.0,0.0);
        glScaled(2.5,0.1,3.6);
        glutSolidCube(10);
    glPopMatrix();
}
void mejaBelajar(){
    glColor3d(0.88,0.72,0.53);
    glPushMatrix();
        glTranslated(45.0,7.5,7.0);
        glScaled(2.5,0.2,4.4);
        glutSolidCube(10);
    glPopMatrix();

    glColor3d(0.88,0.72,0.53);


    glPushMatrix();
        glTranslated(56.5,-2.5,-14.0);
        glScaled(0.2,2.0,0.2);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslated(33.5,-2.5,-14.0);
        glScaled(0.2,2.0,0.2);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslated(45.0,-2.5,18.0);
        glScaled(2.5,2.0,2.2);
        glutSolidCube(10);
    glPopMatrix();

    glColor3d(0.75,0.59,0.4);
    glPushMatrix();
        glTranslated(32.5,-2.5,18.0);
        glScaled(0.05,1.7,1.9);
        glutSolidCube(10);
    glPopMatrix();

}
void kursi(){

    glColor3d(0.88,0.72,0.53);
    glPushMatrix();
        glTranslated(35.0,-6.0,-39.5);
        glScaled(1.4,0.2,1.4);
        glutSolidCube(10);
    glPopMatrix();

    glColor3d(0.88,0.72,0.53);

    glPushMatrix();
        glTranslated(29.0,-12.0,-45.5);
        glScaled(0.2,1.3,0.2);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslated(41.0,-12.0,-45.5);
        glScaled(0.2,1.3,0.2);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslated(41.0,-6.0,-33.5);
        glScaled(0.2,2.5,0.2);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslated(29.0,-6.0,-33.5);
        glScaled(0.2,2.5,0.2);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslated(35.0,5.5,-33.5);
        glScaled(1.4,0.8,0.2);
        glutSolidCube(10);
    glPopMatrix();

}
void lemari(){
    glColor3d(0.88,0.72,0.53);
    glPushMatrix();
        glTranslated(-42.0,1.0,-48.0);
        glScaled(1.5,3.0,4.0);
        glutSolidCube(10);
    glPopMatrix();

    glColor3d(0.75,0.59,0.4);
    glPushMatrix();
        glTranslated(-41.0,8.0,-48.0);
        glScaled(1.5,1.3,3.8);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-41.0,-6.0,-48.0);
        glScaled(1.5,1.2,3.7);
        glutSolidCube(10);
    glPopMatrix();
}

void display(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glPushMatrix();
        ubin();
    glPopMatrix();

    glPushMatrix();
        dinding();
    glPopMatrix();

    glPushMatrix();
        glTranslated(-40.0,0.0,-20.0);
        kasur();
    glPopMatrix();

    glPushMatrix();
        glRotated(180.0,0.0,1.0,0.0);
        glTranslated(2.0,1.0,-15.0);
        mejaBelajar();
    glPopMatrix();

    glPushMatrix();
        glRotated(-180.0,0.0,1.0,0.0);
        glTranslated(-9.0,1.0,30.0);
        glScaled(1.0,1.0,0.8);
        lemari();
    glPopMatrix();

    glPushMatrix();
        pintu();
    glPopMatrix();


    glFlush();
    glutSwapBuffers();
}

void init(){
    glClearColor(0.2, 0.2, 0.2, 1.0);

    const GLfloat light_ambient[] = { 0.1f, 0.1f, 0.1f, 1.0f };
    const GLfloat light_diffuse[] = { 0.75f, 0.75f, 0.75f, 1.0f };
    const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
    const GLfloat light_position[] = { 2.0f, 5.0f, 5.0f, 0.0f };

    const GLfloat mat_ambient[] = { 0.7f, 0.7f, 0.7f, 1.0f };
    const GLfloat mat_diffuse[] = { 0.8f, 0.8f, 0.8f, 1.0f };
    const GLfloat mat_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
    const GLfloat high_shininess[] = { 100.0f };


    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);
    glShadeModel(GL_SMOOTH);

    glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
}

void reshape(int w, int h){
    glViewport(0,0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (double)w / (double)h, 1.0, 400.0);
    glTranslated(0.0, -45.0, -100.0);
    gluLookAt(0.0, 0.0, 100.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
    glMatrixMode(GL_MODELVIEW);
}

void keyboard(unsigned char key, int x, int y){
    switch (key){
        case 'w':
        case 'W':
            glRotatef(-3.0, 1.0, 0.0, 0.0);
        break;
        case 's':
        case 'S':
             glRotatef(3.0, 1.0, 0.0, 0.0);
        break;
        case 'd':
        case 'D':
            glRotatef(3.0, 0.0, 1.0, 0.0);
        break;
        case 'a':
        case 'A':
            glRotatef(-3.0, 0.0, 1.0, 0.0);
        break;
        case 'e':
        case 'E':
            glRotatef(-3.0, 0.0, 0.0, 1.0);
        break;
        case 'f':
        case 'F':
            glRotatef(3.0, 0.0, 0.0, 1.0);
        break;
        case 'j':
        case 'J':
            glTranslatef(1.0, 0.0, 0.0);
        break;
        case 'l':
        case 'L':
            glTranslatef(-1.0, 0.0, 0.0);
        break;
        case 'i':
        case 'I':
            glTranslatef(0.0, 0.0, 1.0);
        break;
        case 'k':
        case 'K':
            glTranslatef(0.0, 0.0, -1.0);
        break;
        case 'h':
        case 'H':
            glTranslatef(0.0, 1.0, 0.0);
        break;
        case 'u':
        case 'U':
            glTranslatef(0.0, -1.0, 0.0);
        break;
    }

    glutPostRedisplay();
}
int main (int argc, char** argv){
    glutInit(&argc, argv);
    glutInitWindowSize(1152, 680);
    glutInitWindowPosition(20, 10);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("RUANG 3D");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    init();
    glutMainLoop();
}
