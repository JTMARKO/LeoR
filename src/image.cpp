#include <iostream>
#include "../include/image.hpp"

Image *createImage(int width, int height)
{
    Image *image = new Image;

    image->width = width;
    image->height = height;
    image->pixels = new Pixel[width * height];

    return image;
}

void destroyImage(Image *image)
{
    delete[] image->pixels;
    delete image;
}

Pixel getPixel(Image *image, int x, int y)
{
    const int index = image->width * y + x;

    return image->pixels[index];
}

void setPixel(Image *image, int x, int y, Pixel pixel)
{
    const int index = image->width * y + x;

    image->pixels[index] = pixel;
}

void imageToPpm(Image image)
{
}
