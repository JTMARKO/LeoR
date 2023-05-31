#include <string>
#include "image.hpp"
#include "vector.hpp"

using namespace std;

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

// Large wrapper class for rendering/collision
class Scene
{
    Image image;
    Ray3 camera;
    float fov;
    int width, height;

    Ray3 *rays;

public:
    /**
     * Creates a new Scene object
     *
     * @param startCamera position and direction of the camera
     * @param startFov field of view of the camera in this scene
     * @param startWidth width in pixels of the scene render
     * @param startHeight height in pixels of the scene render
     */
    Scene(Ray3 *startCamera, float startFov = 1.22173, int startWidth = 300, int startHeight = 200);

    /**
     * Adds a new object to the scene
     *
     * @param object the object to be rendered by the scene
     */
    void addObject(SceneObject *object);

    /**
     * Renders a scene with a .ppm file
     *
     * @param fileName the name of the .ppm file to be rendered
     * @param maxBounce the maximum number of bounces for a ray
     */
    void sceneRender(string fileName, int maxBounce);

private:
    /**
     * Traces all rays in the scene
     */
    void traceAllRays();

    /**
     * Traces a ray in the scene then returns an associated color
     * 
     * @param x the x coordinate of the ray on the image projection plane
     * @param y the y coordinate of the ray on the image projection plane
     * @param maxBounce the maximum number of bounces that a ray can take
     * @returns A pixel color associated with the traced ray
     */
    Pixel traceRay(int x, int y, int maxBounce);
};
