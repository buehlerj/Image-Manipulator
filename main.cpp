//
// Created by Jeffrey on 5/28/2016.
//

#include "imports.h"
#include "Image.h"
#include "ImageTypes/PGM.h"

string determine_file_type(istream& file) {
    char first = file.get();
    char second = file.get();
    if (first == 'P' && second == '2') {
        return "pgm";
    }
    else if (first == 'P' && second == '5') {
        return "pgma";
    }
    else {
        return "";
    }
}

string get_file_type (istream& file, string file_name) {
    int dot_pos = file_name.find((char) 46);
    if (dot_pos > -1)
        return file_name.substr(dot_pos + 1, file_name.length());
    else {
        cerr << "Uh-Oh: there is no extension on the file that you tried to load in." << endl;
        cout << "Would you like us to try to guess the image type? (y/n)" << endl;
        char response;
        cin >> response;
        if (response == 'y' || response == 'Y') {
            cout << "Alright! I'll scan the file and attempt to determine what kind of file this is!\n" << endl;
            string possible_file_type = determine_file_type(file);
            if (possible_file_type.empty() == 0) {
                cout << "Is this a " << possible_file_type << " type file? (y/n)" << endl;
                char file_type_response;
                cin >> file_type_response;
                if (file_type_response == 'y' || file_type_response == 'Y') {
                    cout << "Awesome! Thank you very much" << endl;
                    return possible_file_type;
                }
            }
        }
    }
    return "";
}

int main(int argc, char*argv[]) {
    // Check number of input arguments
    if (argc != 2) {cerr << "ERROR: Incorrect number of arguemnts: " << argc << endl; return -1;}

    ifstream input_file(argv[1]);
    if (input_file.fail()) {cerr << "ERROR: Could not read in the first argument: " << argv[1] << endl; return -1;}


    int length_of_argv1 = ((string) argv[1]).length();

    int index_of_last_backslash = 0;
    for (int i = 0; i < length_of_argv1; i++) {
        if (argv[1][i] == (char) 92)
            index_of_last_backslash = i;
    }
    string input_file_name = ((string) argv[1]).substr(index_of_last_backslash + 1, length_of_argv1);
    string input_file_type = get_file_type(input_file, input_file_name);
    if (input_file_type.empty()) {
        cout << "I am sorry, I was not able to determine the file type that you tried to import. "
                "I apologize for the inconvenience, I was not able to find the file type that you were trying to "
                "import. I am always trying to keep this product up to date with new formats. If you would"
                "wish for me to include your file image type, please email the developer with the image"
                "file and he will get back to you! Thank you very much for using the Image Manipulator.\n"
                "Jeffrey Dean Buehler Jr.\njeffreydeanbuehler@gmail.com\njeffrey.d.buehler@hpe.com" << endl;
        return -1;
    }

    if (input_file_type == "pgm") {
//        PGM image1(input_file, input_file_name);
//        image1.read();
    }











    cout << "\n\n\n\n\n----- PROGRAM RETURNED SUCCESSFULLY -----" << endl;
    return 0;
}
