#include <iostream>
#include "collision.hpp"

void test_simple_momentum_conservation() {
    using v3d = Collision::v3d;
    v3d u(0.5, 0.5, 0.5);
    v3d v(-0.5, -0.5, -0.5);
    double b = 0.5;
    double e = 0;
    v3d u1, v1;
    Collision collision;
    collision.SimpleCollide(u, v, b, e, u1, v1);
    const double tolerance = 1e-12;
    for (size_t axis = 0; axis < 3; ++axis) {
        if (std::abs(u[axis] + v[axis] - u1[axis] - v1[axis]) > tolerance) {
            std::cout << "test simple momentum conservation - fail" << std::endl;
            return;
        }
    }
    std::cout << "test simple momentum conservation - ok" << std::endl;
}

int main() {
    test_simple_momentum_conservation();
}
