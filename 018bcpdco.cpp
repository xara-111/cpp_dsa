//BASE CLASS POINTER DERIVES CLASS OBJECT
/*

#include<iostream>
using namespace std;

class Base
{
    public:
    void fun1()
    {
        cout<<"fun1 of Base"<<endl;
    }
};

class Derived:public Base
{
    public:
    void fun2()
    {
        cout<<"fun2 of Derived"<<endl;
    }
};
int main()
{
    Derived d;
    Base *ptr=&d; //BASE CLASS POINTER AND ASSIGN THE ADDRESS OF THE DERIVED CLASS OBJECT.
    //d.fun1();
    //d.fun2();

    ptr->fun1();
    //ptr->fun2(); //BASE CLASS IS HAVING ONLY FUN1. WE CAN'T CALL THE FUNCTIONS OF DERIVED CLASS
    //POINTER OF BASE CLASS WILL LOOK FOR FUNCTIONS INSIDE BASE CLASS
    //BASE CLASS POINTER POINTING TO A DERIVED CLASS OBJECT CAN CALL ONLY THOSE FUNCTIONS WHICH ARE IN BASE CLASS.

    //IT'S NOT POSSIBLE TO DO THIS OTHER WAY WITH DERIVED CLASS POINTER POINTING TO THE ADDRESS OF OBJECT OF BASE CLASS.
    
// Base b;
// Derived *ptr=&b; //THIS IS NOT POSSIBLE
    
}
*/




//CUBOID IS RECTANGULAR EXAMPLE
/*
# include<iostream>
using namespace std;
    
class rectangle
{
public:
	void area()
	{
		cout<<"area of rectangle"<<endl;
	}
};
class cuboid:public rectangle
{
public:
	void volume()
	{
		cout<<"cuboid volume"<<endl;
	}
};
int main()
{
	rectangle r;
	cuboid *q=&r; //THIS IS LIKE CALLING A RECTANGLE AS CUBOID WHICH MAKES NO SENSE.

	cuboid c;
	//c.area();
	//c.volume();
    rectangle *p=&c;  //CALLING CUBOID RECTANGULAR WHICH IS PARTIALLY TRUE
	p->area();
	//p->volume();	  //ON CALLING CUBOID RECTANGULAR,IT DOESN'T KNOW IT POSESS HEIGHT OR CALCULATE VOLUME   
	return 0;
}
*/





//BASIC CAR AND ADVANCED CAR EXAMPLE
/*
# include<iostream>
using namespace std;

class basicCar
{
public:
	void start()
	{
		cout<<"car started"<<endl;
	}
};
class advanceCar:public basicCar
{
public:
	void playmusic()
	{
		cout<<"playing music"<<endl;
	}
};
int main()
{
	basicCar b;
	advanceCar *q=&b; //THIS IS NOT OKAY

	advanceCar a;
	a.start();
	a.playmusic();
	basicCar *ptr=&a;  //THIS IS OKAY
	ptr->start();
	ptr->playmusic();
}
*/