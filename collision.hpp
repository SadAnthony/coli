#ifndef _COLLISION_HPP_
#define _COLLISION_HPP_

#include "vec.hpp"

class Collision {
  public:
    using v3d = vec3<double>;
    // u, v - velocities of two particles before collision
    // b - impact parameter, e - azimuthal angle
    // u1, v1 - velocities of the particles after collison
    void SimpleCollide(const v3d& u, const v3d& v, double b, double e, v3d& u1, v3d& v1) const;
};

#endif
