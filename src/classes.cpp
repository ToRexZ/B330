#include "Box.h"
#include <iostream>

int main(int argc, char const *argv[])
{
    Box FirstBox(1.5, 5.3, 5.2);
    double volume = FirstBox.Volume();
    std::cout << "Box volume is: " << volume << std::endl;
    return 0;
}
