//
// Created by Omer on 5/17/2023.
//

#ifndef SDLSETUP_PARTICLE_H
#define SDLSETUP_PARTICLE_H

namespace farukprogramming {

    struct Particle {
        double m_x;
        double m_y;
        double m_xspeed;
        double m_yspeed;
    public:
        Particle();
        virtual ~Particle();
        void update();
    };

} // farukprogramming

#endif //SDLSETUP_PARTICLE_H
