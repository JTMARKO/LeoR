#include "vector.hpp"
#include "image.hpp"

// Sphere class right now
class SceneObject
{
    Vector3 position;
    Vector3 radius;

    float emissivity;
    float roughness;
    Vector3 color;

public:
    /**
     * Constructs a new SceneObject (sphere)
     *
     * @param position origin of the SceneObject
     * @param startRadius radius of the sphere
     * @param color RGB color of the sphere in Pixel
     * @param startRoughness roughness of the sphere
     * @param startEmissivity emissivity of the sphere
     */
    SceneObject(Vector3 *position, float startRadius, Pixel *color,
                float startRoughness, float startEmissivity);

    /**
     * Checks for collision between a vector and the sphere
     *
     * @param ray ray struct to be checked for collision
     * @returns true iff there exists a collision between the ray and sphere
     */
    bool didCollide(Ray3 *ray);

    /**
     * Makes a semi-random ray after colliding with the sphere
     *
     * @param ray ray struct to be collided
     * @returns a Ray3 pointer to a struct which contains the next traced ray
     */
    Ray3 *nextRayAfterCollision(Ray3 *ray);
};