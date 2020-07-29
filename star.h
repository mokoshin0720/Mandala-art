//
//  star.hpp
//  LastProject
//
//  Created by 金城信哉 on 2020/07/26.
//

#ifndef star_hpp
#define star_hpp

#include <stdio.h>
#include "ofMain.h"

class star {
    public:
    
    //プロパティ
    static const int STAR_NUM = 200;
    float xPos[STAR_NUM], yPos[STAR_NUM], rad[STAR_NUM];
    
    //メソッド
    void setup();
    void draw();
};

#endif /* star_hpp */
