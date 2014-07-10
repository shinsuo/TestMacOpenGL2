//
//  main.cpp
//  TestOpenGL2
//
//  Created by shin on 7/10/14.
//  Copyright (c) 2014 shin. All rights reserved.
//

#include <stdio.h>
#include <GLUT/GLUT.h>

void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glRectf(-0.5f, -0.5f, 0.5, 0.5);
    glFlush();
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello OpenGL\n");
    
    //Glut Init
    glutInit(&argc, (char**)argv);
    glutInitDisplayMode(GLUT_RGB| GLUT_SINGLE);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(400, 400);
    
    //Create Windows
    glutCreateWindow("Hello OpenGL");
    //Setting display
    glutDisplayFunc(&myDisplay);
    //MainLoop
    glutMainLoop();
    
    return 0;
}
