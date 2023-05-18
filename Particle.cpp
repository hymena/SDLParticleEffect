//
// Created by Omer on 5/17/2023.
//

#include "Particle.h"
#include<stdlib.h>
#include<math.h>

namespace farukprogramming {
    Particle::Particle():m_x(0),m_y(0) {
        m_direction = (2* M_PI* rand())/RAND_MAX;
        m_speed =(0.0001*rand())/RAND_MAX;
    }

    void Particle::update(int interval) {
        double xspeed = m_speed * cos(m_direction);
        double yspeed = m_speed * sin(m_direction);

        m_x += xspeed * interval;
        m_y += yspeed * interval;
    }


    Particle::~Particle() {}
}