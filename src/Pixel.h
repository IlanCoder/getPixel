#pragma once
#include "ofMain.h"
#include "ofMath.h"

class Pixel {
public:
	ofTexture tex;
	ofPixels pix;

	void putPixel(int x, int y, int r, int g, int b);
	void getPixel();
	void init();
	void draw();
};