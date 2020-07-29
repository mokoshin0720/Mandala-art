#pragma once

#include "ofMain.h"
#include "rectangle.h"
#include "circle.h"
#include "rose.h"
#include "triangle.h"
#include "star.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
    rect r1;
    circle c1;
    rose rose1;
    triangle t1, t2;
    star s1;
};
