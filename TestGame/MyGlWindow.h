//#pragma once //This acts as header guards, but doesnt work on all compilers.
#ifndef SANDBOX_MY_GL_WINDOW_H
#define SANDBOX_MY_GL_WINDOW_H
//#include <QtGui\qwindow.h>
#include <QtWidgets\qopenglwidget.h>

//inherits QGLWidget
//class MyGlWindow :public QWindow{
class MyGlWindow :public QOpenGLWidget{
	
	unsigned int vertexBufferID;

protected:
	void initializeGL();
	void paintGL();
};

#endif
