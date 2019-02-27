#ifndef _VEC_HPP_
#define _VEC_HPP_

#include <iostream>

template <class T>
class vec3 {
  public:
    vec3() {}
    vec3(T x, T y, T z);
    T& operator[](size_t i) { return x_[i]; }
    const T& operator[](size_t i) const { return x_[i]; }
  private:
    T x_[3] = {0, 0, 0};
};

template <class T>
vec3<T>::vec3(T x, T y, T z) {
    x_[0] = x;
    x_[1] = y;
    x_[2] = z;
}

template <class T>
vec3<T> operator+(const vec3<T>& a, const vec3<T>& b) {
    vec3<T> c;
    c[0] = a[0] + b[0];
    c[1] = a[1] + b[1];
    c[2] = a[2] + b[2];
    return c;
}

#endif
