//#pragma once //This acts as header guards, but doesnt work on all compilers.
#ifndef SANDBOX_MY_GL_WINDOW_H
#define SANDBOX_MY_GL_WINDOW_H
//#include <QtGui\qwindow.h>
#include <QtCore\qtimer.h>
#include <QtWidgets\qopenglwidget.h>

//inherits QGLWidget
//class MyGlWindow :public QWindow{
class MyGlWindow :public QOpenGLWidget{
	
	Q_OBJECT; //this declares a bunch of shit
	unsigned int vertexBufferID;
	QTimer myTimer;

protected:
	void initializeGL();
	void paintGL();
private slots:
	void myUpdate();
};

#endif
