#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "ofxBullet.h"

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
    
    
    ofxFloatSlider setX;
    ofxFloatSlider setY;
    ofxFloatSlider R;
    ofxFloatSlider G;
    ofxFloatSlider B;
    
    ofxPanel gui;
    
    ofxBulletWorldRigid			world;
    ofxBulletBox				ground;
    
    ofxBulletSphere*			sphere0;
    ofxBulletSphere*			sphere1;
    ofxBulletSphere*			sphere2;
    ofxBulletSphere*			sphere3;
    ofxBulletSphere*			sphere4;
    ofCamera					camera;
		
};
