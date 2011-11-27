
#include "interpolation.hpp"

namespace fluo {

float Interpolation::linear(float a, float b, float factor) {
    return a + (b-a) * factor;
}

CL_Vec3f Interpolation::linear(const CL_Vec3f& a, const CL_Vec3f& b, float factor) {
    CL_Vec3f ret;
    ret.x = linear(a.x, b.x, factor);
    ret.y = linear(a.y, b.y, factor);
    ret.z = linear(a.z, b.z, factor);
    return ret;
}

}
