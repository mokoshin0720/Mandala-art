//
//  circle.cpp
//  LastProject
//
//  Created by 金城信哉 on 2020/07/24.
//

#include "circle.h"

void circle::setup() {
    radius = 150.0;
}

void circle::draw() {
    
    ofFill();
    
    for (int i = 3; i > 0; i--){
        
        if(i == 3) {
            
            ofSetColor(100, 172, 192);
            
        } else if(i == 2) {
            
            ofSetColor(29, 62, 116);
            
        } else if(i == 1) {
            
            ofSetColor(231, 198, 102);
            
        }
        
        ofDrawCircle(ofGetWidth() / 2, ofGetHeight() / 2 + 200, radius * i);
    }
}

void circle::drawNofill() {
    ofNoFill(); //輪郭のみ
    ofSetLineWidth(4); //輪郭の太さ
    ofSetColor(0, 0, 0);
    
    for (int i = 3; i > 1; i--){
        ofDrawCircle(ofGetWidth() / 2, ofGetHeight() / 2 + 200, radius * i);
    }
    
}
