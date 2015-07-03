//
//  main.cpp
//  TestOpenGL2
//
//  Created by shin on 7/10/14.
//  Copyright (c) 2014 shin. All rights reserved.
//

#include <stdio.h>
#include <time.h>
#include <GLUT/GLUT.h>


#define VERTICES     0
#define INDICES      1
#define NUM_BUFFERS  2
#define BUFFER_OFFSET(bytes)  ((GLubyte*) NULL + (bytes))

static int spin = 0.0;
static int windows_width = 400;
static int windows_height = 400;
static int test = 0;

float g_fps( void (*func)(void), int n_frame );
bool finish_without_update = false;

void myDisplay()
{
    test++;

    printf("myDisplay\n");
    glClearColor(1.0, 0.0, 0.0, 0.0);
//    glClearDepth(1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    
//    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
//    glRotatef(spin, 0.0, 0.0, 1.0);
    
    glColor3f(1.0, 1.0, 1.0);
//    glPolygonMode(GL_BACK, GL_FILL);
//    glEnable(GL_CULL_FACE);
//    glCullFace(GL_BACK);
    GLubyte fly[] = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x03, 0x80, 0x01, 0xC0, 0x06, 0xC0, 0x03, 0x60,
        0x04, 0x60, 0x06, 0x20, 0x04, 0x30, 0x0C, 0x20,
        0x04, 0x18, 0x18, 0x20, 0x04, 0x0C, 0x30, 0x20,
        0x04, 0x06, 0x60, 0x20, 0x44, 0x03, 0xC0, 0x22,
        0x44, 0x01, 0x80, 0x22, 0x44, 0x01, 0x80, 0x22,
        0x44, 0x01, 0x80, 0x22, 0x44, 0x01, 0x80, 0x22,
        0x44, 0x01, 0x80, 0x22, 0x44, 0x01, 0x80, 0x22,
        0x66, 0x01, 0x80, 0x66, 0x33, 0x01, 0x80, 0xCC,
        0x19, 0x81, 0x81, 0x98, 0x0C, 0xC1, 0x83, 0x30,
        0x07, 0xe1, 0x87, 0xe0, 0x03, 0x3f, 0xfc, 0xc0,
        0x03, 0x31, 0x8c, 0xc0, 0x03, 0x33, 0xcc, 0xc0,
        0x06, 0x64, 0x26, 0x60, 0x0c, 0xcc, 0x33, 0x30,
        0x18, 0xcc, 0x33, 0x18, 0x10, 0xc4, 0x23, 0x08,
        0x10, 0x63, 0xC6, 0x08, 0x10, 0x30, 0x0c, 0x08,
        0x10, 0x18, 0x18, 0x08, 0x10, 0x00, 0x00, 0x08};
//    glEnable(GL_POLYGON_STIPPLE);
//    glPolygonStipple(fly);
//    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
//    glBegin(GL_POLYGON);
//    glEdgeFlag(true);
//    glVertex3f(0.25*windows_width, 0.25*windows_height, 0.0);
//    glVertex3f(0.75*windows_width, 0.25*windows_height, 0.0);
//    glVertex3f(0.75*windows_width, 0.75*windows_height, 0.0);
//    glVertex3f(0.25*windows_width, 0.75*windows_height, 0.0);
//    glEnd();
//
//    glColor3f(1.0, 1.0, 0.0);
//    glRectf(-0.5f*windows_width, -0.5f*windows_height,
//            0.5*windows_width, 0.5*windows_height);
    
//    glColor3f(1.0, 1.0, 1.0);
//    glLineStipple(2, 0x3F07);//0011111100000111
//    glEnable(GL_LINE_STIPPLE);
//    glLineWidth(5);
//    glBegin(GL_LINES);
//    glVertex2f(0.25*windows_width, 0.25*windows_height);
//    glVertex2f(0.75*windows_width, 0.75*windows_height);
//    glEnd();
    
//    static GLint vertices[] = {25, 25,
//        100, 325,
//        175, 25,
//        175, 325,
//        250, 25,
//        325, 325};
//    static GLint vertices[] = {100, 100,
//        150, 150,
//        150, 350,
//        100, 300,
//        300, 100,
//        350, 150,
//        350, 350,
//        300, 300
//    };
//    static GLfloat colors[] = {1.0, 0.2, 0.2,
//        0.2, 0.2, 1.0,
//        0.8, 1.0, 0.2,
//        0.75, 0.75, 0.75,
//        0.35, 0.35, 0.35,
//        0.5, 0.5, 0.5};
    
//    glEnableClientState(GL_VERTEX_ARRAY);
//    glEnableClientState(GL_COLOR_ARRAY);
//    
//    glColorPointer(3, GL_FLOAT, 0, colors);
//    glVertexPointer(2, GL_INT, 0, vertices);
    
//    glBegin(GL_TRIANGLES);
//    glArrayElement(0);
//    glArrayElement(1);
//    glArrayElement(2);
//    glArrayElement(3);
//    glArrayElement(4);
//    glArrayElement(5);
//    glEnd();
    
//    static GLubyte allIndices[] = {0,1,2,3,4,5};
//    glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_BYTE, allIndices);
//    glDrawArrays(GL_TRIANGLES, 0, 6);
    
//    static GLubyte frontIndices[] = {4, 5, 6, 7};
//    static GLubyte rightIndices[] = {1, 2, 6, 5};
//    static GLubyte bottomIndices[] = {0, 1, 5, 4};
//    static GLubyte backIndices[] = {0, 3, 2, 1};
//    static GLubyte leftIndices[] = {0, 4, 7, 3};
//    static GLubyte topIndices[] = {2, 3, 7, 6};
//    glLineStipple(5, 0x3F07);
//    glEnable(GL_LINE_STIPPLE);
//    
//    glDrawElements(GL_LINE_STRIP, 4, GL_UNSIGNED_BYTE, frontIndices);
//    glDrawElements(GL_LINE_STRIP, 4, GL_UNSIGNED_BYTE, rightIndices);
//    glDrawElements(GL_LINE_STRIP, 4, GL_UNSIGNED_BYTE, bottomIndices);
//    glDrawElements(GL_LINE_STRIP, 4, GL_UNSIGNED_BYTE, backIndices);
//    glDrawElements(GL_LINE_STRIP, 4, GL_UNSIGNED_BYTE, leftIndices);
//    glDrawElements(GL_LINE_STRIP, 4, GL_UNSIGNED_BYTE, topIndices);
    
//    static GLubyte allIndices[] = {4, 5, 6, 7, 1, 2, 6, 5,
//        0, 1, 5, 4, 0, 3, 2, 1,
//        0, 4, 7, 3, 2, 3, 7, 6};
//    
//    glDrawElements(GL_QUADS, 24, GL_UNSIGNED_BYTE, allIndices);
    
    GLuint  buffers[NUM_BUFFERS];
    GLfloat vertices[][3] = {
        { -1.0, -1.0, -1.0 },
        {  1.0, -1.0, -1.0 },
        {  1.0,  1.0, -1.0 },
        { -1.0,  1.0, -1.0 },
        { -1.0, -1.0,  1.0 },
        {  1.0, -1.0,  1.0 },
        {  1.0,  1.0,  1.0 },
        { -1.0,  1.0,  1.0 }
    };
    GLubyte indices[][4] = {
        { 0, 1, 2, 3 },
        { 4, 7, 6, 5 },
        { 0, 4, 5, 1 },
        { 3, 2, 6, 7 },
        { 0, 3, 7, 4 },
        { 1, 5, 6, 2 }
    };
    
    glGenBuffers(NUM_BUFFERS, buffers);
    glBindBuffer(GL_ARRAY_BUFFER, buffers[VERTICES]);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices,
                 GL_STATIC_DRAW);
    glVertexPointer(3, GL_FLOAT, 0, BUFFER_OFFSET(0));
    glEnableClientState(GL_VERTEX_ARRAY);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, buffers[INDICES]);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices,GL_STATIC_DRAW);
    glDrawElements(GL_QUADS, 24, GL_UNSIGNED_BYTE,
                   BUFFER_OFFSET(0));

    glFlush();
    
    printf("myDisplay\n");
}

void spinDisplay()
{
    spin += 2.0;
    if (spin > 360.0)
    {
        spin -= 360.0;
    }
}

void mouse(int button, int state, int x, int y)
{
    printf("mouse:%d,%d,%d,%d\n", button, state, x, y);
    myDisplay();
}

void reshape(int w,int h)
{
    printf("reshape:%d,%d\n",w,h);
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, w, 0, h);
    
    windows_height = h;
    windows_width  = w;
}

void keyboard( unsigned char key, int x, int y )
{
    switch( key )
    {
        case 'F':
        case 'f':
            finish_without_update = true;
            printf( "%f fps\n", g_fps(myDisplay, 100) );
            finish_without_update = false;
            break;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello OpenGL\n");
    
    //Glut Init
    glutInit(&argc, (char**)argv);
    glutInitDisplayMode(GLUT_RGB| GLUT_SINGLE);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(windows_width, windows_height);
    
    //Create Windows
    glutCreateWindow("Hello OpenGL");
    //Setting display
    glutDisplayFunc(myDisplay);
    
    glutMouseFunc(mouse);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    
    //MainLoop
    glutMainLoop();
    
    return 0;
}

float g_fps( void (*func)(void), int n_frame )
{
    clock_t start, finish;
    int i;
    float fps;
    
    printf("Performing benchmark, please wait");
    start = clock();
    for( i=0; i<n_frame; i++ )
    {
        if( (i+1)%10==0 )
            printf(".");
        func();
    }
    printf("done\n");
    finish = clock();
    
    fps = float(n_frame)/(finish-start)*CLOCKS_PER_SEC;
    return fps;
}
