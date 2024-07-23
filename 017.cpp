
//INHERITANCE
/*
#include<iostream>
using namespace std;
class base
{
    public:
    int a;
    void display()
    {
        cout<<"Display base "<<a<<endl;
    }
};

class Derived:public base  //INHERITANCE SYNTAX
{
    public:
    void show()
    {
        cout<<"Show derived"<<endl;
    }
};

int main()
{
    base b;
    b.display();

    Derived d;
    d.a=100;
    d.display();
    d.show();
    
}
*/


//INHERITANCE CUBOID EXAMPLE
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
    void setLength(int l);
    void setBreadth(int b);
    int getLength();
    int getBreadth();
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};


//YOU DON'T HAVE TO REWRITE EVERYTHING INSIDE CUBOID CLASS.
//MOST OF THE THINGS ARE BORROWED FROM RECTANGLE CLASS.
//JUST FOCUS ON EXTENSION PART OF CUBOID HERE:HEIGHT
class cuboid:public Rectangle    //INHERITED CLASS
{
    private:
    int height;
    public:
    cuboid(int h)
    {
        height=h;
    }
    int getHeight(){return height;}
    void setHeight(int h)
    {
        height=h;
    }
    int volume()
    {
        return getLength()*getBreadth()*height;
    }


};
int main()
{
    Rectangle r(10,10);
    cout<<"Area:"<<r.area();
    if(r.isSquare())
    {
        cout<<"Yes\n";
    }

    cuboid c(5);
    c.setLength(10);
    c.setBreadth(7);
    cout<<"Volume is "<<c.volume()<<endl;
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



//CONSTRUCTORS IN INHERITANCE
/*
#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"Default of base"<<endl;
    }
    base(int x)
    {
        cout<<"Parameter of base"<<x<<endl;
    }
};

class Derived: public base
{
    public:
    Derived()
    {
        cout<<"Defalt of derived"<<endl;
    }
    Derived(int a)
    {
        cout<<"parameter of derived"<<a<<endl;
    }
    Derived(int x, int a):base(x)  //SPECIAL CONSTRUCTOR
    {
        cout<<"parameter of derived"<<a<<endl;
    }
};


int main()
{
    //Derived d;
    //Derived d(10);
    Derived d(20,10);

}
*/



//ACCESS SPECIFIERS
/*
class Base
{
private:
 int a;
protected: 
 int b;
public:
 int c;

 void funBase()
 {
 a=10;   //ALL CAN BE ACCESSED SINCE THEY ARE THE MEMBER OF THE CLASS ONLY
 b=5;
 c=15;
 }
};


class Derived:public Base
{
public:
 void funDerived()
 { 
 //a=10;  //PRIVATE CAN'T BE ACCESSED
 b=5;     //PROTECTED AND PUBLIC CAN BE ACCESED IN DERIVES CLASS
 c=15;
 }
};

int main()
{
 Base b;
 //b.a=10;
 //b.b=5;
 b.c=20;   //ONLY PUBLIC CAN BE ACCESSED ON AN OBJECT
} 
*/