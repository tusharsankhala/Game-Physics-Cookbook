// PhysicsEngine.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Math/Vec/Vec3.h"

int main()
{
    Vec3 right = { 1.0f, 0.0f, 0.0f };
    std::cout << right.x <<'\n';
    std::cout << right.y << '\n';
    std::cout << right.z << '\n';
}
