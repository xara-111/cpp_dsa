
//USE 1 OF CONST
/*
#include<iostream>
using namespace std;
int main()
{
    const int x=10;
    //Can't assign x++ since x is constant integer and you can't modify it.
    //x=30 this is also not allowed

    //int const x=10; //same thing, constant integer x
    cout<<x;
}
*/


//USE 2 OF CONST
/*
#include<iostream>
using namespace std;
int main()
{
    
    const int x=10;
    //int *ptr=&x; //This doesn't work with const, error says cannot initialize a variable of type 'int *' with an rvalue of type 'const int *'
    //POINTER TO A INTEGER CONSTANT:
    const int *ptr=&x;   //int const *ptr=&x; both same thing
    //++*ptr;    //constant integer is read only, CAN'T MODIFY INTEGER CONSTANT OR POINTER TO INTEGER CONSTANT

    //EVEN IF THE IDENTIFIER TO WHICH THE POINTER IS POINTING IS NOT A CONSTANT (if int x=10; , const int *ptr=&x;)
    //BUT THE POINTER IS CONSTANT , SO IT CAN'T MODIFY THE VALUE OF THAT IDENTIFIER.
    //CUZ THE POINTER ACTS LIKE A POINTER TO CONSTANT INTEGER AND IT KNOWS IT'S NOT SUPPOSED TO MODIFY THE VALUE WHERE IT'S POINTING.

    cout<<*ptr<<" "<<x<<endl;

    int y=20;
    ptr=&y;
    //++*ptr; wont work cuz pointer of type constant
    cout<<*ptr<<endl;
}
*/


//USE 3 OF CONSTANT
/*
#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int * const ptr=&x; //pointer is constant, so pointer can't modify itself to point on another variable
    ++*ptr; // this would work this time cuz integer is not constant
    cout<<*ptr;

    // int y=20; THIS WON'T WORK, cuz pointer is constant itself
    // ptr=&y;
    
}
*/

//USE 4 OF CONSTANT
/*
#include<iostream>
using namespace std;
int main()
{
     int x=10;
    const int * const ptr=&x; //constant pointer to integer constant

    //NONE OF THESE ARE ALLOWED, WE CAN NEITHER MODIFY POINTER NOR THE VALUE
    // ++*ptr;
    // int y=20;
    // ptr=&y;
}
*/

//USE 5 OF CONSTANT
/*
#include<iostream>
using namespace std;
class Demo
{
    public:
    int x=10;
    int y=20;
    void display()const
    {
        //x++; can't do this as this function is declared constant nothing inside it could be modified.
        cout<<x<<" "<<y<<endl;
    }
};

int main()
{
    Demo d;
    d.display();
}
*/


//USE 6 OF CONSTANT
/*
#include<iostream>
using namespace std;

void fun(const int &x, int &y)
{
    //x++; can't do this cuz declared a parameter as constant
    y++; //you can modify the non constant parameter tho
    cout<<x<<" "<<y;
}
int main()
{
    int a=10,b=20;
    fun(a,b);
}
*/

//PREPROCESSOR DIRECTIVES
/*
#include<iostream>
using namespace std;

//#define PI 3.1425 //IF DEFINED THE NEXT BLOCK DOESN'T WORK

#ifndef PI
    #define PI 3 //IF NOT PREVIOUSLY DEFINED THEN PREPROCESSOR TAKE THIS VALUE
#endif

int main()
{
    cout<<PI<<endl;
}
*/

//FUNCTION IN PREPROCESSOR DIRECTIVE
/*
#include<iostream>
using namespace std;
#define max(x,y) (x>y?x:y) //without brackets doesn't work cuz it's replaced as it is, not as result and we can't place conditional statement there
int main()
{
    cout<<max(12,10);
}
*/

//# IN DEFINE
/*
#include<iostream>
using namespace std;

#define msg(x) #x    //# converts parameter to string

int main()
{
    cout<<msg(Hello); //Hello is a string now
}
*/

//NAMESPACES
/*
#include<iostream>
using namespace std;

namespace first
{
    void fun()
    {
        cout<<"First\n";
    }
}
namespace Second
{
    void fun()
    {
        cout<<"Second\n";
    }
}

using namespace first;
int main()
{
    fun();
    Second::fun();
    std::cout<<"KKK"<<endl;
}
*/

