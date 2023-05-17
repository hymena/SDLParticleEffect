//
// Created by Omer on 5/17/2023.
//

#include "Swarm.h"

namespace farukprogramming {
    Swarm::Swarm() {
        m_pParticles = new Particle[NPARTICLES];
    }

    void Swarm::update() {
        for (int i = 0; i < Swarm::NPARTICLES; i++) {
            m_pParticles[i].update();
        }
    }
    Swarm::~Swarm() {
        delete [] m_pParticles;
    }
} // farukprogramming