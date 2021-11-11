#include <cmath>
#include <iostream>

float volume_of_cube(float cubeSide);
float volume_of_sphere(float sphereRadius);
float volume_of_cone(float coneRadius, float coneHeight);


int main()
{
    int result = std::pow(3, 5);
    std::cout << M_PI << "\n";

    //Dimension of the cube
    float cubeSide = 5.4;

    //Dimension of sphere
    float sphereRadius = 2.33;

    //Dimensions of cone
    float coneRadius = 7.65;
    float coneHeight = 14;

    std::cout << "Volume of Cube: " 
    << volume_of_cube(cubeSide) << "\n";

    std::cout << "Volume of Sphere: ";
    std::cout << volume_of_sphere(sphereRadius);
    std::cout << "\n";

    std::cout << "Volume of Cone: ";
    std::cout << volume_of_cone(coneRadius, coneHeight);
    std::cout << "\n";
    return 0;
}


void function(){
}

// Cube Volume = side^3
float volume_of_cube(float cubeSide)
{
    return std::pow(cubeSide, 3);
}

// Sphere Volume = (4.0/3.0) * pi * radius^3
float volume_of_sphere(float sphereRadius)
{
    return (4.0 / 3.0) * M_PI * std::pow(sphereRadius, 3);
}

// Cone Volume = pi * radius^2 * (height/3)
float volume_of_cone(float coneRadius, float coneHeight)
{
    return (M_PI * std::pow(coneRadius, 2)) * (coneHeight / 3);
}
