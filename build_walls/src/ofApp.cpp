#include "ofApp.h"

//--------
void ofApp::setup(){
    ofBackground(0);
    
    gfx.setup("gfx", ofGetScreenWidth(), 0, 5120, 1024, true);
    mapping.setMouseResolution(gfx.getWidth(), gfx.getHeight());
    
    for (int i=0; i<4; i++) {
        mapping.addQuad(800, 600);
        canvas[i].setup(800, 600);
        ((DebugScreen *) canvas[i].getScene())->setIndex(i);
        canvas[i].addModifiers(1);
        canvas[i].setGuiVisible(false);
    }
    
    switch (type) {
        case JON:
            jon1 = new ProjectJon();
            jon1->setup(800, 600);
            jon1->setImage(3);
            jon2 = new ProjectJon();
            jon2->setup(800, 600);
            jon2->setImage(2);
            jon3 = new ProjectJon();
            jon3->setup(800, 600);
            jon3->setImage(0);
            jon4 = new ProjectJon();
            jon4->setup(800, 600);
            jon4->setImage(1);
            canvas[0].switchScene(jon1);
            canvas[1].switchScene(jon2);
            canvas[2].switchScene(jon3);
            canvas[3].switchScene(jon4);
            break;

        case ANNE:
            anne1 = new ProjectAnne();
            anne1->setScreen(0);
            anne2 = new ProjectAnne();
            anne2->setScreen(1);
            //canvas[0].switchScene(anne1);
            //canvas[1].switchScene(anne2);
            canvas[2].switchScene(anne1);
            canvas[3].switchScene(anne2);
            break;
            
        case ISABELLE:
            isabelle1 = new ProjectIsabelle();
            isabelle1->setScreen(0);
            isabelle2 = new ProjectIsabelle();
            isabelle2->setScreen(1);
            isabelle3 = new ProjectIsabelle();
            isabelle3->setScreen(2);
            isabelle4 = new ProjectIsabelle();
            isabelle4->setScreen(3);
            canvas[0].switchScene(isabelle1);
            canvas[1].switchScene(isabelle2);
            canvas[2].switchScene(isabelle3);
            canvas[3].switchScene(isabelle4);
            break;
            
        case CHAOZZA:
            terri1 = new ProjectChaozza();
            terri1->setVideo(0);
            terri2 = new ProjectChaozza();
            terri2->setVideo(1);
            terri3 = new ProjectChaozza();
            terri3->setVideo(2);
            terri4 = new ProjectChaozza();
            terri4->setVideo(3);
            canvas[0].switchScene(terri3);
            canvas[1].switchScene(terri4);
            canvas[2].switchScene(terri1);
            canvas[3].switchScene(terri2);
            break;
            
        default:
            break;
    }
    last = 0;
    
}

//--------
void ofApp::update(){
    for (int i=0; i<4; i++) {
        canvas[i].update();
    }
    
    if (playing) {
        int t = ofGetElapsedTimef();
        if (t - last > timer) {
            last = t;
            //anne1->next(); anne2->next();
            isabelle1->next(); isabelle2->next();
        }
    }
    
}

//--------
void ofApp::draw(){
    if(debugAll) {
        canvas[0].draw(0, 0);
        canvas[2].draw(800, 0);
    } else {

        gfx.begin();
        
        ofBackground(0);
        
        for (int i=0; i<4; i++) {
            mapping.begin(i);
            canvas[i].draw(0, 0);
            mapping.end(i);
        }
        
        //ofSetColor(255);//, l
        // adjust quads
        if (mapping.getDebug()) {
            ofCircle(ofMap(ofGetMouseX(), 0, ofGetWidth(), 0, 5120),
                     ofMap(ofGetMouseY(), 0, ofGetHeight(), 0, 1024),
                     20*sin(0.1*ofGetFrameNum()));
        }
        
        gfx.end();
    }
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
}


//--------
void ofApp::keyPressed(int key){
    if (key=='1') {
        mapping.toggleDebug();
    }
    else if (key=='2') {
        mapping.toggleSelectedQuad();
    }
    else if (key=='l') {
        mapping.loadPreset("quads.xml");
    }
    else if (key=='s') {
        mapping.savePreset("quads.xml");
    }
//    else if (key=='f') {
//        ofToggleFullscreen();
//    }
    
    // toggle canvas gui visibility
    else if (key=='q') {
        for (int i=0; i<4; i++) canvas[i].setGuiVisible(false);
        canvas[0].setGuiVisible(true);
    }
    else if (key=='w') {
        for (int i=0; i<4; i++) canvas[i].setGuiVisible(false);
        canvas[1].setGuiVisible(true);
    }
    else if (key=='e') {
        for (int i=0; i<4; i++) canvas[i].setGuiVisible(false);
        canvas[2].setGuiVisible(true);
    }
    else if (key=='r') {
        for (int i=0; i<4; i++) canvas[i].setGuiVisible(false);
        canvas[3].setGuiVisible(true);
    }
    
    
//    else if (key=='a')  { jon1->toggleIdx(); }
//    else if (key=='s')  { jon2->toggleIdx(); }
//    else if (key=='d')  { jon3->toggleIdx(); }
//    else if (key=='f')  { jon4->toggleIdx(); }

    else if (key=='a')  { isabelle1->next(); isabelle2->next(); isabelle3->next(); isabelle4->next(); }
    else if (key=='z')  { isabelle1->setMode(1); isabelle2->setMode(1); isabelle3->setMode(1); isabelle4->setMode(1); }
    else if (key=='x')  { isabelle1->setMode(2); isabelle2->setMode(2); isabelle3->setMode(2); isabelle4->setMode(2); }

    else if (key=='v') {
        jon1->setImage(1);
        jon2->setImage(0);
    }
    else if (key=='b') {
        jon1->setImage(3);
        jon2->setImage(2);
    }
//    else if (key=='p') { playing = !playing; }
}
