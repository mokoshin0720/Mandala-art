//
//  rose.cpp
//  LastProject
//
//  Created by 金城信哉 on 2020/07/24.
//

#include "rose.h"

void rose::setup() {
    x = 0.0;
    y = 0.0;
    
    xc = 0.0;
    yc = 0.0;
    
    num = 14;
    
    d = 10;
    n = 8;
}

void rose::drawSmallCircle(float xPos, float yPos) {
    ofPushMatrix();
    
    ofFill();
    ofSetColor(29, 62, 116);
    
    xc = ofGetWidth() / 2 + xPos;
    yc = ofGetHeight() / 2 + yPos + 200;
    
    ofTranslate(xc, yc); //座標の中心を移動
    ofDrawCircle(0, 0, 73);
    
    ofPopMatrix();
}

void rose::drawSmallCircleNofill(float xPos, float yPos) {
    ofPushMatrix();
    ofNoFill();
    ofSetColor(0, 0, 0);
    ofSetLineWidth(4); //輪郭の太さ
    
    xc = ofGetWidth() / 2 + xPos;
    yc = ofGetHeight() / 2 + yPos + 200;
    
    ofTranslate(xc, yc); //座標の中心を移動
    ofDrawCircle(0, 0, 73);
    
    ofPopMatrix();
}

void rose::draw(float xPos, float yPos) {
    ofPushMatrix();
    ofNoFill();
    ofSetColor(0, 0, 0);
    ofSetLineWidth(2); //輪郭の太さ
    ofTranslate(ofGetWidth() / 2 + xPos, ofGetHeight() / 2 + yPos + 200); //座標の中心を移動
    
    for (int i = 0; i < 36000; i++) {
        float sita = fmod( i * 0.01, 360);//点の数
        float size = 65 * sin(n * sita);
        x = size * sin(d * sita);
        y = size * cos(d * sita);
        ofDrawCircle(x, y, 1);
    }
    
    ofPopMatrix();

}
