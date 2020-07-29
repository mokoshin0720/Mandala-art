//
//  circle.hpp
//  LastProject
//
//  Created by 金城信哉 on 2020/07/24.
//

#ifndef circle_hpp
#define circle_hpp

#include <stdio.h>
#include "ofMain.h"

class circle {
    public:
    
    //メソッド
    float radius;
    
    //プロパティ
    void setup();
    void draw();
    void drawNofill();
};

#endif /* circle_hpp */
