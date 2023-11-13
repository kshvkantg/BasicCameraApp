//
// Created by Keshav kant gupta on 13/11/23.
//

#include "opencv-utils.h"
#include "opencv2/imgproc.hpp"

void myFlip(Mat src){
    flip(src,src,0);
    // flip the image vertically defined by flip code on same source
}

void myBlur(Mat src, float percentageBlur){
    GaussianBlur(src,src,Size(),percentageBlur);
    // blur on same image source
}