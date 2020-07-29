//
//  star.cpp
//  LastProject
//
//  Created by 金城信哉 on 2020/07/26.
//

#include "star.h"

void star::setup() {
    
    for(int i = 0; i < STAR_NUM; i++) {
        xPos[i] = ofRandom(ofGetWidth());
        yPos[i] = ofRandom(ofGetHeight());
        rad[i] = ofRandom(1.0, 3.0);
    }
    
}

void star::draw() {
    
    ofPushMatrix();
    ofFill();
    ofSetColor(255);
    
    for(int i = 0; i < STAR_NUM; i++) {
        ofDrawCircle(xPos[i], yPos[i], rad[i]);
    }

}
