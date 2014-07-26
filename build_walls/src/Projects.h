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
    vector<string> imgPaths;
    ofImage img;
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
