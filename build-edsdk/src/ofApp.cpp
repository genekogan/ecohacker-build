#include "ofApp.h"

void ofApp::setup() {
//    gfx.setup("gfx", ofGetScreenWidth()-300, 100, 5120, 1024, false);
   
//    gfx.setup("gfx", 100, 100, 1024, 768, false);
//    mapping.setMouseResolution(gfx.getWidth(), gfx.getHeight());

//    for (int i=0; i<4; i++) {
//        mapping.addQuad(800, 600);
//    }
}

void ofApp::update() {

//	camera.update();
//	if(camera.isFrameNew()) {
//		// process the live view with camera.getLivePixels()
//	}

}

void ofApp::draw() {
    ofBackground(0);
    ofSetColor(255);

    ofRect(100, 100, 200, 400);
    
    //gfx.begin();
    
    ofBackground(0);
    ofSetColor(255, 0, 0);

    
    for (int i=0; i<4; i++) {
//        mapping.begin(i);
        //camera.draw(0, 0, 800, 600);
        ofEllipse(400, 300, 200, 250);
  //      mapping.end(i);
    }
	//gfx.end();
    
}

void ofApp::keyPressed(int key) {
//    if (key=='1') {
//        mapping.toggleDebug();
//    }
//    else if (key=='2') {
//        mapping.toggleSelectedQuad();
//    }
//    else if (key=='l') {
//        mapping.loadPreset("quads.xml");
//    }
//    else if (key=='s') {
//        mapping.savePreset("quads.xml");
//    }
}