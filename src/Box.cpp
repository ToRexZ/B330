#include "Box.h"
#include <iostream>

Box::Box(double widthVal, double heightVal, double lengthVal){
    width = widthVal;
    height = heightVal;
    length = lengthVal;
}

Box::Box(){};

double Box::Volume(){
    return width*height*length;
}

