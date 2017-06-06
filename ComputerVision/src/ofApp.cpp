#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //set up the kinect and leapmotion controller
    kinect.setRegistration(true);
    kinect.init();
    kinect.open();
    
    grayImage.allocate(kinect.width, kinect.height);
    
    ofSetFrameRate(60);
    angle = 0;
    kinect.setCameraTiltAngle(angle);
    bDrawPointCloud = false;
    bDrawLineCloud = false;
    bDrawCloud = false;
    bDrawTri = false;
    bDrawTriFan = false;
    bDrawLineStrip = false;
    bDrawTriPoint = false;
    
    leap.open();
    
}

//--------------------------------------------------------------
void ofApp::update(){
    ofBackground(0);
    kinect.update();
    
    //tell leap to recognize hand position
    simpleHands = leap.getSimpleHands();
    
    if( leap.isFrameNew() && simpleHands.size() ){

        
        fingerType fingerTypes[] = {THUMB, INDEX, MIDDLE, RING, PINKY};
        
        for(int i = 0; i < simpleHands.size(); i++){
            for (int f=0; f<5; f++) {
                int id = simpleHands[i].fingers[ fingerTypes[f] ].id;
                ofPoint mcp = simpleHands[i].fingers[ fingerTypes[f] ].mcp; // metacarpal
                ofPoint pip = simpleHands[i].fingers[ fingerTypes[f] ].pip; // proximal
                ofPoint dip = simpleHands[i].fingers[ fingerTypes[f] ].dip; // distal
                ofPoint tip = simpleHands[i].fingers[ fingerTypes[f] ].tip; // fingertip
                fingersFound.push_back(id);
            }
        }
    }
    


    //tell ofxLeapMotion that the frame is no longer new.
    leap.markFrameAsOld();
}
//--------------------------------------------------------------
void ofApp::draw(){
    
    //T/F statements to tell it which mesh to draw
    if(isKey1){
        kinect.draw(0,0, ofGetWidth(), ofGetHeight());
    }
    if(isKey2){
        kinect.drawDepth(0, 0, ofGetWidth(),ofGetHeight());
    }
    if(isKey3){
        bDrawPointCloud = true;
        if(bDrawPointCloud) {
            easyCam.begin();
            drawPointCloud();
            easyCam.end();
        }
    }
    if(isKey4){
        bDrawLineCloud = true;
        if(bDrawLineCloud) {
            easyCam.begin();
            drawLineCloud();
            easyCam.end();
        }
    }
    if(isKey5){
        bDrawCloud = true;
        if(bDrawCloud) {
            easyCam.begin();
            drawCloud();
            easyCam.end();
        }
    }
    if(isKey6){
        bDrawTri = true;
        if(bDrawTri){
            easyCam.begin();
            drawTri();
            easyCam.end();
        }
    }
    if(isKey7){
        bDrawTriFan = true;
        if(bDrawTriFan){
            easyCam.begin();
            drawTriFan();
            easyCam.end();
        }
    }
    if(isKey8){
        bDrawLineStrip = true;
        if(bDrawLineStrip){
            easyCam.begin();
            drawLineStrip();
            easyCam.end();
        }
    }
    if(isKey9){
        bDrawTriPoint = true;
        if(bDrawTriPoint){
            easyCam.begin();
            drawTriPoint();
            easyCam.end();
        }
    }
    
    
    cam.begin();
    
    
    
    fingerType fingerTypes[] = {THUMB, INDEX, MIDDLE, RING, PINKY};
    
    
    for(int i = 0; i < simpleHands.size(); i++){
        bool isLeft        = simpleHands[i].isLeft;
        
        for (int f=0; f<5; f++) {
            ofPoint mcp = simpleHands[i].fingers[ fingerTypes[f] ].mcp;  // metacarpal
            ofPoint pip = simpleHands[i].fingers[ fingerTypes[f] ].pip;  // proximal
            ofPoint dip = simpleHands[i].fingers[ fingerTypes[f] ].dip;  // distal
            ofPoint tip = simpleHands[i].fingers[ fingerTypes[f] ].tip;  // fingertip
            
            
            //use leapmotion to control the easycam with your right hand
            if(!(simpleHands[i].isLeft)){
            easyCam.setDistance(tip.z*20);
            }
            //use leapmotion to control which mesh you're using with your left hand
            if((simpleHands[i].isLeft)){
                if(tip.y <= 75){
                    isKey1 = false;
                    isKey2 = false;
                    isKey3 = true;
                    isKey4 = false;
                    isKey5 = false;
                    isKey6 = false;
                    isKey7 = false;
                    isKey8 = false;
                    isKey9 = false;
                }else if (tip.y > 100 && tip.y < 150){
                    isKey1 = false;
                    isKey2 = false;
                    isKey3 = false;
                    isKey4 = true;
                    isKey5 = false;
                    isKey6 = false;
                    isKey7 = false;
                    isKey8 = false;
                    isKey9 = false;
                }else if (tip.y >= 150 && tip.y < 200){
                    isKey1 = false;
                    isKey2 = false;
                    isKey3 = false;
                    isKey4 = false;
                    isKey5 = true;
                    isKey6 = false;
                    isKey7 = false;
                    isKey8 = false;
                    isKey9 = false;
                }else if (tip.y >= 200 && tip.y < 250){
                    isKey1 = false;
                    isKey2 = false;
                    isKey3 = false;
                    isKey4 = false;
                    isKey5 = false;
                    isKey6 = true;
                    isKey7 = false;
                    isKey8 = false;
                    isKey9 = false;
                }else if (tip.y >= 250 && tip.y < 300){
                    isKey1 = false;
                    isKey2 = false;
                    isKey3 = false;
                    isKey4 = false;
                    isKey5 = false;
                    isKey6 = false;
                    isKey7 = true;
                    isKey8 = false;
                    isKey9 = false;
                }else if (tip.y >= 300 && tip.y < 350){
                    isKey1 = false;
                    isKey2 = false;
                    isKey3 = false;
                    isKey4 = false;
                    isKey5 = false;
                    isKey6 = false;
                    isKey7 = false;
                    isKey8 = true;
                    isKey9 = false;
                }else if (tip.y >= 350){
                    isKey1 = false;
                    isKey2 = false;
                    isKey3 = false;
                    isKey4 = false;
                    isKey5 = false;
                    isKey6 = false;
                    isKey7 = false;
                    isKey8 = false;
                    isKey9 = true;
                }else{
                    isKey1 = false;
                    isKey2 = false;
                    isKey3 = false;
                    isKey4 = false;
                    isKey5 = false;
                    isKey6 = false;
                    isKey7 = false;
                    isKey8 = false;
                    isKey9 = false;
                }
            }
            
        }
        
    }
    
    cam.end();

}
//--------------------------------------------------------------

void ofApp::drawPointCloud() {
    int w = 640;
    int h = 480;
    ofMesh mesh;
    mesh.setMode(OF_PRIMITIVE_POINTS);
    int step = 2;
    for(int y = 0; y < h; y += step) {
        for(int x = 0; x < w; x += step) {
            if(kinect.getDistanceAt(x, y) > 0) {
                mesh.addColor(kinect.getColorAt(x,y));
                mesh.addVertex(kinect.getWorldCoordinateAt(x+2, y));
            }
        }
    }
    glPointSize(3);
    ofPushMatrix();
    // the projected points are 'upside down' and 'backwards'
    ofScale(1, -1, -1);
    ofTranslate(0, 0, -1000); // center the points a bit
    ofEnableDepthTest();
    mesh.drawVertices();
    ofDisableDepthTest();
    ofPopMatrix();

}
//--------------------------------------------------------------

//Make mesh lower res? Grab every other pix?

void ofApp::drawLineCloud() {
    int w = 640;
    int h = 480;
    ofMesh mesh;
    mesh.setMode(OF_PRIMITIVE_LINE_LOOP);
    int step = 2;
    for(int y = 0; y < h; y += step) {
        for(int x = 0; x < w; x += step) {
            if(kinect.getDistanceAt(x, y) > 0) {
              //  mesh.addColor(kinect.getColorAt(x,y));
                mesh.addColor(kinect.getColorAt(100,300));
                mesh.addVertex(kinect.getWorldCoordinateAt(x, y));
            }
        }
    }
    glLineWidth(1);
    ofPushMatrix();
    // the projected points are 'upside down' and 'backwards'
    ofScale(1, -1, -1);
    ofTranslate(0, 0, -1000); // center the points a bit
    ofEnableDepthTest();
    //mesh.drawVertices();
    mesh.disableTextures();
    mesh.drawWireframe();
    ofDisableDepthTest();
    ofPopMatrix();
}

//--------------------------------------------------------------

void ofApp::drawCloud() {
    ofMesh mesh;
    mesh.setMode(OF_PRIMITIVE_POINTS);
    mesh.enableColors();
    
    int w = 640;
    int h = 480;
    int step = 2;
    for(int y = 0; y < h; y += step) {
        for(int x = 0; x < w; x += step) {
                mesh.addColor(kinect.getColorAt(x,y));
                mesh.addVertex(kinect.getWorldCoordinateAt(x,y));
        }
    }
    
    mesh.setMode(OF_PRIMITIVE_LINES);
    mesh.enableIndices();
    

    int numVerts = mesh.getNumVertices();
    
    for(int a = 0; a < numVerts; a++){
        ofVec3f verta = mesh.getVertex(a);
                mesh.addIndex(a);

    }
    
    glPointSize(10);
    ofPushMatrix();
    ofScale(1, -1, -1);
    ofTranslate(0, 0, -1000);
    ofEnableDepthTest();
    mesh.drawVertices();
    ofDisableDepthTest();
    ofPopMatrix();
}

//--------------------------------------------------------------
void ofApp::drawTri(){
    int w = 640;
    int h = 480;
    ofMesh mesh;
    int step = 6;
    mesh.setMode(OF_PRIMITIVE_TRIANGLES);
    for(int y = 0; y < h; y += step) {
        for(int x = 0; x < w; x += step) {
            if(kinect.getDistanceAt(x, y) > 0) {
                if(kinect.getDistanceAt(x,y) <1500 ) {
                    mesh.addColor(kinect.getColorAt(x,y));
                    mesh.addVertex(kinect.getWorldCoordinateAt(x,y));
                }  
            }  
        }  
    }
    glLineWidth(4);
    ofPushMatrix();
    ofScale(1, -1, -1);
    ofTranslate(0, 0, -1000);
    ofEnableDepthTest();
    mesh.drawWireframe();
    ofDisableDepthTest();
    ofPopMatrix();
}

//--------------------------------------------------------------
void ofApp::drawTriFan(){
    int w = 640;
    int h = 480;
    ofMesh mesh;
    int step = 10;
    mesh.setMode(OF_PRIMITIVE_TRIANGLE_FAN);
    for(int y = 0; y < h; y += step) {
        for(int x = 0; x < w; x += step) {
            if(kinect.getDistanceAt(x, y) > 0) {
                if(kinect.getDistanceAt(x,y) <1500 ) {
                    mesh.addColor(kinect.getColorAt(x,y));
                    mesh.addVertex(kinect.getWorldCoordinateAt(x,y));
                }
            }
        }
    }
    glLineWidth(4);
    ofPushMatrix();
    ofScale(1, -1, -1);
    ofTranslate(0, 0, -1000);
    ofEnableDepthTest();
    mesh.drawWireframe();
    ofDisableDepthTest();
    ofPopMatrix();
}
//--------------------------------------------------------------
void ofApp::drawTriPoint(){
    int w = 640;
    int h = 480;
    ofMesh mesh;
    int step = 10;
    mesh.setMode(OF_PRIMITIVE_TRIANGLE_FAN);
    for(int y = 0; y < h; y += step) {
        for(int x = 0; x < w; x += step) {
            if(kinect.getDistanceAt(x, y) > 0) {
                if(kinect.getDistanceAt(x,y) <1500 ) {
                    mesh.addColor(kinect.getColorAt(x,y));
                    mesh.addVertex(kinect.getWorldCoordinateAt(x,y));
                }
            }
        }
    }
    glPointSize(10);
    ofPushMatrix();
    ofScale(1, -1, -1);
    ofTranslate(0, 0, -1000);
    ofEnableDepthTest();
    mesh.drawVertices();
    ofDisableDepthTest();
    ofPopMatrix();
}
//--------------------------------------------------------------

void ofApp::drawLineStrip(){
    int w = 640;
    int h = 480;
    
    ofMesh mesh;
    int step = 6;
    mesh.setMode(OF_PRIMITIVE_LINE_STRIP);
    for(int y = 0; y < h; y += step) {
        for(int x = 0; x < w; x += step) {
            if(kinect.getDistanceAt(x, y) > 0) {
                if(kinect.getDistanceAt(x,y) <1500 ) {
                    mesh.addColor(kinect.getColorAt(x,y));
                    mesh.addVertex(kinect.getWorldCoordinateAt(x, y));
                }
            }
        }
    }
    glLineWidth(4);
    ofPushMatrix();
    ofScale(1, -1, -1);
    ofTranslate(0, 0, -1000);
    ofEnableDepthTest();
    mesh.drawWireframe();
    ofDisableDepthTest();
    ofPopMatrix();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch(key){
        case OF_KEY_UP:
            angle++;
            if(angle>30) angle=30;
            kinect.setCameraTiltAngle(angle);
            break;
    
        case OF_KEY_DOWN:
            angle--;
            if(angle<-30) angle=-30;
            kinect.setCameraTiltAngle(angle);
            break;
    }
    
    if (key == '1'){
        isKey1 = true;
        isKey2 = false;
        isKey3 = false;
        isKey4 = false;
        isKey5 = false;
        isKey6 = false;
        isKey7 = false;
        isKey8 = false;
        isKey9 = false;


    }
    if (key == '2'){
        isKey1 = false;
        isKey2 = true;
        isKey3 = false;
        isKey4 = false;
        isKey5 = false;
        isKey6 = false;
        isKey7 = false;
        isKey8 = false;
        isKey9 = false;


    }
    if (key == '3'){
        isKey1 = false;
        isKey2 = false;
        isKey3 = true;
        isKey4 = false;
        isKey5 = false;
        isKey6 = false;
        isKey7 = false;
        isKey8 = false;
        isKey9 = false;


    }
    if (key == '4'){
        isKey1 = false;
        isKey2 = false;
        isKey3 = false;
        isKey4 = true;
        isKey5 = false;
        isKey6 = false;
        isKey7 = false;
        isKey8 = false;
        isKey9 = false;


    }
    if (key == '5'){
        isKey1 = false;
        isKey2 = false;
        isKey3 = false;
        isKey4 = false;
        isKey5 = true;
        isKey6 = false;
        isKey7 = false;
        isKey8 = false;
        isKey9 = false;

    }
    if (key == '6'){
        isKey1 = false;
        isKey2 = false;
        isKey3 = false;
        isKey4 = false;
        isKey5 = false;
        isKey6 = true;
        isKey7 = false;
        isKey8 = false;
        isKey9 = false;

    }
    if (key == '7'){
        isKey1 = false;
        isKey2 = false;
        isKey3 = false;
        isKey4 = false;
        isKey5 = false;
        isKey6 = false;
        isKey7 = true;
        isKey8 = false;
        isKey9 = false;

    }
    if (key == '8'){
        isKey1 = false;
        isKey2 = false;
        isKey3 = false;
        isKey4 = false;
        isKey5 = false;
        isKey6 = false;
        isKey7 = false;
        isKey8 = true;
        isKey9 = false;
    }
    if (key == '9'){
        isKey1 = false;
        isKey2 = false;
        isKey3 = false;
        isKey4 = false;
        isKey5 = false;
        isKey6 = false;
        isKey7 = false;
        isKey8 = false;
        isKey9 = true;
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
void ofApp::exit(){
    // close leap if the app isn't running
    leap.close();
}
