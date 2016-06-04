//
// Created by Jeffrey on 5/28/2016.
//

#include "Image.h"

bool Image::read(istream& file) {
    cout << "HIT READ STATEMENT" << endl;
    char first = file.get();
    char second = file.get();
    if (first == 'P' && second == '2') {
        file_type = "PGM";
    }
    else {
        cerr << "ERROR 500: This image type has not been implemented yet. Sorry!" << endl;
        cout << "Please email the developer with the image you wish to modify, and he will" << endl;
        cout << "try to implement that type of image! Thank you for using my image modification program!" << endl;
        cout << "Jeffrey Dean Buehler Jr. - Intern @ Hewlett Packard Enterprise" << endl;
        cout << "jeffreydeanbuehler@gmail.com" << endl;
        cout << "jeffrey.d.buehler@hpe.com" << endl;
        return false;
    }
    cout << "You inputted a file type " << file_type << "." << endl;
    return true;
}