//
// Created by Omer on 5/17/2023.
//

#ifndef SDLSETUP_PARTICLE_H
#define SDLSETUP_PARTICLE_H

namespace farukprogramming {

    struct Particle {
        double m_x;
        double m_y;
    private:
        double m_speed;
        double m_direction;
    private:
        void init();
    public:
        Particle();
        virtual ~Particle();
        void update(int interval);

    };

} // farukprogramming

#endif //SDLSETUP_PARTICLE_H
