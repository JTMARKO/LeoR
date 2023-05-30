struct Image
{
    const int width, height;
    int pixels[];
};

/**
 * Creates a new png file image
 *
 * @param image the Image struct to be represented by a png file
 */
void draw_image(Image image);