#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetVerticalSync(true);
    ofSetFrameRate(60);
    ofBackground(55);
    
  //  grabber.setup(640, 480);
    grabber.setup(ofGetWidth(), ofGetHeight());

    
    finder.setup("haarcascade_frontalface_default.xml");
    
    grabber.setVerbose(false);
    
    
    hair.load("hair.png");
    stache.load("stache.png");
    glasses.load("glasses.png");
    glasses2.load("glasses2.png");
    glasses3.load("glasses3.png");
    stache2.load("stache2.png");
    
}


//--------------------------------------------------------------
void ofApp::update(){
    grabber.update();
    finder.findHaarObjects(grabber.getPixels());
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofFill();
    ofSetColor(255);
    grabber.draw(0,0);
    ofNoFill();
  
        for(unsigned int i = 0; i < finder.blobs.size(); i++) {
            ofRectangle cur = finder.blobs[i].boundingRect;
           // ofDrawRectangle(cur.x, cur.y, cur.width, cur.height);
           

            hair.draw(cur.x-30, cur.y-70, cur.width+30,cur.height);
//
            
            if(isG){
            glasses.draw(cur.x, cur.y+cur.height/5, cur.width, cur.height/2);
                isG2 = false;
                isG3 = false;
            }
            
            if(isG2){
                glasses2.draw(cur.x, cur.y+cur.height/5, cur.width, cur.height/2);
                isG = false;
                isG3 = false;
            }
            
            if(isG3){
                glasses3.draw(cur.x, cur.y+cur.height/5, cur.width, cur.height/2-20);
                isG = false;
                isG2 = false;
            }
            if(isS){
                stache.draw(cur.x+cur.width/4, cur.y+cur.height/2, cur.width/2, cur.height/3);

            }
            if(isS2){
                stache2.draw(cur.x+cur.width/4, cur.y+cur.height/1.75, cur.width/2, cur.height/3);

            }
            
            
//            if(is){
//                ofSetColor(100, 0,0);
//                ofDrawCircle(cur.x, cur.y, cur.width, cur.height);
//            }
    }
   
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == ' '){
        img.grabScreen(0,0,ofGetWidth(), ofGetHeight());
        img.save("screenshot.png");
    }
    
    if(key == '3'){
        isG = true;
        isG2 = false;
        isG3 = false;

    }
    if(key == '1'){
        isG2 = true;
        isG = false;
        isG3 = false;

    }
    if(key == '2'){
        isG3 = true;
        isG = false;
        isG2 = false;
    }
    if (key == 'q'){
        isS = false;
        isS2 = true;
    }
    if (key == 'w'){
        isS = true;
        isS2 = false;
    }
    if (key == 'a'){
        isS = false;
        isS2 = false;
        isG = false;
        isG2 = false;
        isG3 = false;
        is = true;
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
