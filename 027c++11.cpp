

//C++11
//AUTO
/*
#include<iostream>
using namespace std;

float fun()
{
    return 2.34f;
}

int main()
{
    auto x=2*5.7+'a';
    cout<<x<<endl;

    double d=12.3;
    int i=9;
    auto y=2*d+i;
    cout<<y<<endl;

    auto z=fun();
    cout<<z<<endl;

    float a=90.3;
    decltype(a) b=34.6; //datatype of b would be same as a
    cout<<b<<endl;


}
*/

/*
//FINAL KEYWORD
#include<iostream>
using namespace std;
class parent //(final) restricts inheritance, if written final after parent class name  
{
    //only virtual functions can be marked as final
    virtual void show() final
    {

    }
};
class child:parent
{
    void show()  //final function of parent class can't be overrided in the child class
    {

    }
};
//FINAL KEYWORD IS USED TO RESTRICT INHERITANCE AS WELL AS OVERRIDING OF FUNCTIONS.
*/


/*
//LAMBDA EXPRESSION
#include<iostream>
using namespace std;
int main()
{
    cout<<([](int x, int y){return x+y;}(10,30))<<endl;

    [](int x, int y){cout<<"Sum is "<<x+y<<endl;}(10,30);

    int a=[](int x, int y)->int{return x+y;}(10,30);
    cout<<a<<endl;

    int b=10;
    [b](){cout<<b<<endl;}();

    auto f=[b](){cout<<b<<endl;}; //assign to variable f
    f(); //to use f,call it as a function, so f has become function name for lambda expression 

    b++; //doesn't modify
    f();

    auto g=[&b](){cout<<b<<endl;};
    g();  //first call make it 11
    b++;
    g();  //2nd call make it 12
}
*/


/*
//LAMBDA EXPRESSION TO A FUNCTION AS PARAMETER
#include<iostream>
using namespace std;

template<typename T>
void fun(T f)
{
    f(); //f is template type
}

int main()
{
    int b=10;
    auto f=[&b](){cout<<b++<<endl;}; //this lambda expression passed as parameter to fun function
    fun(f); //10
    fun(f); //11
}

//lambda expressions are helpful in writing nested functions
//it's a feature of functional programming which is used in ai.
*/




//SMART POINTERS
/*
//UNIQUE POINTER

#include<iostream>
using namespace std;
class Rectangle
{
    int length;
    int breadth;

    public:
    Rectangle(int l, int b)
    {
        length=l;
        breadth=b;
    }
    int area()
    {
        return length*breadth;
    }
};


int main()
{
    unique_ptr<Rectangle> ptr(new Rectangle(10,5));
    cout<<ptr->area()<<endl; //can use unique pointer like normal pointer

    // unique_ptr<Rectangle> ptr2=ptr; //not allowed, can't initialize another pointer to this one cuz it's unique.

     unique_ptr<Rectangle> ptr2;
     ptr2=std::move(ptr); //remove ptr and making ptr2 point on the object.
     cout<<ptr2->area();
    // cout<<ptr->area(); //doesn't work cuz this pointer is null now
}
*/


/*
//SHARED POINTERS
#include<iostream>
using namespace std;
class Rectangle
{
    int length;
    int breadth;

    public:
    Rectangle(int l, int b)
    {
        length=l;
        breadth=b;
    }
    int area()
    {
        return length*breadth;
    }
};


int main()
{
    shared_ptr<Rectangle> ptr(new Rectangle(10,5));
    cout<<ptr->area()<<endl; 

     shared_ptr<Rectangle> ptr2;
     ptr2=ptr;
     cout<<"ptr2: "<<ptr2->area()<<endl;
     cout<<"ptr: "<<ptr->area()<<endl; //both ptr and ptr2 pointing at same oject

     cout<<ptr.use_count(); //Reference counter, no. of pointers pointing on the object.
}
*/


/*
//IN-CLASS INITIALIZERS AND DELIGATIONS OF CONSTRUCTORS
#include<iostream>
using namespace std;

class Test
{
    int x=10; //directly assign values to variables in class
    int y=13; //this was not allowed in previous version of c++
    public:
    Test(int a,int b)
    {
        x=a;
        y=b;
        //if written some logic here, you don't have to repeat that logic. Instead of writing logic again in non-parameterized constructor, you can call the other constructor by passing the parameters
        //THIS IS DELEGATION OF CONSTRUCTORS.
        //MEANS ONE CONSTRUCTOR CAN CALL ANOTHER CONSTRUCTOR WITHIN A SAME CLASS.
    }
    Test():Test(1,1) 
    {}
    //This calls the above constructor.
    //Non-parmeterized constructor will call parameterized constructor by passing 1,1.

};
*/

//ELLIPSIS
#include<iostream>
using namespace std;


int sum(int n, ...)
{
    va_list list;
    va_start(list,n);

    int x;
    int s=0;
    for(int i=0;i<n;i++)
    {
        x=va_arg(list,int);
        s+=x;
    }
    return s;
}
int main()
{
    cout<<sum(3,10,20,30)<<endl;
    cout<<sum(5,10,20,30,34,90)<<endl;

}