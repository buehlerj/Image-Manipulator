//
// Created by Jeffrey on 5/28/2016.
//

#include "imports.h"
#include "Image.h"

int main(int argc, char*argv[]) {
    // Check number of input arguments
    if (argc != 2) {cerr << "ERROR: Incorrect number of arguemnts: " << argc << endl; return -1;}

    ifstream arg1(argv[1]);
    if (arg1.fail()) {cerr << "ERROR: Could not read in the first argument: " << argv[1] << endl; return -1;}

    Image i1(arg1);


    cout << "Line Return" << endl;
    cout << "--- PROGRAM RETURNED SUCCESSFULLY ---" << endl;
    return 0;
}