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
        // Check for messages/events

        if(!screen.processEvents())
            break;
    }

    screen.close();
    return 0;
}
