// Simple struct representing a 3-dim vector
struct Vector3
{
    float x, y, z;
};

struct Ray3
{
    Vector3 origin;
    Vector3 direction;
};

/**
 * Calulates the dot product between two Vector3 objects
 *
 * @param v1, v2 two Vector3 structs to dot
 * @returns float representing the dot product of two vectors
 */
float dot(Vector3 *v1, Vector3 *v2);

/**
 * Calculates and returns the magnitude of the given vector
 *
 * @param v vector which magnitude is to be returned
 * @returns float representing the magnitude of the vector
 */
float magnitude(Vector3 *v);

/**
 * Calculates a new, rotated vector around an axis
 *
 * @param angle angle in radians which vector is rotated
 * @param vector pointer to a vector to be rotated
 * @param axis pointer to a vector to be the axis of rotation
 */
Vector3 rotate(float angle, Vector3 *vector, Vector3 *axis);

/**
 * Normalizes a vector
 *
 * @param vector Vector3 object to be normalized
 */
void normalize(Vector3 *vector);