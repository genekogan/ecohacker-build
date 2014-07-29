#include "ofApp.h"

//--------
void ofApp::setup(){
    ofBackground(0);
    
    gfx.setup("gfx", ofGetScreenWidth(), 0, 1280, 800, true);
    
    //canvas.setup(1024, 768);
    //canvas.addModifiers(2);
    
    mapping = new ofxMtlMapping2D();
    mapping->init(ofGetWidth(), ofGetHeight(), "mapping/xml/shapes.xml", "mapping/controls/mapping.xml");


    bg.loadImage("jon_pictures/5_Roof Background.png");
    fg.loadImage("jon_pictures/5_Roof Foreground.png");
    
    bg.resize(1024, 768);
    fg.resize(1024, 768);
    
    mapping->bind();
    ofBackground(0);
    mapping->unbind();
    
}

//--------
void ofApp::update(){
    //canvas.update();
    mapping->update();
}

//--------
void ofApp::draw(){

    mapping->bind();
    
    //canvas.draw(0, 0);
    x10 += 0.15;
    x20 -= 0.17;
    int x1 = (int) x10 % 1024;
    int x2 = (int) x20 % 1024;

    bg.draw(x1, 0);
    bg.draw(x1-1024, 0);
    fg.draw(x2, 0);
    fg.draw(x2+1024, 0);
    
    mapping->unbind();

    gfx.begin();
    ofBackground(0);
    mapping->draw();
    
    ofSetColor(255);
    ofCircle(ofGetMouseX(), ofGetMouseY(), 30);
    
    gfx.end();
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
}


//--------
void ofApp::keyPressed(int key){
    if (key=='f') {
        ofToggleFullscreen();
    }
    else if (key=='1') {
       // canvas.setGuiVisible(false);
    }
    else if (key=='2') {
       // canvas.setGuiVisible(true);
    }
}