#pragma once
#include "ofMain.h"
#include "ofMath.h"

class Pixel {
public:
	ofTexture tex;
	ofPixels pix;

	void putPixel(int x, int y, int red, int blue, int green);
	void getPixel();
	void init();
	void draw();
};