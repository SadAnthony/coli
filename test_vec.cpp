#include <iostream>

#include "vec.hpp"

void test_sum() {
    vec3<int> u(1, 2, 3);
    vec3<int> v(1, 1, 1);
    vec3<int> w = u + v;
    if (w[0] == 1+1 && w[1] == 2+1 && w[2] == 3+1)
        std::cout << "test vec3 sum - ok" << std::endl;
}

int main() {
    test_sum();
}
