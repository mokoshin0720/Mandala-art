//
//  rectangle.cpp
//  LastProject
//
//  Created by 金城信哉 on 2020/07/24.
//

#include "rectangle.h"

void rect::draw() {
    ofPushMatrix();
    
    ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2 + 200); //座標の中心を移動
    ofFill();
    ofSetColor(212, 14, 4);
    ofSetRectMode(OF_RECTMODE_CENTER); //中心座標と幅・高さを指定
    
    for (int i = 0; i < 30; i++){
        ofRotateDeg(ofGetElapsedTimef() * 2); //時間とともにz軸に回転をする
        ofScale(0.9); //x軸y軸ともに座標系を0.9倍
        ofDrawRectangle(0, 0, 230, 230); //中心が0,0で縦横230の四角形
    }
    
    ofPopMatrix();
}

void rect::drawNofill() {
    ofPushMatrix();
    
    ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2 + 200); //座標系の中心を移動
    ofNoFill(); //輪郭のみ
    ofSetColor(0, 0, 0);
    ofSetLineWidth(2); //輪郭の太さ
    ofSetRectMode(OF_RECTMODE_CENTER); //中心座標と幅・高さを指定
    
    for (int i = 0; i < 30; i++){
        ofRotateDeg(ofGetElapsedTimef() * 2); //時間でz軸に回転をする
        ofScale(0.9); //x軸y軸ともに座標系を0.9倍
        ofDrawRectangle(0, 0, 230, 230); //中心が0,0で縦横230の四角形
    }
    
    ofPopMatrix();
}
