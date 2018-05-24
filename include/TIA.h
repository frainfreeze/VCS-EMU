//
// Created by frain on 5/21/18.
//

#ifndef SRC_TIA_H
#define SRC_TIA_H

/* Television Interface Adapter, simulated, not emulated */

#include <SFML/Graphics.hpp>
using namespace sf;

class TIA {
public:
    TIA();
    ~TIA();
    const void draw();
    sf::RenderWindow mainWindow;

private:
    void processMemory();

    // draw splash if video memory is empty
    bool memEmpty = true;
    sf::Texture tex;
    sf::Sprite bg;

    sf::Uint8* pixels = new sf::Uint8[192 * 160 * 4]; // w,h,rgba
    sf::Texture disp;
    sf::Sprite screen;
};

#endif //SRC_TIA_H
