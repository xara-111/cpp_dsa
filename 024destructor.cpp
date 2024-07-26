


/*
# include<iostream>
using namespace std;
    

class demo
{
	int *p;
public:
	demo() //constructor
	{
		p=new int[10];
	    cout<<"constructor of demo"<<endl;
	}

       	~demo()  //destructor
	{
		delete[]p;
	   	cout<<"destructor of demo"<<endl;
	}
};

void fun()
{
	demo d;
}
int main()
{
	fun();
    //DISPLAYS BOTH THE MESSAGES OF CONSTRUCTOR AND DESTRUCTOR
    //BECAUSE ONCE THE FUNCTION ENDS AUTOMATICALLY DESTRUCTION FUNCTION IS CALLED.
}
*/



/*
# include<iostream>
using namespace std;
class demo
{
	int *p;
public:
	demo() //constructor
	{
		p=new int[10];  //ALLOCATING MEMORY DYNAMICALLY
	    cout<<"constructor of demo"<<endl;
	}

       	~demo()  //destructor
	{
		delete[]p;      //ALLOCATED MEMORY WON'T BE DELETED AUTOMATICALLY
	   	cout<<"destructor of demo"<<endl;
	}
};

void fun()
{
	demo *p=new demo(); //DYNAMICALLY CREATING OBJECT IN HEAP, ONLY CONSTRUCTOR OF DEMO IS CALLED
	delete p;//DESTRUCTOR NOT CALLED AUTOMATICALLY WHEN OBJECT CREATED DYNAMICALLY, SO USE DELETE.
}
int main()
{
	fun();
}

//So in the classes where you are dynamically allocating the memory inside the constructor or anywhere
//inside the class, then you must release that memory inside the destructor when the object is going
//out of scope or when the object is deleted, This memory should also be deleted.
//Otherwise Object may be deleted, but that memory may not be deleted from heap.So this is a dangerous problem.
//If a programmer doesn't take care of these type of things, then it may cause memory leak problem and the program may crash at some time.
*/



//VIRTUAL DESTRUCTOR
# include<iostream>
using namespace std;

class base
{
public:
	virtual ~base()   //must declare virtual
	{
		cout<<"destructor of base"<<endl;
	}
};
class derived:public base
{
public:
	~derived()
	{
		cout<<"destructor of derived"<<endl;
	}
};
void fun()
{
	base *p=new derived();
	delete p;
}
int main()
{
	fun();
}