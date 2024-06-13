#include <GL/glut.h>
#include <iostream>
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

GLuint textureUbin;
GLuint textureDinding;
GLuint textureBingkai;
GLuint textureKaca;
GLuint texturePintu;
GLuint textureKarpet;
GLuint textureMeja;
GLuint textureLemari;
GLuint textureKasur;
GLuint textureBantal;
GLuint textureSelimut;
GLuint textureRanjang;
GLfloat light_position[] = { 2.0f, 5.0f, 5.0f, 1.0f }; // Variabel global untuk posisi cahaya

// Fungsi untuk memuat tekstur dari file
GLuint loadTexture(const char* filename) {
    GLuint textureID;
    glGenTextures(1, &textureID);
    glBindTexture(GL_TEXTURE_2D, textureID);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    int width, height, nrChannels;
    unsigned char* data = stbi_load(filename, &width, &height, &nrChannels, 0);
    if (data) {
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
        stbi_image_free(data);
    } else {
        std::cout << "Failed to load texture: " << filename << std::endl;
    }
    return textureID;
}


// Implementasi fungsi untuk menerapkan dan menonaktifkan tekstur
void applyTexture(GLuint textureID) {
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, textureID);
}

void disableTexture() {
    glDisable(GL_TEXTURE_2D);
}

// Implementasi fungsi untuk menggambar kubus dengan tekstur
void drawCubeWithTexture(float width, float height, float depth) {
    glBegin(GL_QUADS);

    // Front face
    glTexCoord2f(0.0f, 0.0f); glVertex3f(-width / 2, -height / 2,  depth / 2);
    glTexCoord2f(1.0f, 0.0f); glVertex3f( width / 2, -height / 2,  depth / 2);
    glTexCoord2f(1.0f, 1.0f); glVertex3f( width / 2,  height / 2,  depth / 2);
    glTexCoord2f(0.0f, 1.0f); glVertex3f(-width / 2,  height / 2,  depth / 2);

    // Back face
    glTexCoord2f(0.0f, 0.0f); glVertex3f(-width / 2, -height / 2, -depth / 2);
    glTexCoord2f(1.0f, 0.0f); glVertex3f( width / 2, -height / 2, -depth / 2);
    glTexCoord2f(1.0f, 1.0f); glVertex3f( width / 2,  height / 2, -depth / 2);
    glTexCoord2f(0.0f, 1.0f); glVertex3f(-width / 2,  height / 2, -depth / 2);

    // Top face
    glTexCoord2f(0.0f, 0.0f); glVertex3f(-width / 2,  height / 2, -depth / 2);
    glTexCoord2f(1.0f, 0.0f); glVertex3f( width / 2,  height / 2, -depth / 2);
    glTexCoord2f(1.0f, 1.0f); glVertex3f( width / 2,  height / 2,  depth / 2);
    glTexCoord2f(0.0f, 1.0f); glVertex3f(-width / 2,  height / 2,  depth / 2);

    // Bottom face
    glTexCoord2f(0.0f, 0.0f); glVertex3f(-width / 2, -height / 2, -depth / 2);
    glTexCoord2f(1.0f, 0.0f); glVertex3f( width / 2, -height / 2, -depth / 2);
    glTexCoord2f(1.0f, 1.0f); glVertex3f( width / 2, -height / 2,  depth / 2);
    glTexCoord2f(0.0f, 1.0f); glVertex3f(-width / 2, -height / 2,  depth / 2);

    // Right face
    glTexCoord2f(0.0f, 0.0f); glVertex3f( width / 2, -height / 2, -depth / 2);
    glTexCoord2f(1.0f, 0.0f); glVertex3f( width / 2, -height / 2,  depth / 2);
    glTexCoord2f(1.0f, 1.0f); glVertex3f( width / 2,  height / 2,  depth / 2);
    glTexCoord2f(0.0f, 1.0f); glVertex3f( width / 2,  height / 2, -depth / 2);

    // Left face
    glTexCoord2f(0.0f, 0.0f); glVertex3f(-width / 2, -height / 2, -depth / 2);
    glTexCoord2f(1.0f, 0.0f); glVertex3f(-width / 2, -height / 2,  depth / 2);
    glTexCoord2f(1.0f, 1.0f); glVertex3f(-width / 2,  height / 2,  depth / 2);
    glTexCoord2f(0.0f, 1.0f); glVertex3f(-width / 2,  height / 2, -depth / 2);

    glEnd();
}


// Implementasi fungsi untuk menggambar objek-objek dengan tekstur

void karpet() {
	applyTexture(textureKarpet);
    glColor3d(1.0, 1.0, 1.0);
	
    glPushMatrix();
        glTranslated(0.0, -12.8, -20.0); 
        glScaled(10.0, 0.0, 8.0);
        drawCubeWithTexture(10, 10, 10);
    glPopMatrix();

    disableTexture();
}


void ubin() {
    applyTexture(textureUbin);
    glColor3d(1.0, 1.0, 1.0);

    glPushMatrix();
        glTranslated(0.0, -14.0, -20.0);
        glScaled(12.0, 0.2, 10.0);
        drawCubeWithTexture(10, 10, 10);
    glPopMatrix();

    disableTexture();
}

void bingkai() {
	applyTexture(textureBingkai);
    glColor3d(1.0, 1.0, 1.0);
	
    glPushMatrix(); //atas
        glTranslated(-37.0, 46.0, -69.5);
        glScaled(1.4, 0.1, 0.2);
        drawCubeWithTexture(10, 10, 10);
    glPopMatrix();
    
    glPushMatrix(); //bawah
        glTranslated(-37.0, 32.0, -69.5);
        glScaled(1.4, 0.1, 0.2);
        drawCubeWithTexture(10, 10, 10);
    glPopMatrix();
    
    glPushMatrix(); //kiri
        glTranslated(-44.0, 39.0, -69.5);
        glScaled(0.1, 1.4, 0.2);
        drawCubeWithTexture(10, 10, 10);
    glPopMatrix();
    
    glPushMatrix(); //kanan
        glTranslated(-30.0, 39.0, -69.5);
        glScaled(0.1, 1.4, 0.2);
        drawCubeWithTexture(10, 10, 10);
    glPopMatrix();
    
    disableTexture();
}

void kaca(){
	applyTexture(textureKaca);
    glColor3d(1.0, 1.0, 1.0);
    
	glPushMatrix();
        glTranslated(-37.0, 39.0, -69.5);
        glScaled(1.4, 1.4, 0.1);
        drawCubeWithTexture(10, 10, 10);
    glPopMatrix();
    
    disableTexture();
}

void dindingKiri() {
    applyTexture(textureDinding);
    
    glPushMatrix();
        glTranslated(-61.0, 25.0, -20.0);
        glScaled(0.10, 8.0, 10.0);
        drawCubeWithTexture(10, 10, 10);
    glPopMatrix();
    
    disableTexture();
}

void pintu() {
    applyTexture(texturePintu);
    glColor3d(1.0, 1.0, 1.0);

    // panel pintu utama
    glPushMatrix();
        glTranslated(61.0, 15.8, -40.0);
        glScalef(0.160, 5.8, 3.0);
        drawCubeWithTexture(10, 10, 10);
    glPopMatrix();

    // tepi kiri pintu (dekat gagang pintu)
    glPushMatrix();
        glTranslatef(61.0, 15.8, -56.5);
        glScalef(0.2, 5.8, 0.25);
        drawCubeWithTexture(10, 10, 10);
    glPopMatrix();

    // tepi kanan pintu (jauh dari gagang pintu)
    glPushMatrix();
        glTranslatef(61.0, 15.8, -23.5);
        glScalef(0.2, 5.8, 0.25);
        drawCubeWithTexture(10, 10, 10);
    glPopMatrix();

    // tepi atas pintu
    glPushMatrix();
        glTranslatef(61.0, 44.0, -40.0);
        glScalef(0.2, 0.3, 3.5);
        drawCubeWithTexture(10, 10, 10);
    glPopMatrix();

    // gagang pintu
    glColor3d(0.75, 0.59, 0.4);
    glPushMatrix();
        glTranslatef(61.0, 14.5, -50.0);
        glScalef(4.0, 6.0, 10.0);
        glutSolidSphere(0.3, 25, 25);
    glPopMatrix();

    disableTexture();
}


void dindingKanan() {
    applyTexture(textureDinding);

    glPushMatrix();
        glTranslatef(61.0, 25.0, -20.0); 
        glScalef(0.10, 8.0, 10.0);
        drawCubeWithTexture(10, 10, 10);
    glPopMatrix();

    disableTexture();
}


void dindingBelakang() {
    applyTexture(textureDinding);

    glPushMatrix();
        glTranslated(0.0, 25.0, -71.0);
        glScaled(12.3, 8.0, 0.2);
        drawCubeWithTexture(10, 10, 10);
    glPopMatrix();

    disableTexture();
}


void dinding() {
    glColor3d(1.0, 1.0, 1.0);
    
    glPushMatrix();
        dindingKiri();
    glPopMatrix();

    glPushMatrix();
        dindingKanan();
    glPopMatrix();

    glPushMatrix();
        dindingBelakang();
    glPopMatrix();
}

void kasur() {
	applyTexture(textureKasur);
    glColor3d(1.0, 1.0, 1.0);

    glPushMatrix();
        glTranslated(-25.0, -1.5, 0.0);
        glScaled(4.6, 0.1, 3.6);
        drawCubeWithTexture(10, 10, 10);
    glPopMatrix();
    
    disableTexture();
}

void bantal() {
	applyTexture(textureBantal);
    glColor3d(1.0, 1.0, 1.0);
    
    glPushMatrix();
        glTranslated(-40.0, -1.0, 0.0);
        glScaled(1.0, 0.5, 2.0);
        drawCubeWithTexture(10, 10, 10);
    glPopMatrix();
    
    disableTexture();
}

void selimut() {
	applyTexture(textureSelimut);
    glColor3d(1.0, 1.0, 1.0);

    glPushMatrix();
        glTranslated(-18.0, -1.0, 0.0);
        glScaled(3.1, 0.1, 3.5);
        drawCubeWithTexture(10, 10, 10);
    glPopMatrix();
    
    disableTexture();
}

void ranjang() {
	applyTexture(textureRanjang);
    glColor3d(1.0, 1.0, 1.0);
    
    glPushMatrix(); //Kotak kasur
        glTranslated(-25.0, -7.5, 0.0);
        glScaled(5.0, 1.0, 4.0);
       drawCubeWithTexture(10, 10, 10);
    glPopMatrix();

    glPushMatrix(); //Kaki sekaligus sandaran kasur
        glTranslated(-49.0, -4.0, 0.0);
        glScaled(0.1, 2.0, 4.0);
        drawCubeWithTexture(10, 10, 10);
    glPopMatrix();

    glPushMatrix(); //alas kasur
        glTranslated(-25.0, -2.5, 0.0);
        glScaled(4.6, 0.1, 3.6);
        glutSolidCube(10);
    glPopMatrix();
    
    disableTexture();
}

void mejaBelajar() {
	applyTexture(textureMeja);
    glColor3d(1.0, 1.0, 1.0);
    
    glPushMatrix(); //alas meja
        glTranslated(45.0, 7.5, 7.0);
        glScaled(2.5, 0.2, 4.4);
        drawCubeWithTexture(10, 10, 10);
    glPopMatrix();

    glPushMatrix(); //kaki meja bagian belakang
        glTranslated(56.5, -2.5, -14.0);
        glScaled(0.2, 2.0, 0.2);
        drawCubeWithTexture(10, 10, 10);
    glPopMatrix();

    glPushMatrix();
        glTranslated(33.5, -2.5, -14.0);
        glScaled(0.2, 2.0, 0.2);
        drawCubeWithTexture(10, 10, 10);
    glPopMatrix();

    glPushMatrix();
        glTranslated(45.0, -2.5, 18.0);
        glScaled(2.5, 2.0, 2.2);
        drawCubeWithTexture(10, 10, 10);
    glPopMatrix();

    glPushMatrix();
        glTranslated(32.5, -2.5, 18.0);
        glScaled(0.05, 1.7, 1.9);
        drawCubeWithTexture(10, 10, 10);
    glPopMatrix();
    
    disableTexture();
}

void lemari() {
	applyTexture(textureLemari);
    glColor3d(1.0, 1.0, 1.0);
    
    glPushMatrix();
        glTranslated(-42.0, 1.0, -48.0);
        glScaled(1.5, 3.0, 4.0);
        drawCubeWithTexture(10, 10, 10);
    glPopMatrix();

    glColor3d(0.6, 0.6, 0.6); // membuat warna pintu lemari menjadi keabuan
	glPushMatrix();
        glTranslated(-41.0, 8.0, -48.0);
        glScaled(1.5, 1.3, 3.8);
        drawCubeWithTexture(10, 10, 10); 
    glPopMatrix();

    glPushMatrix();
        glTranslated(-41.0, -6.0, -48.0);
        glScaled(1.5, 1.2, 3.7);
        drawCubeWithTexture(10, 10, 10);
    glPopMatrix();
    
    disableTexture();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    
    // update posisi cahaya sebelum menggambar objek
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glPushMatrix();
        ubin();
    glPopMatrix();

    glPushMatrix();
        dinding();
    glPopMatrix();
    
    glPushMatrix();
        bingkai();
    glPopMatrix();
    
    glPushMatrix();
        kaca();
    glPopMatrix();

    glPushMatrix();
        pintu();
    glPopMatrix();
    
    glPushMatrix();
    	glTranslated(-9.0, 0.0, 8.0);
        kasur();
    glPopMatrix();
    
    glPushMatrix();
    	glTranslated(-9.0, 0.0, 8.0);
        ranjang();
    glPopMatrix();
    
    glPushMatrix();
    	glTranslated(-9.0, 0.0, 8.0);
        bantal();
    glPopMatrix();
    
    glPushMatrix();
    	glTranslated(-9.0, 0.0, 8.0);
        selimut();
    glPopMatrix();
    
    glPushMatrix();
    	glTranslated(-44.0, 0.0, -10.0);
        glRotatef(90.0, 0.0, 1.0, 0.0);
        mejaBelajar();
    glPopMatrix();
    
    glPushMatrix();
        glTranslated(10.0, 0.0, -40.0);
        glRotatef(180.0, 0.0, 1.0, 0.0);
		lemari();
    glPopMatrix();
    
    glPushMatrix();
        karpet();
    glPopMatrix();

    glFlush();
    glutSwapBuffers();
}


void init() {
    glClearColor(0.2, 0.2, 0.2, 1.0);
    
    const GLfloat light_ambient[] = { 0.1f, 0.1f, 0.1f, 1.0f };
    const GLfloat light_diffuse[] = { 0.75f, 0.75f, 0.75f, 1.0f };
    const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };

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
    glLightfv(GL_LIGHT0, GL_POSITION, light_position); // menggunakan variabel global untuk posisi cahaya

    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
    
    // Load textures
    textureUbin = loadTexture("tekstur/keramik.jpg");
    textureDinding = loadTexture("tekstur/dinding.jpg");
    textureBingkai = loadTexture("tekstur/kayu.jfif");
    textureKaca = loadTexture("tekstur/photo.jpg");
    texturePintu = loadTexture("tekstur/kayu2.jpg");
    textureKarpet = loadTexture("tekstur/karpetbulu.jpg");
    textureMeja = loadTexture("tekstur/kayu.jfif");
    textureLemari = loadTexture("tekstur/lemari.png");
    textureKasur = loadTexture("tekstur/kasur.jpg");
    textureBantal = loadTexture("tekstur/kain.jpg");
    textureSelimut = loadTexture("tekstur/kain.jpg");
    textureRanjang = loadTexture("tekstur/kayu2.jpg");
}

void reshape(int w, int h) {
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (double)w / (double)h, 1.0, 400.0);
    glTranslated(0.0, -45.0, -100.0);
    gluLookAt(0.0, 0.0, 100.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
    glMatrixMode(GL_MODELVIEW);
}

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
        case 'w':
        case 'W':
            glRotatef(-3.0, 1.0, 0.0, 0.0);
            break;
        case 's':
        case 'S':
            glRotatef(3.0, 1.0, 0.0, 0.0);
            break;
        case 'a':
        case 'A':
            glRotatef(-3.0, 0.0, 1.0, 0.0);
            break;
        case 'd':
        case 'D':
            glRotatef(3.0, 0.0, 1.0, 0.0);
            break;
        case 'q':
        case 'Q':
            glRotatef(-3.0, 0.0, 0.0, 1.0);
            break;
        case 'e':
        case 'E':
            glRotatef(3.0, 0.0, 0.0, 1.0);
            break;
        default:
            break;
    }
    glutPostRedisplay();
}

void specialKeys(int key, int x, int y) {
    switch (key) {
        case GLUT_KEY_UP:
            light_position[1] += 1.0f; // Geser cahaya ke atas
            break;
        case GLUT_KEY_DOWN:
            light_position[1] -= 1.0f; // Geser cahaya ke bawah
            break;
        case GLUT_KEY_LEFT:
            light_position[0] -= 1.0f; // Geser cahaya ke kiri
            break;
        case GLUT_KEY_RIGHT:
            light_position[0] += 1.0f; // Geser cahaya ke kanan
            break;
        default:
            break;
    }
    glutPostRedisplay();
}

void motion(int x, int y) {
    static int last_x = x;
    static int last_y = y;

    int delta_x = x - last_x;
    int delta_y = y - last_y;

    // sesuaikan tampilan berdasarkan gerakan mouse (misalnya, memutar tampilan)
    glRotatef(delta_x, 0.0, 1.0, 0.0); 
    glRotatef(delta_y, 1.0, 0.0, 0.0);

    last_x = x;
    last_y = y;

    glutPostRedisplay();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(250,50);
    glutCreateWindow("Kelompok 7 - Kamar Kos 3D");
    init(); // Inisialisasi OpenGL dan setting awal
    glutDisplayFunc(display); //merender tampilan
    glutReshapeFunc(reshape); //menanggapi perubahan ukuran jendela
    glutKeyboardFunc(keyboard); //menanggapi input keyboard
    glutMotionFunc(motion); //menanggapi gerakan mouse
    glutSpecialFunc(specialKeys);
    glutMainLoop(); // memulai loop utama GLUT
    return 0;
}
