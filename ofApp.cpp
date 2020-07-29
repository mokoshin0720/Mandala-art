#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    
    s1.setup();
    c1.setup();
    rose1.setup();
    t1.setup();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    //グラデーション背景
    ofColor colorOne(210, 225, 250);
    ofColor colorTwo(1, 22, 56);
    ofBackgroundGradient(colorOne, colorTwo);
    //星
    s1.draw();
    //3つの円
    c1.draw();
    c1.drawNofill();
    //花
    for(int i = 0; i < rose1.num; i++) {
        rose1.drawSmallCircle(375 * cos(TWO_PI * i / rose1.num), -375 * sin(TWO_PI * i / rose1.num));
    }
    for(int i = 0; i < rose1.num; i++) {
        rose1.drawSmallCircleNofill(375 * cos(TWO_PI * i / rose1.num), -375 * sin(TWO_PI * i / rose1.num));
    }
    for(int i = 0; i < rose1.num; i++) {
        rose1.draw(375 * cos(TWO_PI * i / rose1.num), -375 * sin(TWO_PI * i / rose1.num));
    }
    //中心の四角形
    r1.draw();
    r1.drawNofill();
    //三角形
    for(int i = 0; i < t1.num; i++) {
        
        const double pai = TWO_PI / t1.num / 2; //位相のズレを計算
        //大きな三角形の3頂点
        t1.x1 = (300 * cos(TWO_PI * i / t1.num));
        t1.y1 = (300 * sin(TWO_PI * i / t1.num));
        
        t1.x2 = (150 * cos( (TWO_PI * i / t1.num) - pai) );
        t1.y2 = (150 * sin( (TWO_PI * i / t1.num) - pai) );
        
        t1.x3 = (150 * cos( (TWO_PI * i / t1.num) + pai) );
        t1.y3 = (150 * sin( (TWO_PI * i / t1.num) + pai) );

        t1.draw(t1.x1, t1.y1, t1.x2, t1.y2, t1.x3, t1.y3);
        t1.drawNofill(t1.x1, t1.y1, t1.x2, t1.y2, t1.x3, t1.y3);
        //小さな三角形の3頂点
        t1.x1_2 = (300 * cos( (TWO_PI * i / t1.num) + pai) );
        t1.y1_2 = (300 * sin( (TWO_PI * i / t1.num) + pai) );
        
        t1.x2_2 = (t1.x1 + t1.x3) / 2;
        t1.y2_2 = (t1.y1 + t1.y3) / 2;
        
        t1.x3_2 = ( (300 * cos( (TWO_PI * i / t1.num) + pai * 2) ) + t1.x3 ) / 2;
        t1.y3_2 = ( (300 * sin( (TWO_PI * i / t1.num) + pai * 2) ) + t1.y3 ) / 2;
        //外側の小三角
        t1.drawSmall(t1.x1_2, t1.y1_2, t1.x2_2, t1.y2_2, t1.x3_2, t1.y3_2, 158, 19, 14);
        t1.drawSmallNofill(t1.x1_2, t1.y1_2, t1.x2_2, t1.y2_2, t1.x3_2, t1.y3_2);
        //内側の小三角
        t1.drawSmall(t1.x3, t1.y3, t1.x2_2, t1.y2_2, t1.x3_2, t1.y3_2, 95, 47, 145);
        t1.drawSmallNofill(t1.x3, t1.y3, t1.x2_2, t1.y2_2, t1.x3_2, t1.y3_2);
    }
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
