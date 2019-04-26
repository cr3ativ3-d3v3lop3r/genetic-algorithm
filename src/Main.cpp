/*
 * Filename: Main.cpp
 * Author: Callum Cooper
 * Date: 26-04-19
 * Description: Entry point to the application.
 */

#include <iostream>
#include "../include/FileReader.h"

using namespace std;

int main(void)
{

    FileReader* fr = new FileReader("../../resources/data.dat");

    // First read the file lines
    fr->readFileLines();

    // Secondly, display the file lines
    for (size_t i = 0; i < fr->getFileLines().size(); ++i)
    {
        cout << fr->getFileLines()[i] << endl;
    }

    delete fr;

    cin.ignore(0);

    return 0;
}
