#pragma once

#include "ofMain.h"
#include "Scene.h"

class ProjectJon : public Scene
{
public:
    ProjectJon() {}
    void setup(int width, int height);
    void setImage(int idx);
    void update();
    void draw(int x, int y);
    void toggleIdx();
private:
    //vector<ofImage> img;
    ofImage w1_doorway;
    ofImage w2_strip1, w2_strip2, w2_strip3;
    ofImage w3_strip1, w3_strip2, w3_strip3, w3_strip4, w3_strip5, w3_strip6, w3_strip7, w3_strip8;
    ofImage w4_overlay, w4_piece1, w4_piece2, w4_piece3, w4_piece4, w4_piece5, w4_piece6, w4_piece7, w4_piece8, w4_piece9, w4_piece10, w4_scroll;
    
    float y10, y20, y30, y40;
    float x10, x20, x30, x40, x50, x60, x70, x80;
    ofPoint w41, w42, w43, w44, w45, w46, w47, w48, w49, w50;
    
    int idx;
};


struct Slide {
    Slide(string ip, string ts) {
        imagePath = ip;
        textString = ts;
    }
    string imagePath;
    string textString;
};

class ProjectAnne : public Scene
{
public:
    ProjectAnne() {}
    void setup(int width, int height);
    void setScreen(int idx);
    void update();
    void next();
    void back();
    void draw(int x, int y);
private:
    void loadImages1();
    void loadImages2();
    
    vector<Slide> slides;
    ofImage img;
    int idx = 0;
    
    float alpha = 0;
    int interval = 20;
    int time, last;
    bool isText;
    string text;
    
    ofTrueTypeFont font;
};

class ProjectChaozza : public Scene
{
public:
    ProjectChaozza() {}
    void setup(int width, int height);
    void setVideo(int idx);
    void update();
    void draw(int x, int y);
private:
    ofVideoPlayer player;
    ofImage img;
};


class ProjectIsabelle : public Scene
{
public:
    ProjectIsabelle() {}
    void setup(int width, int height);
    void setScreen(int theScreen);
    void setMode(int mode);
    void update();
    void next();
    void draw(int x, int y);
private:
    vector<Slide> slides;
    vector<string> imgPaths1, imgPaths2;
    vector<ofImage> imgs1, imgs2;

    ofVideoPlayer player;
    
    ofImage img;
    int idx = 0;
    
    int mode = 0;
    
    float alpha = 0;
    int interval = 20;
    int time, last;
    bool isText;
    string text;
    
    bool toUpdate = false;
    
    ofTrueTypeFont font;
};