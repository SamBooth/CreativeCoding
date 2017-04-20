#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
   // ofSetVerticalSync(true);
   // ofBackground( 100);
//    
//    camera.setPosition(ofVec3f(0, -7.f, -10.f));
//    camera.lookAt(ofVec3f(0, 0, 0), ofVec3f(0, -1, 0));
    
    world.setup();
    world.enableGrabbing();
    world.enableDebugDraw();
    world.setCamera(&camera);
    
    sphere0 = new ofxBulletSphere();
    sphere0->create(world.world, ofVec3f(0, 0, 0));
    sphere0->add();
    
    sphere1 = new ofxBulletSphere();
    sphere1->create(world.world, ofVec3f(0, 0, 0));
    sphere1->add();
    
    sphere2 = new ofxBulletSphere();
    sphere2->create(world.world, ofVec3f(0, 0, 0));
    sphere2->add();
    
    sphere3 = new ofxBulletSphere();
    sphere3->create(world.world, ofVec3f(0, 0, 0));
    sphere3->add();
    
    sphere4 = new ofxBulletSphere();
    sphere4->create(world.world, ofVec3f(0, 0, 0));
    sphere4->add();
    
    
    ground.create( world.world, ofVec3f(0., 15.5, 0.), 0., 100.f, 1.f, 100.f );
    ground.setProperties(.25, .95);
    ground.add();
   
    
    gui.setup();
    
    gui.add(setX.setup("X", 0,0 , -300));
    gui.add(setY.setup("Y", -7,0 , -300));
    gui.add(R.setup("Red", 100, 0 , 255));
    gui.add(G.setup("Green", 100, 0 , 255));
    gui.add(B.setup("Blue", 100, 0 , 255));
}

//--------------------------------------------------------------
void ofApp::update(){
    world.update();
    ofSetWindowTitle("Addons");
}

//--------------------------------------------------------------
void ofApp::draw(){

    
    glEnable( GL_DEPTH_TEST );
    
    camera.setPosition(ofVec3f(setX, setY, -20.f));
    camera.lookAt(ofVec3f(0, 0, 0), ofVec3f(0, -1, 0));
    
    
    camera.begin();
    
    
    ofSetLineWidth(1);
    ofSetColor(255);
    world.drawDebug();

    
    ofSetColor(0);
    ground.draw();
    
    ofSetColor(R, G, B);
    sphere0->draw();
    
    ofSetColor(R, G, B);
    sphere1->draw();
    
    ofSetColor(R, G, B);
    sphere2->draw();
    
    ofSetColor(R, G, B);
    sphere3->draw();
    
    ofSetColor(R, G, B);
    sphere4->draw();
    
    
    camera.end();
    
    glDisable( GL_DEPTH_TEST );
    
    gui.draw();
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
