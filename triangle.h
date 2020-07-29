//
//  triangle.hpp
//  LastProject
//
//  Created by 金城信哉 on 2020/07/24.
//

#ifndef triangle_hpp
#define triangle_hpp

#include <stdio.h>
#include "ofMain.h"

class triangle {
    public:
    
    //プロパティ
    float xc, yc , x1, y1, x2, y2, x3, y3, x1_2, y1_2, x2_2, y2_2, x3_2, y3_2;
    int num;
    double pai;
    
    //メソッド
    void setup();
    void draw(float x1, float y1, float x2, float y2, float x3, float y3);
    void drawNofill(float x1, float y1, float x2, float y2, float x3, float y3);
    void drawSmall(float x1, float y1, float x2, float y2, float x3, float y3, int r, int g, int b);
    void drawSmallNofill(float x1, float y1, float x2, float y2, float x3, float y3);
};

#endif /* triangle_hpp */
