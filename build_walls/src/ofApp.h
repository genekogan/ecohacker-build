#pragma once

#include "ofMain.h"
#include "ofxSecondWindow.h"
#include "Parameter.h"
#include "Canvas.h"
#include "ProjectionMapping.h"
#include "Projects.h"


enum BuildType { VJ, JON, ANNE, CHAOZZA };



class ofApp : public ofBaseApp
{
public:
    void setup();
    void update();
    void draw();
    void keyPressed(int key);
    void mousePressed(int x, int y, int button);
    
private:
    ProjectionMapping mapping;
    ofxSecondWindow gfx;

    Canvas canvas[4];

    BuildType type = JON;
    
    ProjectAnne *anne1, *anne2;
    ProjectChaozza *terri1, *terri2, *terri3, *terri4;
    ProjectJon *jon1, *jon2, *jon3, *jon4;
    
    int timer = 25;
    int last;
    bool playing = false;
    
    
    bool debugAll = false;
};


// screen: 5120 x 1024

