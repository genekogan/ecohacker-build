#pragma once

#include "ofMain.h"
//#include "ProjectionMapping.h"
//#include "ofxEdsdk.h"
#include "ofxSecondWindow.h"


class ofApp : public ofBaseApp
{
public:
	void setup();
	void update();
	void draw();
	void keyPressed(int key);
	
//	ofxEdsdk::Camera camera;
//    ProjectionMapping mapping;
//    ofxSecondWindow gfx;
};
