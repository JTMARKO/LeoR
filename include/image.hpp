struct Pixel
{
    int red, green, blue;
};

struct Image
{
    int width, height;
    Pixel *pixels;
};

/**
 * Creates an Image struct
 *
 * @param width width of the image
 * @param height height of the image
 */
Image *createImage(int width, int height);

/**
 * Destroys an Image struct
 * 
 * @param image the image to destroy
*/
void destroyImage(Image *image);

/**
 * Finds the pixel of a given index
 *
 * @param image the image to be looked up
 * @param x, y the x, y index of the pixel, where (0, 0) is bottom left in
 *             the range [0, image.width) and [0, image.height)
 * @returns a pixel object of the given index
 */
Pixel getPixel(Image *image, int x, int y);

/**
 * Changes the pixel of a given index
 *
 * @param image the image to be changed
 * @param x, y the x, y index of the pixel, where (0, 0) is bottom left
 * @param pixel a Pixel object which will update the pixel
 */
void setPixel(Image *image, int x, int y, Pixel pixel);

/**
 * Creates a new png file image
 *
 * @param image the Image struct to be represented by a png file
 */
void imageToPpm(Image *image);