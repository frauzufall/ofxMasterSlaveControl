#pragma once

#include "ofMain.h"
#include "ofxGuiExtended.h"
#include "ofxControllerFollower.h"

class ofApp : public ofBaseApp{

public:
	void setup();
	void update();
	void draw();

	void exit();

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(ofMouseEventArgs &args);
	void mouseDragged(ofMouseEventArgs &args);
	void mousePressed(ofMouseEventArgs &args);
	void mouseReleased(ofMouseEventArgs &args);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);

private:

	ofxGui gui;

	ofParameter<float> m_slider1, m_slider2;
	ofParameter<float> s_slider1, s_slider2, s_slider3;
	ofParameter<bool> s_toggle;

	ofxControllerFollower cf;

};

