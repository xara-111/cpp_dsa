
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