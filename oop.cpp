#include<iostream>
using namespace std;
class Box
{
public:
    Box();
    Box(double h, double w, double d);
    void setHeight(double h);
    void setwidth(double w);
    void setdepth(double d);
    double getHeight();
    double getwidth();
    double getdepth();
    double getVolume();

private:
    double height;
    double width;
    double depth;

};
Box::Box()
{
    height=1;
    width=1;
    depth=1;
}
Box::Box(double h, double w, double d)
{
    height=h;
    width=w;
    depth=d;
}
void Box::setHeight(double h)
{
    height=h;
}
void Box::setwidth(double w)
{
    width=w;
}
void Box::setdepth(double d)
{
    depth=d;
}
double Box::getHeight()
{
    return height;
}
double Box::getwidth()
{
    return width;
}
double Box::getdepth()
{
    return depth;
}
double Box::getVolume()
{
    double volume=height*width*depth;
    return volume;
}


int main(){
    Box b1;
    b1.setHeight(3);
    b1.setwidth(4);
    b1.setdepth(5);

    cout<<"Volume is: "<<b1.getVolume();





}
