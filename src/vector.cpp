#include <cmath>
#include "../include/vector.hpp"

float magnitude(Vector3 *v)
{
    const float squared_sum = v->x * v->x + v->y * v->y + v->z * v->z;

    return sqrt(squared_sum);
}

float dot(Vector3 *v1, Vector3 *v2)
{
    const float product = v1->x * v2->x + v1->y * v2->y + v1->z * v2->z;
    const float normalizer = magnitude(v1) * magnitude(v2);

    return product / normalizer;
}

void normalize(Vector3 *v)
{
    const float mag = magnitude(v);

    v->x /= mag;
    v->y /= mag;
    v->z /= mag;
}