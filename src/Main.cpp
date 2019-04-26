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

    fr->readFileLines();

    delete fr;

    cin.ignore(0);

    return 0;
}
