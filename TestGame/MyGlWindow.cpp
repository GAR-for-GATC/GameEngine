
#include <GL\glew.h>
#include "MyGlWindow.h"


void MyGlWindow::initializeGL(){

	//easy way to render stuff is to use glew
	glewInit();

	glGenBuffers(1, &vertexBufferID); //this allocates memory for the graphics card
	glBindBuffer(GL_ARRAY_BUFFER, vertexBufferID);

	//draw a triangle
	float verts[] = {
		+0.0f, +0.0f,
		+0.0f, +1.0f,
		+1.0f, +0.5f
	};

	//Draws the triangle to the screen
	glBufferData(GL_ARRAY_BUFFER, sizeof(verts), verts, GL_STATIC_DRAW); 
}

void MyGlWindow::paintGL(){
	glClear(GL_COLOR_BUFFER_BIT); //clear the screen
	glEnableVertexAttribArray(0);
	glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, 0);
	glDrawArrays(GL_TRIANGLES, 0, 3); //draws stuff, start at 0, 3 verticies.
}