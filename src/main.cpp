#include <stdio.h>
#include <iostream>
#include "../include/vector.hpp"

using namespace std;

int main()
{
    Vector3 v1 = {1, 1, 1};
    Vector3 v2 = {-1, 1, 1};

    float a = dot(v1, v2);

    cout << a << endl;
}