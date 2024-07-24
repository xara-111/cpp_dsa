
//POLYMORPHISM

//FUNCTION OVERRIDING
/*
#include<iostream>
using namespace std;
class Base
{
    public:
    void display()
    {
        cout<<"Display of Base"<<endl;
    }
};
class Derived: public Base
{
    public:
    void display()  //FUNCTION OVERRIDING
    {
        cout<<"Display of Derived"<<endl;
    }

     //void display(int x); //THIS IS NOT FUNCTION OVERRIDING.
     //FUNCTION OVERRIDING MEANS THE PROTOTYPE OF A FUNCTION MUST BE THE SAME, CAN'T HAVE ANY VARIATION AT ALL.
};

int main()
{
    Base b;
    b.display();

    Derived d;
    d.display();
}
*/


//SCOPE RESOLUTION BASED FUNCTION CALL / NOT FUNCTION OVERRIDING
/*
#include<iostream>
using namespace std;
class Base
{
    public:
    void display()
    {
        cout<<"Display of Base"<<endl;
    }
};
class Derived: public Base
{
    public:
    void display(int x)  // IT'S NOT FUNCTION OVERRIDING
    {
        cout<<"Display of Derived"<<endl;
    }

     
};

int main()
{
    Base b;
    b.display();

    Derived d;
    //d.display();  WOULDN'T WORK SINCE IT'S NOT A FUNCTION OVERRIDE BUT A DIFFERENT FUNCTION IF PROTOTYPE NOT SAME.
    d.Base::display(); //NOW d.display() IS SCOPE RESOLUTION BASED
    //THIS WILL CALL THE PARENT'S/BASE'S DISPLAY FUNCTION
    //OUTPUT:Display of Base    

    d.display(10); //TO CALL THE DISPLAY OF DERIVED CLASS WE HAVE TO PASS SOME PARAMETER.
    //OUTPUT:Display of Derived.
}
*/

//NON-VIRTUAL FUNCTIONS(BASE CLASS POINTER, DERIVED CLASS OBJECT)
/*
#include<iostream>
using namespace std;
class Base
{
    public:
    void fun()   //NON-VIRTUAL
    {
        cout<<"fun of Base"<<endl;
    }
};
class Derived: public Base
{
    public:
    void fun()  
    {
        cout<<"fun of Derived"<<endl;
    }
};

int main()
{
    Derived d;
    // d.fun();   //OUTPUT: FUN OF DERIVED

    //Base *p=new Derived();   //IF NEW OBJECT OF DERIVED CLASS IN HEAP
    Base *p=&d;                //IF DERIVED D OBJECT ALREADY DECLARED.
    p->fun();   //OUTPUT: FUN OF BASE
    //SINCE NON-VIRTUAL, FUNCTION CALL BASED ON THE POINTER.

}
*/

//VIRTUAL FUNCTIONS(BASE CLASS POINTER, DERIVED CLASS OBJECT)
/*
#include<iostream>
using namespace std;
class Base
{
    public:
    virtual void fun()   //VIRTUAL
    {
        cout<<"fun of Base"<<endl;
    }
};
class Derived: public Base
{
    public:
    void fun()  
    {
        cout<<"fun of Derived"<<endl;
    }
};

int main()
{
    Derived d;
    // d.fun();   //OUTPUT: FUN OF DERIVED

    //Base *p=new Derived();   
    Base *p=&d;                
    p->fun();    //OUTPUT: FUN OF DERIVED
    //SINCE VIRTUAL, FUNCTION CALL IS NOT BASED ON THE POINTER BUT BASED ON OBJECT.
}
*/



//CAR EXAMPLE OF VIRTUAL FUNCTON
/*
# include<iostream>
using namespace std;
    
class basicCar
{
public:
	virtual void start()
	{
		cout<<"basic car started"<<endl;
	}
};
class advanceCar:public basicCar
{
public:
	void start()
	{
		cout<<"advance car started"<<endl;
	}
};
int main()
{
	basicCar *p=new advanceCar();
	p->start();
}
//THIS IS NOTHING BUT POLYMORPHISM.
//A BASE CLASS POINTER POINTING TO DERIVED CLASS OBJECT AND OVERRIDED FUNCTION IS CALLED.
//THEN THE FUNCTION OF DERIVED CLASS THAT'S BASED ON THE OBJECT WILL BE CALLED IFF THE BASE CLASS FUNCTION DECLARED AS VIRTUAL.
//THIS IS RUNTIME POLYMORPHISM.
//SO USING VIRTUAL FUNCTION,OVERRIDE FUNCTION,BASE CLASS POINTER DERIVE CLASS OBJECT WE CAN ACHIEVE POLYMORPHISM.
*/




//RUNTIME POLYMORPHISM
//(IN JAVA IT'S CALLED DYNAMIC METHOD DISPATCH)
/*
#include<iostream>
using namespace std;

class car  //CLASS CAR IS ABSTRACT CLASS
{
    public:
    virtual void start()=0; //PURE VIRTUAL CLASS
    virtual void stop()=0;
};
class innova:public car
{
    public:
    void start()
    {
        cout<<"Innova started\n";
    }
    void stop()
    {
        cout<<"Innova stopped\n";
    }
};


class swift:public car
{
    public:
    void start()
    {
        cout<<"swift started\n";
    }
    void stop()
    {
        cout<<"swift stopped\n";
    }
};

int main()
{
    car *c=new innova();
    c->start();   //POLYMORPHISM

    c=new swift();
    c->start();   //POLYMORPHISM

}
*/





//ABSTRACT CLASS
/*
using namespace std;
class Base
{
public:
//ABSTRACT CLASS
//PURPOSE IS TO ACHIEVE POLYMORPHISM
//AKA INTERFACES
 virtual void fun1()=0;
 virtual void fun2()=0;
};
class Derived :public Base
{
public:
 void fun1()
 {
 cout<<"fun1 of Derived"<<endl;
 }
 void fun2()
 {
 cout<<"fun2 of Derived"<<endl;
 }

};
int main()
{
 Derived d;
 d.fun1();
 d.fun2();

} 
*/

//PRACTICE EXERCISE
#include<iostream>
using namespace std;

class Shape
{
    public:
    virtual float area()=0;
    virtual float perimeter()=0;
};

class Rectangle:public Shape
{
    private:
    float length;
    float breadth;

    public:
    Rectangle(int l=1, int b=1)
    {
        length=l;
        breadth=b;
    }
    float area()
    {
        return length*breadth;
    }
    float perimeter()
    {
        return 2*(length+breadth);
    }
};

class Circle: public Shape
{
    private:
    float radius;

    public:
    Circle(float r)
    {
        radius=r;
    }
    float area()
    {
        return 3.14*radius*radius;
    }
    float perimeter()
    {
        return 2*3.14*radius;
    }
};

int main()
{
    Shape *s=new Rectangle(10,5);
    cout<<"Area of Rectangle "<<s->area()<<endl;
    cout<<"Perimeter of Rectangle "<<s->perimeter()<<endl;

    s=new Circle(10);
    cout<<"Area of circle "<<s->area()<<endl;
    cout<<"Perimeter of circle "<<s->perimeter()<<endl;

}