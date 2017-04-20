#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //gandalf.load("gandalf.jpg");
    ofBackground(0x323232);
    //gandalf.draw(0,0);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
   // gandalf.draw(175,50);
    
    //Inside of hat - dark grey
    ofSetColor(100);
    for (int i = 656; i > 320; i -=20){
        ofDrawRectangle(i, 292, 20,20);
    }
    for (int i = 656; i > 350; i -=20){
        ofDrawRectangle(i, 282, 20,20);
    }
    for (int i = 596; i > 410; i -=20){
        ofDrawRectangle(i, 262, 20,20);
    }
    ofDrawRectangle(406, 262, 20,20);

    for (int i = 576; i > 410; i -=20){
        ofDrawRectangle(i, 242, 20,20);
    }
    for (int i = 576; i > 420; i -=20){
        ofDrawRectangle(i, 222, 20,20);
    }
    ofDrawRectangle(426, 222, 20,20);
    for (int i = 556; i > 420; i -= 20){
        ofDrawRectangle(i, 202, 20,20);
    }
    for (int i = 556; i > 440; i -= 20){
        ofDrawRectangle(i, 182, 20,20);
    }
    ofDrawRectangle(446, 182, 20,20);
    for (int i = 556; i > 460; i -= 20){
        ofDrawRectangle(i, 162, 20,20);
    }
    ofDrawRectangle(466, 162, 20,20);
    for (int i = 556; i > 480; i -= 20){
        ofDrawRectangle(i, 142, 20,20);
    }
    ofDrawRectangle(486, 142, 20,20);
    for (int i = 556; i > 500; i -= 20){
        ofDrawRectangle(i, 122, 20,20);
    }
    ofDrawRectangle(506, 122, 20,20);
    for (int i = 596; i > 520; i -= 20){
        ofDrawRectangle(i, 102, 20,20);
    }
    ofDrawRectangle(526, 102, 20,20);
    for (int i = 596; i > 540; i -= 20){
        ofDrawRectangle(i, 82, 20,20);
    }
    ofDrawRectangle(546, 82, 20,20);




    
    //Hat outline - black
    ofSetColor(0);
    ofDrawRectangle(556, 62, 20, 20);
    ofDrawRectangle(576, 62, 20, 20);
    ofDrawRectangle(596, 62, 20, 20);
    ofDrawRectangle(616, 82, 20, 20);
    ofDrawRectangle(616, 102, 20, 20);
    ofDrawRectangle(596, 122, 20, 20);
    ofDrawRectangle(596, 122, 20, 20);
    ofDrawRectangle(576, 122, 20, 20);
    ofDrawRectangle(576, 102, 20, 20);
    ofDrawRectangle(576, 142, 20, 20);
    ofDrawRectangle(576, 162, 20, 20);
    ofDrawRectangle(576, 182, 20, 20);
    ofDrawRectangle(576, 202, 20, 20);
    ofDrawRectangle(596, 222, 20, 20);
    ofDrawRectangle(596, 242, 20, 20);
    ofDrawRectangle(616, 262, 20, 20);
    ofDrawRectangle(636, 262, 20, 20);
    ofDrawRectangle(656, 262, 20, 20);
    ofDrawRectangle(676, 282, 20, 20);
    ofDrawRectangle(676, 292, 20, 20);
    ofDrawRectangle(676, 312, 20, 20);
    ofDrawRectangle(656, 312, 20, 20);
    ofDrawRectangle(636, 312, 20, 20);
    for (int i = 616; i > 320; i -= 20){
        ofDrawRectangle(i, 312, 20,20);
    }
    ofDrawRectangle(316, 292,20,20);
    ofDrawRectangle(336, 272,20,20);
    ofDrawRectangle(356, 272,20,20);
    ofDrawRectangle(376, 272,20,20);
    ofDrawRectangle(386, 272,20,20);
    ofDrawRectangle(406, 252,20,20);
    ofDrawRectangle(406, 232,20,20);
    ofDrawRectangle(426, 212,20,20);
    ofDrawRectangle(426, 192,20,20);
    ofDrawRectangle(446, 172,20,20);
    ofDrawRectangle(466, 152,20,20);
    ofDrawRectangle(486, 132,20,20);
    ofDrawRectangle(506, 112,20,20);
    ofDrawRectangle(526, 92,20,20);
    ofDrawRectangle(546, 72,20,20);
    
    //outline - black
    ofSetColor(0);

    ofDrawRectangle(618,332,20,150);
    ofDrawRectangle(600,462, 20,60);
    ofDrawRectangle(580,482, 20,20);
    ofDrawRectangle(618,522, 20,65);
    ofDrawRectangle(578,522, 20,83);
    ofDrawRectangle(598,587, 20,40);
    ofDrawRectangle(577, 627, 20,40);
    ofDrawRectangle(560, 647, 20,20);
    ofDrawRectangle(540, 647, 20,20);
    ofDrawRectangle(530, 647, 20,20);
    ofDrawRectangle(410, 647, 80,20);
    ofDrawRectangle(490, 627, 40,20);
    ofDrawRectangle(430, 627, 20,20);
    ofDrawRectangle(390, 627, 20,20);
    ofDrawRectangle(410, 587, 20,40);
    ofDrawRectangle(365, 587, 85,20);
    ofDrawRectangle(365, 567, 20,60);
    ofDrawRectangle(430, 525, 20,62);
    ofDrawRectangle(387, 525, 24,40);
    ofDrawRectangle(343, 525, 24,42);
    ofDrawRectangle(363, 483, 20,42);
    ofDrawRectangle(323, 483, 20,42);
    ofDrawRectangle(343, 378, 20,105);
    ofDrawRectangle(283, 378, 20,60);
    ofDrawRectangle(303, 358, 40,20);
    ofDrawRectangle(303, 418, 20,60);
    ofDrawRectangle(303, 418, 20,60);
    ofDrawRectangle(385, 330, 20,150);
    ofDrawRectangle(385, 330, 20,150);
    ofDrawRectangle(385, 330, 20,150);
    ofDrawRectangle(405, 460, 20,65);
    ofDrawRectangle(425, 480, 20,20);
    
    //left arm dark grey
   ofSetColor(75);
    ofDrawRectangle(598,522, 20,43);
    
    //right arm dark grey
    ofSetColor(75);
    ofDrawRectangle(410, 525, 20,62);


    //left hand skin
    ofSetHexColor(0xffcd94);
    ofDrawRectangle(598, 565, 20,22);
    
    
    //Staff brown
   ofSetHexColor(0x654321);
    ofDrawRectangle(367, 525, 24,43);
    ofDrawRectangle(343, 483, 20,42);
    ofDrawRectangle(323, 398, 20,85);
    ofDrawRectangle(303, 378, 20,40);
    ofDrawRectangle(385,607,25,20);
    ofDrawRectangle(410,627,20,20);

    
    //Staff light grey
    ofSetColor(100);
    ofDrawRectangle(323, 378, 20,20);


    //right hand skin
    ofSetHexColor(0xffcd94);
    
    ofDrawRectangle(385, 565, 25,22);
    
    //boot & belt dark brown
    ofSetHexColor(0x4b3218);
    ofDrawRectangle(450, 627, 40,20);
    ofDrawRectangle(450, 627, 40,20);
    ofDrawRectangle(530, 627, 45,20);
    ofDrawRectangle(530, 627, 50,20);
    ofDrawRectangle(468, 585, 73,23);
    
    //Outer Coat dark grey
    ofSetHexColor(0x323232);
    ofDrawRectangle(420, 607, 40,20);
    ofDrawRectangle(430, 607, 40,20);
    ofDrawRectangle(533, 607, 60,20);
    ofDrawRectangle(533, 607, 60,20);
    ofDrawRectangle(450, 502, 20, 105);
    ofDrawRectangle(430, 502, 20, 20); //this
    ofDrawRectangle(575, 502, 20, 20);
    ofDrawRectangle(555, 502, 20, 105);
    ofDrawRectangle(535, 542, 20, 65);
    
    //Inner Coat lighter grey
    ofSetHexColor(0x434343);
    ofDrawRectangle(470, 525, 20, 60);
    ofDrawRectangle(470, 607, 63, 20);
    ofDrawRectangle(490, 545, 20, 40);
    ofDrawRectangle(510, 565, 25, 20);
    
    //Face skin
    ofSetHexColor(0xffcd94);
    ofDrawRectangle(405, 333, 193, 128);
    

    
    //Facial hair light grey
    ofSetHexColor(0xbcbcbc);
    ofDrawRectangle(405, 333, 20, 20);
    ofDrawRectangle(578, 333, 40, 20);
    ofDrawRectangle(598, 353, 20, 107);
    ofDrawRectangle(578, 393, 20, 87);
    ofDrawRectangle(555, 415, 23, 87);
    ofDrawRectangle(535, 415, 20, 127);
    ofDrawRectangle(513, 460, 22, 105);
    ofDrawRectangle(493, 460, 22, 85);
    ofDrawRectangle(473, 460, 22, 65);
    ofDrawRectangle(450, 418, 23, 85);
    ofDrawRectangle(428, 418, 23, 63);
    ofDrawRectangle(405, 400, 23, 63);
    ofDrawRectangle(430, 355, 60, 20);
    ofDrawRectangle(515, 355, 60, 20);
    ofDrawRectangle(472, 399, 63, 20);
    
    //Eyes and mouth
    ofSetColor(0);
    ofDrawRectangle(473, 420, 63, 20);
    ofDrawRectangle(450, 375, 20, 20);
    ofDrawRectangle(535, 375, 20, 20);












    

    
    

    
    ofSetColor(255);







    

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
