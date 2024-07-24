//SCOPE RESOLUTION
/*
#include<iostream>
using namespace std;
class Rectangle
{
private:
     int length;
     int breadth;
public: 
    //CONSTRUCTOR
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &rect);

    //MUTATORS/SETTERS
    void setLength(int l);
    void setBreadth(int b);

    //ACCESORS/GETTER
    int getLength();
    int getBreadth();

    //FACILITATORS
    int area();
    int perimeter();

    //INSPECTION/ENQUIRY
    bool isSquare();

    //DESTRUCTOR
    ~Rectangle();
};


int main()
{
    Rectangle r(10,10);
    cout<<"Area:"<<r.area();
    if(r.isSquare())
    {
        cout<<"Yes\n";
    }
}

Rectangle::Rectangle()
{
    length=1;
    breadth=1;
}
Rectangle::Rectangle(int l,int b)
{
    setLength(l);
    setBreadth(b);
}

Rectangle::Rectangle(Rectangle &rect)
{
    length=rect.length;
    breadth=rect.breadth;
}

void Rectangle::setLength(int l)
{
    length=l;
}

void Rectangle::setBreadth(int b)
{
    breadth=b;
}

int Rectangle::getLength()
{
    return length;
}
int Rectangle::getBreadth()
{
    return breadth;
}

int Rectangle:: area()
{
    return length*breadth;
}

int Rectangle::perimeter()
{
    return 2*(length+breadth);
}

bool Rectangle::isSquare()
{
    return length==breadth;
}

Rectangle:: ~Rectangle()
//AFTER THE END OF MAIN FUNCTION AUTOMATICALLY DESTRUCTOR WOULD BE CALLED AND DISPLAY THE GIVEN MESSAGE 
{
    cout<<"Rectangle Destroyed\n";
}
*/