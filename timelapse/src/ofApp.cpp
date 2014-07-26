#include "ofApp.h"

void ofApp::setup() {
	ofSetVerticalSync(true);
	ofSetLogLevel(OF_LOG_VERBOSE);
    ofSetFrameRate(frameRate);
    last = 0;
	camera.setup();
}

void ofApp::update() {
	camera.update();
	if(camera.isFrameNew()) {
		// process the live view with camera.getLivePixels()
	}
	if(camera.isPhotoNew()) {
        string name = ofGetTimestampString("%Y-%m-%d-%H-%M-%S");
		camera.savePhoto(name+".jpg");
        cout << "saved " << name << endl;
	}
    
    // check if time to take a new photo
    int t = ofGetElapsedTimef();
    if (t > last + interval) {
        camera.takePhoto();
        last = t;
    }
}

void ofApp::draw() {
    ofBackground(0);
    ofSetColor(255);
    
	camera.draw(10, 40);
	
    if(camera.isLiveReady()) {
		stringstream status;
        status << camera.getWidth() << "x" << camera.getHeight() << " @ " <<
        (int) ofGetFrameRate() << " app-fps " << " / " <<
        (int) camera.getFrameRate() << " cam-fps";
		ofDrawBitmapString(status.str(), 10, 20);
	}
}

void ofApp::keyPressed(int key) {
	if(key == ' ') {
	}
}