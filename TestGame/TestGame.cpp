
#include <QtWidgets\qapplication.h>
#include <QtWidgets\qwidget.h>
#include "MyGlWindow.h"


int main(int argc, char* argv[]){

	//This here just opens up a command line when run using
	//	return application.exec();
	QApplication application(argc, argv);
 
	//This opens a GUI window.
	//QWidget myWidget;
	//myWidget.show();

	MyGlWindow myGlWindow;
	myGlWindow.show();

	//First thing is to draw a triangle.
	// coordinates are going to be:
	//(0,0), (1,0), (0.5, 1)
	//openGL has a right handed coordinate system.

	return application.exec();
}
