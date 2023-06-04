#include <iostream>
#include <fstream>
#include <cstdlib>
#include "../include/image.hpp"

using namespace std;

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

void imageToPpm(Image imageStruct)
{
    ofstream image;
    image.open("render.ppm");

    if (image.is_open()) {
        // place header info

        image << "P3" << endl;
        image << imageStruct.width << " " << imageStruct.height << endl;
        image << "255" << endl;

        for (int i = 0; i < imageStruct.width * imageStruct.height; i++) {

            const Pixel currentPixel = imageStruct.pixels[i];

            image << currentPixel.red << " " << currentPixel.green << currentPixel.blue << " " << endl;
        }


    }



}
