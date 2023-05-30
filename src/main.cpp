#include <stdio.h>
#include <iostream>
#include "../include/vector.hpp"
#include "../include/image.hpp"

using namespace std;


int main()
{
    struct Vector3 v1 = {1, 1, 1};
    struct Vector3 v2 = {-1, 1, 1};

    float a = dot(v1, v2);

    struct Pixel p1 = {255, 255, 123};

    Image *img = createImage(2, 2);

    setPixel(img, 0, 0, p1);

    // cout << p1.blue << endl;
    cout << getPixel(img, 0, 0).red << " " << getPixel(img, 0, 0).green << " " << getPixel(img, 0, 0).blue << endl;
}