#pragma once

#include "ofMain.h"
#include "Parameter.h"
#include "Canvas.h"
#include "ofxMtlMapping2D.h"
#include "ofxSecondWindow.h"


class ofApp : public ofBaseApp
{
public:
    void setup();
    void update();
    void draw();
    void keyPressed(int key);
    
    void mousePressed(int x, int y, int button);

private:
    Canvas canvas;
    ofxMtlMapping2D* mapping;
    ofxSecondWindow gfx;
};
