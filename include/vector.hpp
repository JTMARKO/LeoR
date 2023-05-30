#include <stdio.h>

struct Vector3
{
    float x, y, z;
};

/**
 * Calulates the dot product between two Vector3 objects
 *
 * @param v1, v2 two Vector3 structs to dot
 * @returns float representing the dot product of two vectors
 */
float dot(Vector3 v1, Vector3 v2);

/**
 * Calculates and returns the magnitude of the given vector
 *
 * @param v vector which magnitude is to be returned
 * @returns float representing the magnitude of the vector
 */
float magnitude(Vector3 v);