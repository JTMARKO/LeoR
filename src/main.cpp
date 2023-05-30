#include <stdio.h>
#include <iostream>
#include "../include/vector.hpp"

using namespace std;


int main()
{
    Vector3 pos(1, 1, 1);

    float a = dot(pos, pos);

    cout << a << endl;
}