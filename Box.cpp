#include "Box.h"

// Implement setters and getters
void Box :: setBox (int bLength, int bWidth, int bHeight){
  length =  bLength;
  width = bWidth;
  height = bHeight;
}

int Box :: getLength () {
  return length;
}

int Box :: getWidth (){
  return width;
}

int Box :: getHeight () {
  return height;
}

// Implemenet the calcVolume() unction
int Box::calcVolume() {
  int volume;
  volume = length * width * height;
  return volume;
}
