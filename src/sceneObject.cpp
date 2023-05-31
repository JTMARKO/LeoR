#include "../include/sceneObject.hpp"
#include "../include/vector.hpp"
#include "../include/image.hpp"

bool SceneObject::didCollide(Ray3 *ray)
{
    Vector3 offsetRayOrigin = {ray->origin.x - position.x,
                               ray->origin.y - position.y,
                               ray->origin.z - position.z};
}