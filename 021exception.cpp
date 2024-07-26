
//EXCEPTION HANDLING CONSTRUCT
/*
#include<iostream>
using namespace std;
int main()
{
    int x=10, y=0, z;

    try
    {
        if(y==0)
        {
            throw 404;
        }
        z=x/y;
        cout<<z<<endl;
    }
    catch(int e)
    {
        cout<<"Division by zero error code "<<e<<endl;
    }
    cout<<"Bye\n";  //ALWAYS EXCECUTED WITH OR WITHOUT EXCEPTION
    //INDICATES THAT PROGRAM HAS TERMINATED SUCCESSFULLY AND DISPLAYED MESSAGE BYE AND THEN ONLY IT STOPPED.
    //IF IT STOPPED ABRUPTLY BYE WOULDN'T BE DISPLAYED
    
}
*/


//THROW AND CATCH BETWEEN FUNCTIONS
/*
#include<iostream>
using namespace std;

int division(int a, int b)
{
    if(b==0)
    {
        throw 1;
    }
    else
    {
    return a/b;
    }
}
int main()
{
    int x=10,y=0,z;

    try
    {
        z=division(x,y);
        cout<<z<<endl;
    }
    catch(int e)
    {
        cout<<"Division by zero error code "<<e<<endl;
    }
    cout<<"Bye\n";
}
*/


//ALL ABOUT THROW
//WE CAN THROW ANY TYPE OF DATA WE WANT
/*
#include<iostream>
using namespace std;
int main()
{
    int x=10, y=0, z;
    try
    {
        if(y==0)
        {
            throw string("Div by 0");  //THROW STRING
        }
        z=x/y;
        cout<<z<<endl;

    }
    catch(string e)   //CATCH STRING
    {
        cout<<"Divisiom by zero "<<e<<endl;
    }
    cout<<"Bye\n";
    
}
*/


//THROWING A CLASS, THROW DECLARATION
/*
# include<iostream>
using namespace std;
    
class myexception: public exception  //BUILT IN CLASS EXCEPTION
{
};
int division(int a,int b)throw(myexception)   //DECLARATION OF THROWING A CLASS
{
	if(b==0)
		throw myexception();   //CAN ALSO THROW OUR OWN CLASS
	return a/b;
}
int main()
{
	int x=10,y=2,z;
	try
	{
		z=division(x,y);
		cout<<z<<endl;
	}
	catch(myexception e)   //CATCHING OUR OWN CLASS
	{
		cout<<"division by zero"<<endl;
	}
	cout<<"bye"<<endl;
}
*/


//ALL ABOUT THROW EXAMPLE
/*
# include<iostream>
using namespace std;
    

int division(int a,int b)throw(int)  //DECLARATION OF THROWING INT
{
	if(b==0)
		throw 404;
	return a/b;
}
int main()
{
	int x=10,y=0,z;
	try
	{
		z=division(x,y);
		cout<<z<<endl;
	}
	catch(int e)
	{
		cout<<"division by zero"<<endl;
	}
	cout<<"bye"<<endl;
}
*/





//ALL ABOUT CATCH
//MULTIPLE CATCH BLOCKS AND CATCH ALL
/*
#include<iostream>
using namespace std;

int main()
{
    int x=10, y=0, z;

    try
    {
        if(y==0)
        {
            throw 5.8f;
        }
        z=x/y;
        cout<<z<<endl;
    }
    catch(int e)
    {
        cout<<"Integer Division by zero error code "<<e<<endl;
    }

    catch(double e)
    {
        cout<<"Double Division by zero error code "<<e<<endl;
    }

    catch(char e)
    {
        cout<<"character Division by zero error code "<<e<<endl;
    }
    
    catch(...)  //CATCH ALL SHOULD BE THE LAST CATCH BLOCK
    {
        cout<<"All catch "<<endl;
    }
}
*/


//BASE AND DERIVED CLASS ORDER OF CATCH BLOCK
/*
#include<iostream>
using namespace std;

class Myexception1:public exception
{

};
class Myexception2:public Myexception1
{

};

int main()
{
    int x=10, y=0, z;

    try
    {
        if(y==0)
        {
            throw Myexception1();
        }
        z=x/y;
        cout<<z<<endl;
    }
    catch(Myexception2 )  //CHILD CLASS CATCH BLOCK 
    {
        cout<<"Exception 2"<<endl;
    }
    catch(Myexception1 )   //SHOULD BE BEFORE PARENT CLASS CATCH BLOCK
    {
        cout<<"Exception 1"<<endl;
    }
    catch(int e)
    {
        cout<<"Integer Division by zero error code "<<e<<endl;
    }

    catch(double e)
    {
        cout<<"Double Division by zero error code "<<e<<endl;
    }

    catch(char e)
    {
        cout<<"character Division by zero error code "<<e<<endl;
    }
    
    catch(...)  
    {
        cout<<"All catch "<<endl;
    }
}
*/



//CLASS A CLASS FOR STACK WITH EXCEPTIONS: STACK OVERFLOW, STACK UNDERFLOW
//PROGRAM TO DEMONSTRATE USER DEFINED EXCEPTION

#include<iostream>
using namespace std;
class Stackoverflow:public exception
{

};
class StackUnderflow: public exception
{

};

class Stack
{
    private:
    int *stk;   //A pointer to move in the stack
    int top=-1; //a variable that points at the top of stack
    int size;   //variable to record the size of stack
    public:
    Stack(int sz)  //taking size as parameter in constructing stack class
    {
        size=sz; //assigning the value in parameter to size
        stk=new int[size]; //creating a stack(array) in heap using pointer stk of the given size
    }

    void push(int x) //Functions that operate on stack, taking them inside class stack
    {
        if(top==size-1)
        {
            throw Stackoverflow();
        }
        top++;
        stk[top]=x;
    }

    int pop()
    {
        if(top==-1)
        {
            throw StackUnderflow();
        }
        return stk[top--];
    }

    //WRITE A STACK DISPLAY FUNCTION TOO
};

int main()
{
    Stack s(5);
    s.push(5);

}

