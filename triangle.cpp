//
//  triangle.cpp
//  LastProject
//
//  Created by 金城信哉 on 2020/07/24.
//

#include "triangle.h"

void triangle::setup() {
    xc = 0.0;
    yc = 0.0;
    num = 14;
}

void triangle::draw(float x1, float y1, float x2, float y2, float x3, float y3) {
    ofPushMatrix();
    
    ofFill();
    ofSetColor(100, 172, 192);
    
    xc = ofGetWidth() / 2;
    yc = ofGetHeight() / 2 + 200;
    
    ofTranslate(xc, yc); //座標の中心を移動
    ofDrawTriangle(x1, y1, x2, y2, x3, y3);
    
    ofPopMatrix();
}

void triangle::drawNofill(float x1, float y1, float x2, float y2, float x3, float y3) {
        ofPushMatrix();

        ofNoFill();
        ofSetColor(0, 0, 0);
        ofSetLineWidth(4); //輪郭の太さ
        
        xc = ofGetWidth() / 2;
        yc = ofGetHeight() / 2 + 200;
        
        ofTranslate(xc, yc); //座標の中心を移動
        ofDrawTriangle(x1, y1, x2, y2, x3, y3);
        
        ofPopMatrix();
}

void triangle::drawSmall(float x1, float y1, float x2, float y2, float x3, float y3, int r, int g, int b) {
    ofPushMatrix();
//    ofSetLineWidth(2); //輪郭の太さ
    ofFill();
    ofSetColor(r, g, b);
    
    xc = ofGetWidth() / 2;
    yc = ofGetHeight() / 2 + 200;
    
    ofTranslate(xc, yc); //座標の中心を移動
    ofDrawTriangle(x1, y1, x2, y2, x3, y3);
    
    ofPopMatrix();
}

void triangle::drawSmallNofill(float x1, float y1, float x2, float y2, float x3, float y3) {
        ofPushMatrix();

        ofNoFill();
        ofSetColor(0, 0, 0);
        ofSetLineWidth(4); //輪郭の太さ
        
        xc = ofGetWidth() / 2;
        yc = ofGetHeight() / 2 + 200;
        
        ofTranslate(xc, yc); //座標の中心を移動
        ofDrawTriangle(x1, y1, x2, y2, x3, y3);
        
        ofPopMatrix();
}
