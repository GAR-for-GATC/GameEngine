
#include <GL\glew.h>
#include "MyGlWindow.h"

#include <iostream>
using std::cout;
using std::endl;

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

	//initialize the timer.  first you have to create a timer instance, 
	// then you need connect the timer to a 'slot'
	// then you have to start it, and set the interval before timeout
	// It will run timeout() at the end of the first interval, then
	// update() will be called after every interval?
	// A 'slot' is an event.
	connect(&myTimer, SIGNAL(timeout()), this, SLOT(myUpdate()));
	myTimer.start(0); //0ms interval

}

void MyGlWindow::paintGL(){
	glClear(GL_COLOR_BUFFER_BIT); //clear the screen
	glEnableVertexAttribArray(0);
	glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, 0);
	glDrawArrays(GL_TRIANGLES, 0, 3); //draws stuff, start at 0, 3 verticies.
}

void MyGlWindow::myUpdate(){

	cout << "cocks" << endl; //prints cocks forever.

}