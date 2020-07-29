//
//  rose.hpp
//  LastProject
//
//  Created by 金城信哉 on 2020/07/24.
//

#ifndef rose_hpp
#define rose_hpp

#include <stdio.h>
#include "ofMain.h"

class rose {
    public:
    
    //プロパティ
    float x, y, sita, size, xc, yc;
    int d, n, num;
    
    //メソッド
    void setup();
    void draw(float xPos, float yPos);
    void drawSmallCircle(float xPos, float yPos);
    void drawSmallCircleNofill(float xPos, float yPos);
};

#endif /* rose_hpp */
