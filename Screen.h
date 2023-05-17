//
// Created by Omer on 5/15/2023.
//

#ifndef SDLSETUP_SCREEN_H
#define SDLSETUP_SCREEN_H

#include<SDL.h>

namespace farukprogramming {
    class Screen {
    public:
        const static int SCREEN_WIDTH = 800;
        const static int SCREEN_HEIGHT = 600;
    private:
        SDL_Window *m_window;
        SDL_Renderer* m_renderer;
        SDL_Texture* m_texture;
        Uint32 *m_buffer;
    public:
        Screen();
        bool init();
        void update();
        void setPixel(int x, int y, Uint8 red,Uint8 green,Uint8 blue);
        void close();
        bool processEvents();
        void clear();
    };
}

#endif //SDLSETUP_SCREEN_H
