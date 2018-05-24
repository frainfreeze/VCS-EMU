//
// Created by frain on 5/21/18.
//

#include <iostream>
#include "TIA.h"

TIA::TIA() : mainWindow(sf::VideoMode(192, 160), "VCS EMU v0.1") {

    //background
    if (!tex.loadFromFile("splash.bmp")); //eh...
    bg.setTexture(tex);

    //texture for display
    if (!disp.create(192, 160)); //žnjak
}

TIA::~TIA() {
    delete [] pixels;
}

const void TIA::draw() {
    processMemory();

    //if (memEmpty) {
    //    mainWindow.draw(bg);
    //} else {
        disp.update(pixels);
        screen.setTexture(disp);
        mainWindow.draw(screen);
    //}
}

void TIA::processMemory() {
    //read memory and fill pixel array
    extern uint8_t memory[65535];

    //random static
    //int tmp = 33279;
    //for (int i = 0; i < 192 * 160 * 4; i += 4) {
    //    memory[tmp++] = rand()%126;
    //}

    int tmp = 33279;
    for (int i = 0; i < 192 * 160 * 4; i += 4) {
        switch (memory[tmp++]) { //(memory[29997]){
            case 0:
                pixels[i] = 0;   //r
                pixels[i+1] = 0;   //g
                pixels[i+2] = 0;   //b
                pixels[i+3] = 255;   //a
                break;
            case 1:
                pixels[i] = 68;   //r
                pixels[i+1] = 68;   //g
                pixels[i+2] = 0;   //b
                pixels[i+3] = 255;   //a
                break;
            case 2:
                pixels[i] = 112;   //r
                pixels[i+1] = 40;   //g
                pixels[i+2] = 0;   //b
                pixels[i+3] = 255;   //a
                break;
            case 3:
                pixels[i] = 132;   //r
                pixels[i+1] = 24;   //g
                pixels[i+2] = 0;   //b
                pixels[i+3] = 255;   //a
                break;
            case 4:
                pixels[i] = 136;   //r
                pixels[i+1] = 0;   //g
                pixels[i+2] = 0;   //b
                pixels[i+3] = 255;   //a
                break;
            case 5:
                pixels[i] = 120;   //r
                pixels[i+1] = 0;   //g
                pixels[i+2] = 92;   //b
                pixels[i+3] = 255;   //a
                break;
            case 6:
                pixels[i] = 72;   //r
                pixels[i+1] = 0;   //g
                pixels[i+2] = 120;   //b
                pixels[i+3] = 255;   //a
                break;
            case 7:
                pixels[i] = 20;   //r
                pixels[i+1] = 0;   //g
                pixels[i+2] = 132;   //b
                pixels[i+3] = 255;   //a
                break;
            case 8:
                pixels[i] = 0;   //r
                pixels[i+1] = 0;   //g
                pixels[i+2] = 136;   //b
                pixels[i+3] = 255;   //a
                break;
            case 9:
                pixels[i] = 0;   //r
                pixels[i+1] = 24;   //g
                pixels[i+2] = 124;   //b
                pixels[i+3] = 255;   //a
                break;
            case 10:
                pixels[i] = 0;   //r
                pixels[i+1] = 44;   //g
                pixels[i+2] = 92;   //b
                pixels[i+3] = 255;   //a
                break;
            case 11:
                pixels[i] = 0;   //r
                pixels[i+1] = 64;   //g
                pixels[i+2] = 44;   //b
                pixels[i+3] = 255;   //a
                break;
            case 12:
                pixels[i] = 0;   //r
                pixels[i+1] = 60;   //g
                pixels[i+2] = 0;   //b
                pixels[i+3] = 255;   //a
                break;
            case 13:
                pixels[i] = 20;   //r
                pixels[i+1] = 56;   //g
                pixels[i+2] = 0;   //b
                pixels[i+3] = 255;   //a
                break;
            case 14:
                pixels[i] = 44;   //r
                pixels[i+1] = 48;   //g
                pixels[i+2] = 0;   //b
                pixels[i+3] = 255;   //a
                break;
            case 15:
                pixels[i] = 68;   //r
                pixels[i+1] = 40;   //g
                pixels[i+2] = 0;   //b
                pixels[i+3] = 255;   //a
                break;

            case 16:
                pixels[i] = 64;   //r
                pixels[i+1] = 64;   //g
                pixels[i+2] = 64;   //b
                pixels[i+3] = 255;   //a
                break;
            case 17:
                pixels[i] = 100;   //r
                pixels[i+1] = 100;   //g
                pixels[i+2] = 16;   //b
                pixels[i+3] = 255;   //a
                break;
            case 18:
                pixels[i] = 132;   //r
                pixels[i+1] = 68;   //g
                pixels[i+2] = 20;   //b
                pixels[i+3] = 255;   //a
                break;
            case 19:
                pixels[i] = 152;   //r
                pixels[i+1] = 52;   //g
                pixels[i+2] = 24;   //b
                pixels[i+3] = 255;   //a
                break;
            case 20:
                pixels[i] = 156;   //r
                pixels[i+1] = 32;   //g
                pixels[i+2] = 32;   //b
                pixels[i+3] = 255;   //a
                break;
            case 21:
                pixels[i] = 140;   //r
                pixels[i+1] = 32;   //g
                pixels[i+2] = 116;   //b
                pixels[i+3] = 255;   //a
                break;
            case 22:
                pixels[i] = 96;   //r
                pixels[i+1] = 32;   //g
                pixels[i+2] = 144;   //b
                pixels[i+3] = 255;   //a
                break;
            case 23:
                pixels[i] = 48;   //r
                pixels[i+1] = 32;   //g
                pixels[i+2] = 152;   //b
                pixels[i+3] = 255;   //a
                break;
            case 24:
                pixels[i] = 28;   //r
                pixels[i+1] = 32;   //g
                pixels[i+2] = 156;   //b
                pixels[i+3] = 255;   //a
                break;
            case 25:
                pixels[i] = 28;   //r
                pixels[i+1] = 56;   //g
                pixels[i+2] = 144;   //b
                pixels[i+3] = 255;   //a
                break;
            case 26:
                pixels[i] = 28;   //r
                pixels[i+1] = 76;   //g
                pixels[i+2] = 120;   //b
                pixels[i+3] = 255;   //a
                break;
            case 27:
                pixels[i] = 28;   //r
                pixels[i+1] = 92;   //g
                pixels[i+2] = 72;   //b
                pixels[i+3] = 255;   //a
                break;
            case 28:
                pixels[i] = 32;   //r
                pixels[i+1] = 92;   //g
                pixels[i+2] = 32;   //b
                pixels[i+3] = 255;   //a
                break;
            case 29:
                pixels[i] = 52;   //r
                pixels[i+1] = 92;   //g
                pixels[i+2] = 28;   //b
                pixels[i+3] = 255;   //a
                break;
            case 30:
                pixels[i] = 76;   //r
                pixels[i+1] = 80;   //g
                pixels[i+2] = 28;   //b
                pixels[i+3] = 255;   //a
                break;
            case 31:
                pixels[i] = 100;   //r
                pixels[i+1] = 72;   //g
                pixels[i+2] = 24;   //b
                pixels[i+3] = 255;   //a
                break;

            case 32:
                pixels[i] = 108;   //r
                pixels[i+1] = 108;   //g
                pixels[i+2] = 108;   //b
                pixels[i+3] = 255;   //a
                break;
            case 33:
                pixels[i] = 132;   //r
                pixels[i+1] = 132;   //g
                pixels[i+2] = 36;   //b
                pixels[i+3] = 255;   //a
                break;
            case 34:
                pixels[i] = 152;   //r
                pixels[i+1] = 92;   //g
                pixels[i+2] = 40;   //b
                pixels[i+3] = 255;   //a
                break;
            case 35:
                pixels[i] = 172;   //r
                pixels[i+1] = 80;   //g
                pixels[i+2] = 48;   //b
                pixels[i+3] = 255;   //a
                break;
            case 36:
                pixels[i] = 176;   //r
                pixels[i+1] = 60;   //g
                pixels[i+2] = 60;   //b
                pixels[i+3] = 255;   //a
                break;
            case 37:
                pixels[i] = 160;   //r
                pixels[i+1] = 60;   //g
                pixels[i+2] = 136;   //b
                pixels[i+3] = 255;   //a
                break;
            case 38:
                pixels[i] = 120;   //r
                pixels[i+1] = 60;   //g
                pixels[i+2] = 164;   //b
                pixels[i+3] = 255;   //a
                break;
            case 39:
                pixels[i] = 76;   //r
                pixels[i+1] = 60;   //g
                pixels[i+2] = 172;   //b
                pixels[i+3] = 255;   //a
                break;
            case 40:
                pixels[i] = 56;   //r
                pixels[i+1] = 64;   //g
                pixels[i+2] = 176;   //b
                pixels[i+3] = 255;   //a
                break;
            case 41:
                pixels[i] = 56;   //r
                pixels[i+1] = 84;   //g
                pixels[i+2] = 168;   //b
                pixels[i+3] = 255;   //a
                break;
            case 42:
                pixels[i] = 56;   //r
                pixels[i+1] = 104;   //g
                pixels[i+2] = 144;   //b
                pixels[i+3] = 255;   //a
                break;
            case 43:
                pixels[i] = 56;   //r
                pixels[i+1] = 124;   //g
                pixels[i+2] = 100;   //b
                pixels[i+3] = 255;   //a
                break;
            case 44:
                pixels[i] = 64;   //r
                pixels[i+1] = 124;   //g
                pixels[i+2] = 64;   //b
                pixels[i+3] = 255;   //a
                break;
            case 45:
                pixels[i] = 80;   //r
                pixels[i+1] = 124;   //g
                pixels[i+2] = 56;   //b
                pixels[i+3] = 255;   //a
                break;
            case 46:
                pixels[i] = 104;   //r
                pixels[i+1] = 112;   //g
                pixels[i+2] = 52;   //b
                pixels[i+3] = 255;   //a
                break;
            case 47:
                pixels[i] = 132;   //r
                pixels[i+1] = 104;   //g
                pixels[i+2] = 48;   //b
                pixels[i+3] = 255;   //a
                break;

            case 48:
                pixels[i] = 144;   //r
                pixels[i+1] = 144;   //g
                pixels[i+2] = 144;   //b
                pixels[i+3] = 255;   //a
                break;
            case 49:
                pixels[i] = 160;   //r
                pixels[i+1] = 160;   //g
                pixels[i+2] = 52;   //b
                pixels[i+3] = 255;   //a
                break;
            case 50:
                pixels[i] = 172;   //r
                pixels[i+1] = 120;   //g
                pixels[i+2] = 60;   //b
                pixels[i+3] = 255;   //a
                break;
            case 51:
                pixels[i] = 192;   //r
                pixels[i+1] = 104;   //g
                pixels[i+2] = 72;   //b
                pixels[i+3] = 255;   //a
                break;
            case 52:
                pixels[i] = 192;   //r
                pixels[i+1] = 88;   //g
                pixels[i+2] = 88;   //b
                pixels[i+3] = 255;   //a
                break;
            case 53:
                pixels[i] = 176;   //r
                pixels[i+1] = 88;   //g
                pixels[i+2] = 156;   //b
                pixels[i+3] = 255;   //a
                break;
            case 54:
                pixels[i] = 140;   //r
                pixels[i+1] = 88;   //g
                pixels[i+2] = 184;   //b
                pixels[i+3] = 255;   //a
                break;
            case 55:
                pixels[i] = 104;   //r
                pixels[i+1] = 88;   //g
                pixels[i+2] = 192;   //b
                pixels[i+3] = 255;   //a
                break;
            case 56:
                pixels[i] = 80;   //r
                pixels[i+1] = 92;   //g
                pixels[i+2] = 192;   //b
                pixels[i+3] = 255;   //a
                break;
            case 57:
                pixels[i] = 80;   //r
                pixels[i+1] = 112;   //g
                pixels[i+2] = 188;   //b
                pixels[i+3] = 255;   //a
                break;
            case 58:
                pixels[i] = 80;   //r
                pixels[i+1] = 132;   //g
                pixels[i+2] = 172;   //b
                pixels[i+3] = 255;   //a
                break;
            case 59:
                pixels[i] = 80;   //r
                pixels[i+1] = 156;   //g
                pixels[i+2] = 128;   //b
                pixels[i+3] = 255;   //a
                break;
            case 60:
                pixels[i] = 92;   //r
                pixels[i+1] = 156;   //g
                pixels[i+2] = 92;   //b
                pixels[i+3] = 255;   //a
                break;
            case 61:
                pixels[i] = 108;   //r
                pixels[i+1] = 152;   //g
                pixels[i+2] = 80;   //b
                pixels[i+3] = 255;   //a
                break;
            case 62:
                pixels[i] = 132;   //r
                pixels[i+1] = 140;   //g
                pixels[i+2] = 76;   //b
                pixels[i+3] = 255;   //a
                break;
            case 63:
                pixels[i] = 160;   //r
                pixels[i+1] = 132;   //g
                pixels[i+2] = 68;   //b
                pixels[i+3] = 255;   //a
                break;

            case 64:
                pixels[i] = 176;   //r
                pixels[i+1] = 176;   //g
                pixels[i+2] = 176;   //b
                pixels[i+3] = 255;   //a
                break;
            case 65:
                pixels[i] = 184;   //r
                pixels[i+1] = 184;   //g
                pixels[i+2] = 64;   //b
                pixels[i+3] = 255;   //a
                break;
            case 66:
                pixels[i] = 188;   //r
                pixels[i+1] = 140;   //g
                pixels[i+2] = 76;   //b
                pixels[i+3] = 255;   //a
                break;
            case 67:
                pixels[i] = 208;   //r
                pixels[i+1] = 128;   //g
                pixels[i+2] = 92;   //b
                pixels[i+3] = 255;   //a
                break;
            case 68:
                pixels[i] = 208;   //r
                pixels[i+1] = 112;   //g
                pixels[i+2] = 112;   //b
                pixels[i+3] = 255;   //a
                break;
            case 69:
                pixels[i] = 192;   //r
                pixels[i+1] = 112;   //g
                pixels[i+2] = 176;   //b
                pixels[i+3] = 255;   //a
                break;
            case 70:
                pixels[i] = 160;   //r
                pixels[i+1] = 112;   //g
                pixels[i+2] = 204;   //b
                pixels[i+3] = 255;   //a
                break;
            case 71:
                pixels[i] = 124;   //r
                pixels[i+1] = 112;   //g
                pixels[i+2] = 208;   //b
                pixels[i+3] = 255;   //a
                break;
            case 72:
                pixels[i] = 104;   //r
                pixels[i+1] = 116;   //g
                pixels[i+2] = 208;   //b
                pixels[i+3] = 255;   //a
                break;
            case 73:
                pixels[i] = 104;   //r
                pixels[i+1] = 136;   //g
                pixels[i+2] = 204;   //b
                pixels[i+3] = 255;   //a
                break;
            case 74:
                pixels[i] = 104;   //r
                pixels[i+1] = 156;   //g
                pixels[i+2] = 192;   //b
                pixels[i+3] = 255;   //a
                break;
            case 75:
                pixels[i] = 104;   //r
                pixels[i+1] = 180;   //g
                pixels[i+2] = 148;   //b
                pixels[i+3] = 255;   //a
                break;
            case 76:
                pixels[i] = 116;   //r
                pixels[i+1] = 180;   //g
                pixels[i+2] = 116;   //b
                pixels[i+3] = 255;   //a
                break;
            case 77:
                pixels[i] = 132;   //r
                pixels[i+1] = 180;   //g
                pixels[i+2] = 104;   //b
                pixels[i+3] = 255;   //a
                break;
            case 78:
                pixels[i] = 156;   //r
                pixels[i+1] = 168;   //g
                pixels[i+2] = 100;   //b
                pixels[i+3] = 255;   //a
                break;
            case 79:
                pixels[i] = 184;   //r
                pixels[i+1] = 156;   //g
                pixels[i+2] = 88;   //b
                pixels[i+3] = 255;   //a
                break;

            case 80:
                pixels[i] = 200;   //r
                pixels[i+1] = 200;   //g
                pixels[i+2] = 200;   //b
                pixels[i+3] = 255;   //a
                break;
            case 81:
                pixels[i] = 208;   //r
                pixels[i+1] = 208;   //g
                pixels[i+2] = 80;   //b
                pixels[i+3] = 255;   //a
                break;
            case 82:
                pixels[i] = 204;   //r
                pixels[i+1] = 160;   //g
                pixels[i+2] = 92;   //b
                pixels[i+3] = 255;   //a
                break;
            case 83:
                pixels[i] = 224;   //r
                pixels[i+1] = 148;   //g
                pixels[i+2] = 112;   //b
                pixels[i+3] = 255;   //a
                break;
            case 84:
                pixels[i] = 224;   //r
                pixels[i+1] = 136;   //g
                pixels[i+2] = 136;   //b
                pixels[i+3] = 255;   //a
                break;
            case 85:
                pixels[i] = 208;   //r
                pixels[i+1] = 132;   //g
                pixels[i+2] = 192;   //b
                pixels[i+3] = 255;   //a
                break;
            case 86:
                pixels[i] = 180;   //r
                pixels[i+1] = 132;   //g
                pixels[i+2] = 220;   //b
                pixels[i+3] = 255;   //a
                break;
            case 87:
                pixels[i] = 148;   //r
                pixels[i+1] = 136;   //g
                pixels[i+2] = 224;   //b
                pixels[i+3] = 255;   //a
                break;
            case 88:
                pixels[i] = 124;   //r
                pixels[i+1] = 140;   //g
                pixels[i+2] = 224;   //b
                pixels[i+3] = 255;   //a
                break;
            case 89:
                pixels[i] = 124;   //r
                pixels[i+1] = 156;   //g
                pixels[i+2] = 220;   //b
                pixels[i+3] = 255;   //a
                break;
            case 90:
                pixels[i] = 124;   //r
                pixels[i+1] = 180;   //g
                pixels[i+2] = 212;   //b
                pixels[i+3] = 255;   //a
                break;
            case 91:
                pixels[i] = 124;   //r
                pixels[i+1] = 208;   //g
                pixels[i+2] = 172;   //b
                pixels[i+3] = 255;   //a
                break;
            case 92:
                pixels[i] = 140;   //r
                pixels[i+1] = 208;   //g
                pixels[i+2] = 140;   //b
                pixels[i+3] = 255;   //a
                break;
            case 93:
                pixels[i] = 156;   //r
                pixels[i+1] = 204;   //g
                pixels[i+2] = 124;   //b
                pixels[i+3] = 255;   //a
                break;
            case 94:
                pixels[i] = 180;   //r
                pixels[i+1] = 192;   //g
                pixels[i+2] = 120;   //b
                pixels[i+3] = 255;   //a
                break;
            case 95:
                pixels[i] = 208;   //r
                pixels[i+1] = 180;   //g
                pixels[i+2] = 108;   //b
                pixels[i+3] = 255;   //a
                break;

            case 96:
                pixels[i] = 220;   //r
                pixels[i+1] = 220;   //g
                pixels[i+2] = 220;   //b
                pixels[i+3] = 255;   //a
                break;
            case 97:
                pixels[i] = 232;   //r
                pixels[i+1] = 232;   //g
                pixels[i+2] = 92;   //b
                pixels[i+3] = 255;   //a
                break;
            case 98:
                pixels[i] = 220;   //r
                pixels[i+1] = 180;   //g
                pixels[i+2] = 104;   //b
                pixels[i+3] = 255;   //a
                break;
            case 99:
                pixels[i] = 236;   //r
                pixels[i+1] = 168;   //g
                pixels[i+2] = 128;   //b
                pixels[i+3] = 255;   //a
                break;
            case 100:
                pixels[i] = 236;   //r
                pixels[i+1] = 160;   //g
                pixels[i+2] = 160;   //b
                pixels[i+3] = 255;   //a
                break;
            case 101:
                pixels[i] = 220;   //r
                pixels[i+1] = 156;   //g
                pixels[i+2] = 208;   //b
                pixels[i+3] = 255;   //a
                break;
            case 102:
                pixels[i] = 196;   //r
                pixels[i+1] = 156;   //g
                pixels[i+2] = 236;   //b
                pixels[i+3] = 255;   //a
                break;
            case 103:
                pixels[i] = 168;   //r
                pixels[i+1] = 160;   //g
                pixels[i+2] = 236;   //b
                pixels[i+3] = 255;   //a
                break;
            case 104:
                pixels[i] = 144;   //r
                pixels[i+1] = 164;   //g
                pixels[i+2] = 236;   //b
                pixels[i+3] = 255;   //a
                break;
            case 105:
                pixels[i] = 144;   //r
                pixels[i+1] = 180;   //g
                pixels[i+2] = 236;   //b
                pixels[i+3] = 255;   //a
                break;
            case 106:
                pixels[i] = 144;   //r
                pixels[i+1] = 204;   //g
                pixels[i+2] = 232;   //b
                pixels[i+3] = 255;   //a
                break;
            case 107:
                pixels[i] = 144;   //r
                pixels[i+1] = 228;   //g
                pixels[i+2] = 192;   //b
                pixels[i+3] = 255;   //a
                break;
            case 108:
                pixels[i] = 164;   //r
                pixels[i+1] = 228;   //g
                pixels[i+2] = 164;   //b
                pixels[i+3] = 255;   //a
                break;
            case 109:
                pixels[i] = 180;   //r
                pixels[i+1] = 228;   //g
                pixels[i+2] = 144;   //b
                pixels[i+3] = 255;   //a
                break;
            case 110:
                pixels[i] = 204;   //r
                pixels[i+1] = 212;   //g
                pixels[i+2] = 136;   //b
                pixels[i+3] = 255;   //a
                break;
            case 111:
                pixels[i] = 232;   //r
                pixels[i+1] = 204;   //g
                pixels[i+2] = 124;   //b
                pixels[i+3] = 255;   //a
                break;

            case 112:
                pixels[i] = 236;   //r
                pixels[i+1] = 236;   //g
                pixels[i+2] = 236;   //b
                pixels[i+3] = 255;   //a
                break;
            case 113:
                pixels[i] = 252;   //r
                pixels[i+1] = 252;   //g
                pixels[i+2] = 104;   //b
                pixels[i+3] = 255;   //a
                break;
            case 114:
                pixels[i] = 232;   //r
                pixels[i+1] = 204;   //g
                pixels[i+2] = 124;   //b
                pixels[i+3] = 255;   //a
                break;
            case 115:
                pixels[i] = 252;   //r
                pixels[i+1] = 188;   //g
                pixels[i+2] = 148;   //b
                pixels[i+3] = 255;   //a
                break;
            case 116:
                pixels[i] = 252;   //r
                pixels[i+1] = 180;   //g
                pixels[i+2] = 180;   //b
                pixels[i+3] = 255;   //a
                break;
            case 117:
                pixels[i] = 236;   //r
                pixels[i+1] = 176;   //g
                pixels[i+2] = 224;   //b
                pixels[i+3] = 255;   //a
                break;
            case 118:
                pixels[i] = 212;   //r
                pixels[i+1] = 176;   //g
                pixels[i+2] = 252;   //b
                pixels[i+3] = 255;   //a
                break;
            case 119:
                pixels[i] = 188;   //r
                pixels[i+1] = 180;   //g
                pixels[i+2] = 252;   //b
                pixels[i+3] = 255;   //a
                break;
            case 120:
                pixels[i] = 164;   //r
                pixels[i+1] = 184;   //g
                pixels[i+2] = 252;   //b
                pixels[i+3] = 255;   //a
                break;
            case 121:
                pixels[i] = 164;   //r
                pixels[i+1] = 200;   //g
                pixels[i+2] = 252;   //b
                pixels[i+3] = 255;   //a
                break;
            case 122:
                pixels[i] = 164;   //r
                pixels[i+1] = 224;   //g
                pixels[i+2] = 252;   //b
                pixels[i+3] = 255;   //a
                break;
            case 123:
                pixels[i] = 164;   //r
                pixels[i+1] = 252;   //g
                pixels[i+2] = 212;   //b
                pixels[i+3] = 255;   //a
                break;
            case 124:
                pixels[i] = 184;   //r
                pixels[i+1] = 252;   //g
                pixels[i+2] = 184;   //b
                pixels[i+3] = 255;   //a
                break;
            case 125:
                pixels[i] = 200;   //r
                pixels[i+1] = 252;   //g
                pixels[i+2] = 164;   //b
                pixels[i+3] = 255;   //a
                break;
            case 126:
                pixels[i] = 224;   //r
                pixels[i+1] = 236;   //g
                pixels[i+2] = 156;   //b
                pixels[i+3] = 255;   //a
                break;
            case 127:
                pixels[i] = 252;   //r
                pixels[i+1] = 224;   //g
                pixels[i+2] = 140;   //b
                pixels[i+3] = 255;   //a
                break;
            default:
                break;
        }
    }
    //set memEmpty to false if we have anything in the video memory
    //memEmpty = false;
}

