struct Pixel
{
    int red, green, blue;
};

struct Image
{
    const int width, height;
    Pixel pixels[];
};

/**
 * Finds the pixel of a given index
 *
 * @param image the image to be looked up
 * @param x, y the x, y index of the pixel, where (0, 0) is bottom left in
 *             the range [0, image.width) and [0, image.height)
 * @returns a pixel object of the given index
 */
Pixel get_pixel(Image image, int x, int y);

/**
 * Changes the pixel of a given index
 * 
 * @param image the image to be changed
 * @param x, y the x, y index of the pixel, where (0, 0) is bottom left
 * @param pixel a Pixel object which will update the pixel
*/
void set_pixel(Image *image, int x, int y, Pixel pixel);

/**
 * Creates a new png file image
 *
 * @param image the Image struct to be represented by a png file
 */
void image_to_ppm(Image image);