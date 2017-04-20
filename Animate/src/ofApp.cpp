#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0,102,102);
    gandalfLeft.load("gandalfLeft.gif");
    gandalfRight.load("gandalfRight.gif");
    bridge.load("bridge.gif");
    dragonRight.load("dragonRight.gif");
    fire.load("fire.gif");
    xPos = 100;
    yPos = 300;
    spellXPos = xPos + 100;
    spellLeftXPos = xPos - 100;
    firePos = 650;
    spell->setup();
    counter = 0;

}

//--------------------------------------------------------------
void ofApp::update(){
    firePos -= 10;
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofDrawBitmapString("counter: " + ofToString(counter), ofGetWidth()/2, 100);
    
    bridge.draw(0,447, ofGetWidth(), 500); //draw bridge
    bridge.draw(0,480, ofGetWidth(), 500); //draw bridge
    fire.draw(firePos,325,200,100);
    dragonRight.draw(700,-50, 800,600);
    
    if (firePos <= xPos){
        firePos = 650;
        counter --;
    }
    
    
    if(ofGetMousePressed() && right == true){
    spell->drawSpell(spellXPos,yPos + 65);
    spell -> update(spellXPos += 7);
        if(spellXPos > ofGetWidth() - 300){
            spellXPos = xPos + 100;
            counter ++;
        }
    }
    
    if(ofGetMousePressed() && left == true){
        spell -> drawSpellLeft(spellLeftXPos, yPos + 65);
        spell -> updateLeft(spellLeftXPos -= 7);
        if(spellLeftXPos < -150){
            spellLeftXPos = xPos - 100;
        }
    }
    
    
    if (xPos > ofGetWidth() - 300){ //don't let him go off edge of screen right
        xPos = ofGetWidth() - 200;
    }
    
    if (xPos < 0){ //don't let him go off edge of screen left
        xPos = 0;
    }
    
    if (right == true){
        gandalfRight.draw(xPos,yPos,200,200); //move to the right
    }
    if (left == true){
        gandalfLeft.draw(xPos,yPos,200,200); //move to the left
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == OF_KEY_RIGHT){ //if right key pressed, go right
        xPos += 10;
        right = true;
        left = false;
    }
    
    if (key == OF_KEY_LEFT){ //if left key pressed, go left
        xPos -= 10;
        left = true;
        right = false;
    }
   
    if(key == ' '){
        spellXPos += 50;
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

