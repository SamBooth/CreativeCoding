#pragma once

#include "ofMain.h"
#include "ofxCvHaarFinder.h"

class ofApp : public ofBaseApp{
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    ofImage img;
    ofxCvHaarFinder finder;
    ofImage hair;
    ofImage stache;
    ofImage glasses;
    ofImage glasses2;
    ofImage glasses3;
    ofImage stache2;
    ofImage screen;
    
    bool isG = true;
    bool isG2 = false;
    bool isG3 = false;
    bool isS = true;
    bool isS2 = false;
    bool is = false;

    ofVideoGrabber grabber;
};
