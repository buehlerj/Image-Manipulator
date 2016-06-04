//
// Created by Jeffrey on 5/28/2016.
//

#ifndef IMAGE_MANIPULATOR_IMAGE_H
#define IMAGE_MANIPULATOR_IMAGE_H

#include "imports.h"
#include "Pixel.h"

class Image {

public:
    Image(istream& file, string file_name){
        if (!read(file)) {cerr << "ERROR: could not read file: " << endl;}
    };

    bool read(istream& file);
    string determine_file_type(istream& file);
    string get_file_name();
    string get_file_type();
    void set_file_name(string name);
    void set_file_type(string type);

private:
    int width;
    int height;
    string file_type;
    string file_name;
    Pixel row[];

};


#endif //IMAGE_MANIPULATOR_IMAGE_H
