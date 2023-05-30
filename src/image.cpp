#include <iostream>
#include "../include/image.hpp"

Pixel get_pixel(Image image, int x, int y)
{
    const int index = image.width * y + x;

    return image.pixels[index];
}

void set_pixel(Image *image, int x, int y, Pixel pixel)
{
    const int index = image->width * y + x;

    image->pixels[index] = pixel;
}

void image_to_ppm(Image image)
{
}
