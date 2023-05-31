#include <string>
#include "image.hpp"
#include "vector.hpp"

using namespace std;

// Circle class right now
class SceneObject
{
    Vector3 position;
    Vector3 radius;

    float emissivity;
    float roughness;
    Vector3 color;

public:
    SceneObject(Vector3 position, float startRadius, Vector3 color, float startRoughness, float startEmissivity);
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
    Scene(Ray3 startCamera, float startFov = 1.22173, int startWidth = 300, int startHeight = 200);

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

    Pixel traceRay(int x, int y);
};
