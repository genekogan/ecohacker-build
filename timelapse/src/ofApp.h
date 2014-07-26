#pragma once

#include "ofMain.h"

#include "ofxEdsdk.h"

class ofApp : public ofBaseApp
{
public:
	void setup();
	void update();
	void draw();
	void keyPressed(int key);
	
	ofxEdsdk::Camera camera;
    
    int frameRate = 30;
    int interval = 10;  // sec
    
    int last;
};
