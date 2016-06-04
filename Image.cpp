//
// Created by Jeffrey on 5/28/2016.
//

#include "Image.h"

bool Image::read(istream& file) {
    return true;
}

string Image::get_file_name() {
    return file_name;
}

string Image::get_file_type() {
    return file_type;
}

void Image::set_file_name(string name) {
    file_name = name;
}

void Image::set_file_type(string type) {
    file_type = type;
}