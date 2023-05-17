//
// Created by Omer on 5/17/2023.
//

#ifndef SDLSETUP_SWARM_H
#define SDLSETUP_SWARM_H
#include "Particle.h"

namespace farukprogramming {

    class Swarm {
    public:
        const static int NPARTICLES = 1000;
    private:
        Particle * m_pParticles;
    public:
        Swarm();
        ~Swarm();
        void update();

        const Particle * const getParticles(){return m_pParticles;};
    };

} // farukprogramming

#endif //SDLSETUP_SWARM_H
