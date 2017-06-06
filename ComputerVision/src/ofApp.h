#pragma once

#include "ofMain.h"
#include "ofxOpenCv.h"
#include "ofxKinect.h"
#include "ofxLeapMotion2.h"

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
    void exit();
    
        //methods for the meshes
        void drawPointCloud();
        void drawLineCloud();
        void drawCloud();
        void drawTri();
        void drawTriFan();
        void drawLineStrip();
        void drawTriPoint();
    
    ofEasyCam cam;

    
    ofxKinect kinect;
    
    
    ofxCvColorImage colorImg;
    
    ofxCvGrayscaleImage grayImage; // grayscale depth image
    ofxCvGrayscaleImage grayThreshNear; // the near thresholded image
    ofxCvGrayscaleImage grayThreshFar; // the far thresholded image
    
    ofxCvContourFinder contourFinder;
    
    
    bool bThreshWithOpenCV;
    bool bDrawPointCloud;
    bool bDrawLineCloud;
    bool bDrawCloud;
    bool bDrawTri;
    bool bDrawTriFan;
    bool bDrawLineStrip;
    bool bDrawTriPoint;
    
    int nearThreshold;
    int farThreshold;
    
    //used to change the angle of the kinect
    int angle;
    
    // used for viewing the clouds
    ofEasyCam easyCam;
    bool isKey1 = true;
    bool isKey2 = false;
    bool isKey3 = false;
    bool isKey4 = false;
    bool isKey5 = false;
    bool isKey6 = false;
    bool isKey7 = false;
    bool isKey8 = false;
    bool isKey9 = false;
    
    ofxLeapMotion leap;
    vector <ofxLeapMotionSimpleHand> simpleHands;
    
    vector <int> fingersFound;
};
