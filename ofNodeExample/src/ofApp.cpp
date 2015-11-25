#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    nodeB.setParent(nodeA);
    nodeB.setPosition(100,0,0);
    nodeC.setParent(nodeB);
    nodeC.setPosition(0,50,0);
    
}

//--------------------------------------------------------------
void ofApp::update(){

    
    nodeA.pan(1);
    nodeB.tilt(2.3);
    
//    nodeB.setPosition(200 + 200 * ofSignedNoise(ofGetElapsedTimef()/1.0), 0, 0);
    
    line.addVertex(nodeC.getGlobalPosition());
    if (line.size() > 1050){
        line.getVertices().erase(line.getVertices().begin());
    }
}

//--------------------------------------------------------------
void ofApp::draw(){

    
    ofBackgroundGradient(ofColor::gray, ofColor::black);
    
    ofEnableDepthTest();
    
    cam.begin();
    nodeA.draw();
    nodeB.draw();
    nodeC.draw();
    
    line.draw();
    
    
    cam.end();
    
    
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
