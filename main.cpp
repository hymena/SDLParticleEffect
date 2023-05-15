#include <iostream>
#include <SDL.h>
#include "Screen.h"
#include<math.h>

using namespace std;
using namespace farukprogramming;

int main(int argc, char* args[]) {

    Screen screen;
    if(!screen.init()){
        cout<<"Error initialising SDl"<< endl;
    }

    while(true){
        // Update particles
        // Draw particles

        // Color changing algorithm
        int elapsed = SDL_GetTicks();
        unsigned char green =(unsigned char) ((1 + sin(elapsed * 0.0005))*128);
        unsigned char red =(unsigned char) ((1 + sin(elapsed * 0.001))*128);
        unsigned char blue =(unsigned char) ((1 + sin(elapsed * 0.0003))*128);

        for(int y =0;y< Screen::SCREEN_HEIGHT;y++){
            for(int x = 0; x< Screen::SCREEN_WIDTH;x++){
                screen.setPixel(x,y,red,green,blue);
            }
        }
        //Draw the screen
        screen.update();

        // Check for messages/events
        if(!screen.processEvents())
            break;
    }

    screen.close();
    return 0;
}
