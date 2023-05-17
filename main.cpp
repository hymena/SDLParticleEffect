#include <iostream>
#include <SDL.h>
#include "Screen.h"
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include "Swarm.h"

using namespace std;
using namespace farukprogramming;

int main(int argc, char* args[]) {

    srand(time(NULL)); // seed the rand function

    Screen screen;
    if(!screen.init()){
        cout<<"Error initialising SDl"<< endl;
    }

    Swarm swarm;

    while(true){
        // Update particles
        // Color changing algorithm
        int elapsed = SDL_GetTicks();

        screen.clear();
        swarm.update();

        unsigned char green =(unsigned char) ((1 + sin(elapsed * 0.0005))*128);
        unsigned char red =(unsigned char) ((1 + sin(elapsed * 0.001))*128);
        unsigned char blue =(unsigned char) ((1 + sin(elapsed * 0.0003))*128);
        // Draw particles
        const Particle * const pParticles = swarm.getParticles();
        for (int i = 0; i < Swarm::NPARTICLES; i++) {
            Particle particle = pParticles[i];

            int x =(particle.m_x + 1) * Screen::SCREEN_WIDTH/2;
            int y =(particle.m_y + 1) * Screen::SCREEN_HEIGHT/2;

            screen.setPixel(x,y,red,green,blue);
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
