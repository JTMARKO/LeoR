#include <cmath>
#include "../include/vector.hpp"

float Vector3::magnitude()
{
    const float squared_sum = x * x + y * y + z * z;

    return sqrt(squared_sum);
}

float dot(Vector3 v1, Vector3 v2)
{
    const float product = v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
    const float normalizer = v1.magnitude() * v2.magnitude();

    return product / normalizer;
}