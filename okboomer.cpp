// Copyright (c) 2019 Joseph Palermo All rights reserved.
//
// Created by: Joseph Palermo
// Created on: November 2019
// This program is the meme program

#include <iostream>


int main() {
    // this function prints memes
    
    // variables
    std::string memeString;
    float meme;

    // input
    std::cout << "Which meme do you want: ";
    std::cin >> memeString;

    // output
    
    while (true) {
        try {
            meme = std::stof(memeString);

            if (meme == 0) {
            std::cout << "yOu CaNt AlWaYs GeT, wHaT yOu WaNt! " << "";
            } if (meme == 1) {
            std::cout << "Ok, boomer. " << " ";
            } if (meme == 2) {
            std::cout << "sk";
            } if (meme == 3) {
            std::cout << "BIG BOOBS‽ um chile anyways so... ";
            }
        } catch (std::invalid_argument) {
            std::cout << "You've dun did it again";
            break;
        }
    }
}
