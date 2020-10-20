#ifndef H_BOX
#define H_BOX

class Box{
    private:
    double width;
    double height;
    double length;

    public:
    Box(double widhtVal, double heightVal, double lengthVal);    
    Box();

    double Volume();
};
#endif