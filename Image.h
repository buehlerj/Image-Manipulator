//
// Created by Jeffrey on 5/28/2016.
//

#ifndef IMAGE_MANIPULATOR_IMAGE_H
#define IMAGE_MANIPULATOR_IMAGE_H

#include "imports.h"
#include "Pixel.h"

class Image {

public:
    Image(istream& file){
        if (!read(file)) {cerr << "ERROR: could not read file: " << endl;}
    };

    bool read(istream& file);

private:
    int width;
    int height;
    string file_type;
    Pixel row[];
    Pixel column[];

};


#endif //IMAGE_MANIPULATOR_IMAGE_H
