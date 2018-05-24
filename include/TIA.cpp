//
// Created by frain on 5/21/18.
//

#include <iostream>
#include "TIA.h"

TIA::TIA() : mainWindow(sf::VideoMode(192,160), "VCS EMU v0.1")
{
    //background
    if (!tex.loadFromFile("splash.bmp")); //eh...
    bg.setTexture(tex);

    //texture for display
    if (!disp.create(192, 160)); //žnjak

    //debug --fill video memory with random bits
    extern uint8_t memory[65535];
    int tmp = 33279;
    for(int i = 0; i < 192*160*4; i += 4) {
        memory[tmp++] = rand()%256;
    }
}

TIA::~TIA() {
    delete [] pixels;
}

const void TIA::draw() {
    processMemory();

    if(memEmpty){
        mainWindow.draw(bg);
    } else {
        disp.update(pixels);
        screen.setTexture(disp);
        mainWindow.draw(screen);
    }
}

void TIA::processMemory() {
    //read memory and fill pixel array
    extern const uint8_t memory[65535];

    //for(register int i = 33279; i < 64000; ++i) {
    int tmp = 33279;
    for(int i = 0; i < 192*160*4; i += 4) {
        //std::cout<<memory[tmp++];
        pixels[i] = 115;   //r
        pixels[i+1] = 55; //g
        pixels[i+2] = 155; //b
        pixels[i+3] = 255; //a
    }
    //exit(0);
    //set memEmpty to false if we have anything in the video memory
    memEmpty = false;
}

