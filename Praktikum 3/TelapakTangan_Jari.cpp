//Nama : Bagus Athallah
//NIM	 : 24060123120002


#include <GL/glut.h>

static int shoulder = 0, elbow = 0, palm = 0, thumb1 = 0, thumb2 = 0, indexfinger1 = 0, indexfinger2 = 0, indexfinger3 = 0, middlefinger1 = 0, 
middlefinger2 = 0, middlefinger3 = 0, ringfinger1 = 0, ringfinger2 = 0, ringfinger3 = 0, littlefinger1 = 0, littlefinger2 = 0, littlefinger3 = 0;

void init(void) {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_FLAT);
}

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();

    // elbow
    glTranslatef(-3.5, 0.0, 0.0);
    glRotatef((GLfloat)elbow, 0.0, 1.0, 0.0);
    glTranslatef(1.0, 0.0, 0.0);

    glPushMatrix();
    glScalef(1.5, 1.0, 0.5);
    glutWireCube(1.0);
    glPopMatrix();

    // palm
    glTranslatef(0.7, 0.0, 0.0);
    glRotatef((GLfloat)palm, 0.0, 1.0, 0.0);
    glTranslatef(1.0, 0.0, 0.0);

    glPushMatrix();
    glScalef(2.0, 2.0, 0.5);
    glutWireCube(1.0);
    glPopMatrix();
    
glPushMatrix();
    // thumb1
    glTranslatef(-0.2, -1.2, 0.0);
    glRotatef((GLfloat)thumb1, 0.0, 1.0, 0.0);
    glTranslatef(0.5, 0.0, 0.0);

    glPushMatrix();
    glScalef(0.8, 0.4, 0.5);
    glutWireCube(1.0);
    glPopMatrix();
    
    // thumb2
    glTranslatef(0.3, 0.0, 0.0);
    glRotatef((GLfloat)thumb2, 0.0, 1.0, 0.0);
    glTranslatef(0.5, 0.0, 0.0);

    glPushMatrix();
    glScalef(0.8, 0.4, 0.5);
    glutWireCube(1.0);
    glPopMatrix();
glPopMatrix();

glPushMatrix();
    // indexfinger1
    glTranslatef(0.9, -0.8, 0.0);
    glRotatef((GLfloat)indexfinger1, 0.0, 1.0, 0.0);
    glTranslatef(0.5, 0.0, 0.0);

    glPushMatrix();
    glScalef(0.8, 0.4, 0.5);
    glutWireCube(1.0);
    glPopMatrix();
    
    // indexfinger2
    glTranslatef(0.3, 0.0, 0.0);
    glRotatef((GLfloat)indexfinger2, 0.0, 1.0, 0.0);
    glTranslatef(0.5, 0.0, 0.0);

    glPushMatrix();
    glScalef(0.8, 0.4, 0.5);
    glutWireCube(1.0);
    glPopMatrix();

    // indexfinger3
    glTranslatef(0.3, 0.0, 0.0);
    glRotatef((GLfloat)indexfinger3, 0.0, 1.0, 0.0);
    glTranslatef(0.5, 0.0, 0.0);

    glPushMatrix();
    glScalef(0.8, 0.4, 0.5);
    glutWireCube(1.0);
    glPopMatrix();
glPopMatrix();

glPushMatrix();
    // middlefinger1
    glTranslatef(0.95, -0.3, 0.0);
    glRotatef((GLfloat)middlefinger1, 0.0, 1.0, 0.0);
    glTranslatef(0.5, 0.0, 0.0);

    glPushMatrix();
    glScalef(0.9, 0.4, 0.5);
    glutWireCube(1.0);
    glPopMatrix();
    
    // middlefinger2
    glTranslatef(0.4, 0.0, 0.0);
    glRotatef((GLfloat)middlefinger2, 0.0, 1.0, 0.0);
    glTranslatef(0.5, 0.0, 0.0);

    glPushMatrix();
    glScalef(0.9, 0.4, 0.5);
    glutWireCube(1.0);
    glPopMatrix();

    // middlefinger3
    glTranslatef(0.4, 0.0, 0.0);
    glRotatef((GLfloat)middlefinger3, 0.0, 1.0, 0.0);
    glTranslatef(0.5, 0.0, 0.0);

    glPushMatrix();
    glScalef(0.9, 0.4, 0.5);
    glutWireCube(1.0);
    glPopMatrix();
glPopMatrix();

glPushMatrix();
    // ringfinger1
    glTranslatef(0.9, 0.2, 0.0);
    glRotatef((GLfloat)ringfinger1, 0.0, 1.0, 0.0);
    glTranslatef(0.5, 0.0, 0.0);

    glPushMatrix();
    glScalef(0.8, 0.4, 0.5);
    glutWireCube(1.0);
    glPopMatrix();
    
    // ringfinger2
    glTranslatef(0.3, 0.0, 0.0);
    glRotatef((GLfloat)ringfinger2, 0.0, 1.0, 0.0);
    glTranslatef(0.5, 0.0, 0.0);

    glPushMatrix();
    glScalef(0.8, 0.4, 0.5);
    glutWireCube(1.0);
    glPopMatrix();

    // ringfinger3
    glTranslatef(0.3, 0.0, 0.0);
    glRotatef((GLfloat)ringfinger3, 0.0, 1.0, 0.0);
    glTranslatef(0.5, 0.0, 0.0);

    glPushMatrix();
    glScalef(0.8, 0.4, 0.5);
    glutWireCube(1.0);
    glPopMatrix();
glPopMatrix();

glPushMatrix();
    // littlefinger1
    glTranslatef(0.85, 0.8, 0.0);
    glRotatef((GLfloat)littlefinger1, 0.0, 1.0, 0.0);
    glTranslatef(0.5, 0.0, 0.0);

    glPushMatrix();
    glScalef(0.7, 0.4, 0.5);
    glutWireCube(1.0);
    glPopMatrix();
    
    // littlefinger2
    glTranslatef(0.2, 0.0, 0.0);
    glRotatef((GLfloat)littlefinger2, 0.0, 1.0, 0.0);
    glTranslatef(0.5, 0.0, 0.0);

    glPushMatrix();
    glScalef(0.7, 0.4, 0.5);
    glutWireCube(1.0);
    glPopMatrix();

    // littlefinger3
    glTranslatef(0.2, 0.0, 0.0);
    glRotatef((GLfloat)littlefinger3, 0.0, 1.0, 0.0);
    glTranslatef(0.5, 0.0, 0.0);

    glPushMatrix();
    glScalef(0.7, 0.4, 0.5);
    glutWireCube(1.0);
    glPopMatrix();
glPopMatrix();

    
    glPopMatrix();
    glutSwapBuffers();
}

void reshape(int w, int h) {
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(65.0, (GLfloat)w / (GLfloat)h, 1.0, 20.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.0, 0.0, -5.0);
}

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
        case '1':
            elbow = (elbow + 5) % 360;
            glutPostRedisplay();
            break;
        case '2':
            elbow = (elbow - 5) % 360;
            glutPostRedisplay();
            break;
        case '3':
            palm = (palm + 5) % 360;
            glutPostRedisplay();
            break;
        case '4':
            palm = (palm - 5) % 360;
            glutPostRedisplay();
            break;
        case 'q':
            thumb1 = (thumb1 + 5) % 360;
            glutPostRedisplay();
            break;
        case 'Q':
            thumb1 = (thumb1 - 5) % 360;
            glutPostRedisplay();
            break;
        case 'w':
            thumb2 = (thumb2 + 5) % 360;
            glutPostRedisplay();
            break;
        case 'W':
            thumb2 = (thumb2 - 5) % 360;
            glutPostRedisplay();
            break;
        case 'e':
            indexfinger1 = (indexfinger1 + 5) % 360;
            glutPostRedisplay();
            break;
        case 'E':
            indexfinger1 = (indexfinger1 - 5) % 360;
            glutPostRedisplay();
            break;
        case 'r':
            indexfinger2 = (indexfinger2 + 5) % 360;
            glutPostRedisplay();
            break;
        case 'R':
            indexfinger2 = (indexfinger2 - 5) % 360;
            glutPostRedisplay();
            break;
        case 't':
            indexfinger3 = (indexfinger3 + 5) % 360;
            glutPostRedisplay();
            break;
        case 'T':
            indexfinger3 = (indexfinger3 - 5) % 360;
            glutPostRedisplay();
            break;
        case 'y':
            middlefinger1 = (middlefinger1 + 5) % 360;
            glutPostRedisplay();
            break;
        case 'Y':
            middlefinger1 = (middlefinger1 - 5) % 360;
            glutPostRedisplay();
            break;
        case 'u':
            middlefinger2 = (middlefinger2 + 5) % 360;
            glutPostRedisplay();
            break;
        case 'U':
            middlefinger2 = (middlefinger2 - 5) % 360;
            glutPostRedisplay();
            break;
        case 'i':
            middlefinger3 = (middlefinger3 + 5) % 360;
            glutPostRedisplay();
            break;
        case 'I':
            middlefinger3 = (middlefinger3 - 5) % 360;
            glutPostRedisplay();
            break;
        case 'o':
            ringfinger1 = (ringfinger1 + 5) % 360;
            glutPostRedisplay();
            break;
        case 'O':
            ringfinger1 = (ringfinger1 - 5) % 360;
            glutPostRedisplay();
            break;
        case 'p':
            ringfinger2 = (ringfinger2 + 5) % 360;
            glutPostRedisplay();
            break;
        case 'P':
            ringfinger2 = (ringfinger2 - 5) % 360;
            glutPostRedisplay();
            break;
        case 'a':
            ringfinger3 = (ringfinger3 + 5) % 360;
            glutPostRedisplay();
            break;
        case 'A':
            ringfinger3 = (ringfinger3 - 5) % 360;
            glutPostRedisplay();
            break;
        case 's':
            littlefinger1 = (littlefinger1 + 5) % 360;
            glutPostRedisplay();
            break;
        case 'S':
            littlefinger1 = (littlefinger1 - 5) % 360;
            glutPostRedisplay();
            break;
        case 'd':
            littlefinger2 = (littlefinger2 + 5) % 360;
            glutPostRedisplay();
            break;
        case 'D':
            littlefinger2 = (littlefinger2 - 5) % 360;
            glutPostRedisplay();
            break;
        case 'f':
            littlefinger3 = (littlefinger3 + 5) % 360;
            glutPostRedisplay();
            break;
        case 'F':
            littlefinger3 = (littlefinger3 - 5) % 360;
            glutPostRedisplay();
            break;
        case 27: // ESC key
            exit(0);
            break;
        default:
            break;
    }
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(700, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow(argv[0]);

    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMainLoop();

    return 0;
}
