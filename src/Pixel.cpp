#include "Pixel.h"

void Pixel::putPixel(int x, int y, int red, int blue, int green){
	pix.setColor(x, y, (red, blue, green));
}

void Pixel::getPixel(){
	tex.loadData(pix);
}

void Pixel::init(){
	pix.allocate(ofGetWidth(), ofGetHeight(), OF_PIXELS_RGB);
	tex.allocate(ofGetWidth(), ofGetHeight(), GL_RGB);
}

void Pixel::draw(){
	tex.draw(0, 0);
}
