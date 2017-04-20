#pragma once

#include "ofMain.h"
#include "Spell.hpp"

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
    
        int xPos;
        int yPos;
        int velY;
        int spellXPos;
    int spellLeftXPos;
    int counter;
    int firePos;
    float gravity = .5;
    
    
        ofImage gandalfLeft;
        ofImage gandalfRight;
        ofImage ballLeft;
        ofImage ballRight;
        ofImage bridge;
        ofImage dragonRight;
    ofImage fire;
    
        bool right = true;
        bool left = false;
    
        Spell *spell = new Spell();
      
    
    
};
