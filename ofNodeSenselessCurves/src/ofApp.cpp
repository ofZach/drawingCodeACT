#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(0);
    
    a.setPosition(500,300,0);
    b.setParent(a);
    b.setPosition(0,200,0);
    c.setParent(b);
    c.setPosition(0,100,0);
    
    aEnergy = 1;
    bEnergy = 1;
    
    aEnergySmth = 1;
    bEnergySmth = 1;
}

//--------------------------------------------------------------
void ofApp::update(){

    
    for (int i = 0; i < nodeLine.size(); i++){
        nodeLine[i] -= ofPoint(1,0);
    }
    
    aEnergySmth = 0.97 * aEnergySmth + (1-0.97) *aEnergy;
    bEnergySmth = 0.97 * bEnergySmth + (1-0.97) *bEnergy;
    
    a.roll(aEnergySmth);
    b.roll(bEnergySmth);
    
    if ( ofRandom(0,1) > 0.95 ){
        aEnergy = 0.4 * ofRandom(4, 8) * (ofRandom(0,1) > 0.5 ? 1 : -1);
    }
    
    if (ofRandom(0,1) > 0.95){
        bEnergy = ofRandom(4,8) * (ofRandom(0,1) > 0.5 ? 1 : -1);
    }
    
    nodeLine.addVertex(c.getGlobalPosition());

}

//--------------------------------------------------------------
void ofApp::draw(){

    
    ofCircle(a.getGlobalPosition(), 3);
    ofCircle(b.getGlobalPosition(), 3);
    ofCircle(c.getGlobalPosition(), 3);
    
    ofLine(a.getGlobalPosition(), b.getGlobalPosition());
    ofLine(b.getGlobalPosition(), c.getGlobalPosition());
    
    nodeLine.draw();
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
