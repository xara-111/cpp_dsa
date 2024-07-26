

//TEMPLATE CLASSES

#include<iostream>
using namespace std;
class Stackoverflow:public exception
{

};
class StackUnderflow: public exception
{

};

template<class T>
class Stack
{
    private:
    T *stk;   
    int top=-1; 
    int size;   
    public:
    Stack(int sz)  
    {
        size=sz;
        stk=new T[size];
    }
    
    void push(T x);
    T pop();
};

    template<class T>
    void Stack<T>::push(T x) 
    {
        if(top==size-1)
        {
            throw Stackoverflow();
        }
        top++;
        stk[top]=x;
    }
    
    template<class T>
    T Stack<T>::pop()
    {
        if(top==-1)
        {
            throw StackUnderflow();
        }
        return stk[top--];
    }

int main()
{
    Stack<int> s(10);
    s.push(5);
    s.push(23);
    s.push(33);


}

