#include <GL/glut.h>
#include <cmath>

// Fungsi untuk menggambar lingkaran sebagai roda
void drawCircle(float cx, float cy, float r, int num_segments) {
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx, cy);
    for (int i = 0; i <= num_segments; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);
        float x = r * cosf(theta);
        float y = r * sinf(theta);
        glVertex2f(cx + x, cy + y);
    }
    glEnd();
}

// Fungsi untuk menggambar garis-garis velg roda
void drawWheelLines(float cx, float cy, float r, int numSpokes) {
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_LINES);
    for (int i = 0; i < numSpokes; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(numSpokes);
        float x = r * cosf(theta);
        float y = r * sinf(theta);
        glVertex2f(cx, cy);
        glVertex2f(cx + x, cy + y);
    }
    glEnd();
}

// Fungsi untuk menggambar roda dengan velg
void drawWheel(float cx, float cy, float r) {
    glColor3f(0.0f, 0.0f, 0.0f);
    drawCircle(cx, cy, r, 30);
    drawWheelLines(cx, cy, r, 8);
}

// Fungsi untuk menggambar knalpot
void drawExhaust() {
    glColor3f(0.5f, 0.5f, 0.5f);
    glBegin(GL_QUADS);
    glVertex2f(-0.65f, -0.05f);
    glVertex2f(-0.58f, -0.05f);
    glVertex2f(-0.58f, -0.08f);
    glVertex2f(-0.65f, -0.08f);
    glEnd();
}

// Fungsi untuk menggambar lampu
void drawSemiCircle(float cx, float cy, float r, int num_segments) {
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx, cy);
    for (int i = 0; i <= num_segments; i++) {
        float theta = 3.1415926f * float(i) / float(num_segments); // Setengah lingkaran
        float x = r * cosf(theta);
        float y = r * sinf(theta);
        glVertex2f(cx + x, cy + y);
    }
    glEnd();
}

// Fungsi untuk menggambar mobil
void drawCar() {
    glPushMatrix();
    
    // Badan mobil
    glColor3f(0.3137f, 0.2941f, 0.2196f);
    glBegin(GL_QUADS);
    glVertex2f(-0.6f, -0.1f);
    glVertex2f(0.6f, -0.1f);
    glVertex2f(0.6f, 0.1f);
    glVertex2f(-0.6f, 0.1f);
    glEnd();
    
    // Atap mobil
    glColor3f(0.7255f, 0.6980f, 0.5412f);
    glBegin(GL_QUADS);
    glVertex2f(-0.38f, 0.1f);
    glVertex2f(0.22f, 0.1f);
    glVertex2f(0.17f, 0.2f);
    glVertex2f(-0.33f, 0.2f);
    glEnd();
    
    // Jendela kiri
    glColor3f(0.7f, 0.9f, 1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.36f, 0.12f);
    glVertex2f(-0.1f, 0.12f);
    glVertex2f(-0.1f, 0.18f);
    glVertex2f(-0.31f, 0.18f);
    glEnd();
    
    // Jendela kanan
    glColor3f(0.7f, 0.9f, 1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.06f, 0.12f);
    glVertex2f(0.2f, 0.12f);
    glVertex2f(0.15f, 0.18f);
    glVertex2f(-0.06f, 0.18f);
    glEnd();
    
    // Pintu kiri
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.38f, -0.09f);
    glVertex2f(-0.08f, -0.09f);
    glVertex2f(-0.08f, 0.1f);
    glVertex2f(-0.38f, 0.1f);
    glEnd();
    
    // Pintu kanan
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.08f, -0.09f);
    glVertex2f(0.22f, -0.09f);
    glVertex2f(0.22f, 0.1f);
    glVertex2f(-0.08f, 0.1f);
    glEnd();
    
    // Gagang pintu kiri  
    glColor3f(0.9216f, 0.8980f, 0.7608f);
    glBegin(GL_QUADS);
    glVertex2f(-0.17f, 0.07f);
    glVertex2f(-0.13f, 0.07f);
    glVertex2f(-0.13f, 0.06f);
    glVertex2f(-0.17f, 0.06f);
    glEnd();
    
    // Gagang pintu kanan    
    glColor3f(0.9216f, 0.8980f, 0.7608f);
    glBegin(GL_QUADS);
    glVertex2f(-0.03f, 0.07f);
    glVertex2f(0.01f, 0.07f);
    glVertex2f(0.01f, 0.06f);
    glVertex2f(-0.03f, 0.06f);
    glEnd();
    
    // Roda belakang
    glPushMatrix();
    glTranslatef(-0.45f, -0.14f, 0.0f);
    drawWheel(0.0f, 0.0f, 0.07f);
    glPopMatrix();
    
    // Roda depan
    glPushMatrix();
    glTranslatef(0.45f, -0.14f, 0.0f);
    drawWheel(0.0f, 0.0f, 0.07f);
    glPopMatrix();
    
	// Lampu depan
	glPushMatrix();
	glTranslatef(0.6f, 0.05f, 0.0f); // Pindahkan ke posisi lampu
	glRotatef(-90.0f, 0.0f, 0.0f, 1.0f); // Rotasi 90 derajat searah jarum jam
	glColor3f(1.0f, 1.0f, 0.0f); // Warna kuning
	drawSemiCircle(0.0f, 0.0f, 0.03f, 20); // Gambar setengah lingkaran
	glPopMatrix();

    // Knalpot
    drawExhaust();
    
    glPopMatrix();
}

// Fungsi display untuk menggambar mobil
void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    
    drawCar();
    
    glutSwapBuffers();
}

// Fungsi untuk mengatur tampilan awal
void init() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-0.7, 0.7, -0.3, 0.3);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("2D Car");
    
    init();
    glutDisplayFunc(display);
    
    glutMainLoop();
    return 0;
}
