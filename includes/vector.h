#include <stdio.h>

class Vector3
{
public:
    double x, y, z;

    /**
     * Creates a Vector3 object
     *
     * @param c1, c2, c3 Represents the vector in three dimensions
     */
    Vector3(double c1, double c2, double c3)
    {
        x, y, z = c1, c2, c3;
    }

    /**
     * Calculates the magnitude of the vector
     *
     * @returns the magnitude of the vector
     */
    float magnitude();
};

float Vector3::magnitude()
{
    const float squared_sum = x * x + y * y + z * z;

}

/**
 * Calulates the dot product between two Vector3 objects
 *
 * @param v1, v2 two Vector3 objects to dot
 * @returns float representing the dot product of two vectors
 */
float dot(Vector3 v1, Vector3 v2)
{
    const float product = v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
    const float normalizer = v1.magnitude() * v2.magnitude();

    return product / normalizer;
}