#ifndef LOCAL_H
#define LOCAL_H

#include "ofMain.h"
#include "Spot.h"

class Local : public Spot {

public:

	Local(float xPercentage, float yPercentage, vector<string> paths);

	void draw();
	void mousePressed(ofMouseEventArgs& event);

private:

	float dim;

	const static ofColor red_light;
	const static ofColor red;
	const static float dimPercentage;

};

#endif

