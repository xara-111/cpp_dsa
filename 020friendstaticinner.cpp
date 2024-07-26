
//FRIEND FUNCTION
/*
#include<iostream>
using namespace std;
class test
{
    private:int a;
    protected:int b;
    public:int c;
    friend void fun();
};

void fun()
{
    test t;
    t.a=10;
    t.b=15;
    t.c=9;
}

int main()
{

}
*/

//FRIEND CLASS
/*
#include<iostream>
using namespace std;
class your;
class my
{
    private:int a;
    protected:int b;
    public:int c;
    friend class your;  //FOR C++11: friend your; (unelaborated friend declaration works)
};

class your
{
    public:
    my m;
    void fun()
    {
        m.a=10;
        m.b=10;
        m.c=10;
    }
};

int main()
{

}
*/

//STATIC MEMBERS
/*
#include<iostream>
using namespace std;
class Test
{
    private:
    int a;
    int b;
    public:
    static int count;
    Test()
    {
        a=10;
        b=10;
        count++;
    }

    static int getcount()
{
    return count;
}

};


int Test::count=0;

int main()
{
    Test t1;
    Test t2;
    cout<<t1.count<<endl;
    cout<<t2.count<<endl;
    cout<<Test::count<<endl;
    cout<<Test::getcount();

}
*/

//EXAMPLE 1: SET THE PRICE: STATIC MEMBER
/*
#include<iostream>
using namespace std;

class innova
{
    public:
    static int price;
    static int getprice()
    {
        return price;
    }
};

int innova::price=20;

int main()
{
    cout<<innova::price<<endl;
}
*/


//EXAMPLE 2: STUDENTS
/*
#include <iostream>
using namespace std;


class Student
{
public:
 int roll;

 string name;

 static int addNo;

 Student(string n)
 {
 addNo++;
 roll=addNo;
 name=n;
 }

 void display()
 {
 cout<<"Name "<<name<<endl<<"Roll "<<roll<<endl;
 }
};

int Student::addNo=0;

int main()
{
 Student s1("John");
 Student s2("Ravi");
 Student s3("Khan");
 Student s4("Khan");
 Student s5("Khan");
 Student s6("Khan");


 s1.display();
 s6.display();
 cout<<"Number Admission "<<Student::addNo<<endl;
} 
*/


//INNER CLASS/ NESTED CLASS

#include<iostream>
using namespace std;
class outer
{
    public:
    //int a=10;
    static int b;

    void fun()
    {
        i.show();
        //cout<<i.x;
    }
    class inner
    {
        public:
        //int x=25;
        void show()
        {
            cout<<"Show";
        }
    };
    inner i;
};

int main()
{
    outer::inner i;
    outer o;
    o.fun();    //OUTPUT: Show25
}
