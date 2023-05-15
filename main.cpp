#include <iostream>
#include <SDL.h>
#include "Screen.h"
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
        for(int y =0;y< Screen::SCREEN_HEIGHT;y++){
            for(int x = 0; x< Screen::SCREEN_WIDTH;x++){
                screen.setPixel(x,y,128,0,255);
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
