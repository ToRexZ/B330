#include <iostream>



class Box
{
    private:
        double width;
        double height;
        double length;

    public:
        double volume()
        {
            return width * height * length;
        }
        Box(double widthValue, double heightValue, double lengthValue){
            width = widthValue;
            height = heightValue;
            length = lengthValue;
        }

};

int main(int argc, char const *argv[])
{
    
    Box myBox(1.0, 5.0, 7.0);
    std::cout << "The volume of the box is: " << myBox.volume() << std::endl;
    return 0;
}