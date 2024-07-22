/*
// CLASS
#include<iostream>
using namespace std;
class Rectangle
{
public:
    int length;
    int breadth;
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};
int main()
{
    Rectangle r1,r2;
    r1.length=10;
    r1.breadth=5;
    cout<<"Area of r1 "<<r1.area()<<endl;

    r2.length=15;
    r2.breadth=1;
    cout<<"Perimeter of r2 "<<r2.perimeter()<<endl;
}
*/



/*
//POINTER TO A OBJECT

#include<iostream>
using namespace std;
class Rectangle
{
public:
    int length;
    int breadth;
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
    Rectangle R;      //TAKING OBJECT RECTANGLE
    Rectangle *ptr;
    ptr=&R;
    ptr->length=10;
    ptr->breadth=5;
    cout<<"Area is "<<ptr->area()<<endl;
    cout<<"Permeter is "<<ptr->perimeter()<<endl;

}
*/



/*
//POINTER TO A OBJECT IN HEAP

#include<iostream>
using namespace std;
class Rectangle
{
public:
    int length;
    int breadth;
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
    
    Rectangle *ptr=new Rectangle;   //DIRECTLY CREATING (DYNAMIC)OBJECT IN HEAP
    ptr->length=10;
    ptr->breadth=5;
    cout<<"Area is "<<ptr->area()<<endl;
    cout<<"Perimeter is "<<ptr->perimeter()<<endl;

}
*/

/*
//DATA HIDING IN C++

#include<iostream>
using namespace std;
class Rectangle
{
    private:
    int length;
    int breadth;
    public:
    void setLength(int l)
    {
        if(l>=0)
        {
            length=l;
        }
        else{
            length=0;
            cout<<"Length shouldn't be negative\n";
        }
    }

    void setBreadth(int b)
    {
        if(b>=0)
        {
            breadth=b;
        }
        else
        {
            breadth=0;
            cout<<"Breadth shouldn't be negative \n";
        }
    }

    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }

    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
    Rectangle r;
    r.setLength(10);
    r.setBreadth(-5);
    cout<<r.getLength()<<endl;
    cout<<r.getBreadth()<<endl;
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
}
*/


/*
//CONSTRUCTORS
#include<iostream>
using namespace std;
class Rectangle
{
    private:
    int length;
    int breadth;

    
    public:
    //CONSTRUCTORS
    Rectangle()   //NON-PARAMETERIZED
    {
        length=1;
        breadth=1;
    }

    Rectangle(int l=1,int b=1)    //PARAMETERIZED(DEFAULT PARAMETERS SET SO ACTS AS NON-PARAMETERIZED ALSO)
    {
        setLength(l);
        setBreadth(b);
    }

    Rectangle(Rectangle &rect)  //COPY(SHALLOW). THERE'S ALSO DEEP COPY CONSTRUCTOR
    {
        length=rect.length;
        breadth=rect.breadth;
    }

    void setLength(int l)
    {
        if(l>=0)
        {
            length=l;
        }
        else{
            length=0;
            cout<<"Length shouldn't be negative\n";
        }
    }

    void setBreadth(int b)
    {
        if(b>=0)
        {
            breadth=b;
        }
        else
        {
            breadth=0;
            cout<<"Breadth shouldn't be negative \n";
        }
    }

    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }

    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
    // Rectangle r1;
    // cout<<r1.area();

    Rectangle r1(10,5);
    cout<<r1.area()<<endl;

    Rectangle r2(r1);
    cout<<r2.area();
}
*/



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


/*
//THIS POINTER

#include<iostream>
using namespace std;
class Rectangle
{
private:  
     int length;
     int breadth;
public:
      Rectangle()   
    {
        length=1;
        breadth=1;
    }

    Rectangle(int length,int breadth)   
    {
        this->length=length;
        this->breadth=breadth;
//WHICH LENGTH ASSIGN TO WHICH LENGTH?
//THE PARAMETERS ARE LOCAL MEMBERS SO THE SAME MEMBER WILL BE ASSIGNED TO ITSELF.
//IT'LL NEVER ACCESS PRIVATE MEMBERS BUT WE WANT TO STORE IT IN PRIVATE LENGTH MEMBER.
//this-> IS A POINTER TO THE CURRENT OBJECT(PRIVATE MEMBERS)

    }

    Rectangle(Rectangle &rect) 
    {
        length=rect.length;
        breadth=rect.breadth;
    }
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
    Rectangle R(10,5);
    cout<<R.area();
}
*/

 /*
 //STRUCTURE VS CLASS
 #include<iostream>
 using namespace std;
 //STRUCTURE IS THERE IN C LANGUAGE ALSO BUT THE DIFFERENCE IS THAT
 //IN C LANGUAGE WE CAN'T HAVE FUNCTIONS INSIDE A STRUCTURE.
 //IN C++ STRUCTURE CAN HAVE DATA MEMBERS AS WELL AS FUNCTIONS.
 //IN C++ STRUCTURE IS MORE LIKE A CLASS.

 struct Demo
 {
    int x;
    int y;

    void Display()
    {
        cout<<x<<" "<<y<<endl;
    }
 };

 int main()
 {
    Demo d;
    d.x=10;
    d.y=20;
    d.Display();
 }

 //I HAVE OBJECT d OF STRUCTURE DEMO AND CAN ACCESS EVERYTHING FROM THE STRUCTURE.
 //AS SOON AS WE REPLACE struct WITH class, I GET ERRORS.
 //ERRORS SAYING THAT  X AND Y ARE PRIVATE MEMBERS.SO ALL THE DATA MEMBERS BECAME PRIVATE AND CAN'T BE ACCESSED.
 //IN STRUTURE EVERYTHING IS PUBLIC BY DEFAULT AND IN CLASS, EVERYTHING IS PRIVATE BY DEFAULT.
 //THAT'S THE DIFFERENCE B/W CLASS AND STRUCTURE.

*/



/*
//STUDENT PRACTICE QUESTION
#include<iostream>
using namespace std;
class Student
{
private:
       int roll;
       string Name;
       int phyMarks;
       int chemMarks;
       int mathMarks;

public:
       Student(int r,string n,int p,int c,int m)  //CONSTRUCTOR(PARAMETERIZED)
       {
        roll=r;        //JUST LIKE Rectangle(int l, int b) {length=l; breadth=b};
        Name=n;
        phyMarks=p;
        chemMarks=c;
        mathMarks=m;
       }
       int total()
       {
        return phyMarks+chemMarks+mathMarks;
       }
       char Grade()
       {
        int average=total()/3;
        if(average>=60)
        {
            return 'A';
        }
        else if(average>=40 && average<=60)
        {
            return 'B';
        }
        else{
            return 'C';
        }
       }
};

int main()
{
    int roll;
    string Name;
    int p,c,m;
    cout<<"Enter name and roll no. of student: ";
    cin>>Name>>roll;
    cout<<"Enter 3 subject score: ";
    cin>>p>>c>>m;

    Student S(roll,Name,p,c,m);
    cout<<"Total Marks:"<<S.total()<<endl;
    cout<<"Grade of Student:"<<S.Grade()<<endl;
    
}
*/

