#include "ofApp.h"

//--------
void ofApp::setup(){
    ofBackground(0);
    
    gfx.setup("gfx", 40, 20, 1280, 800, false);
    
    canvas.setup(1024, 768);
    canvas.addModifiers(2);
    
    mapping = new ofxMtlMapping2D();
    mapping->init(ofGetWidth(), ofGetHeight(), "mapping/xml/shapes.xml", "mapping/controls/mapping.xml");

}

//--------
void ofApp::update(){
    canvas.update();
    mapping->update();
}

//--------
void ofApp::draw(){

    mapping->bind();
    
    canvas.draw(0, 0);
    
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
        canvas.setGuiVisible(false);
    }
    else if (key=='2') {
        canvas.setGuiVisible(true);
    }
}