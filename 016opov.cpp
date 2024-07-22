

//OPERATOR OVERLOADING
/*
#include<iostream>
using namespace std;
class complex
{
    private:
    int real;
    int img;
    public:
    complex(int r=0, int i=0)
    {
        real=r;
        img=i;
    }


    void display()
    {
        cout<<real<<"+i"<<img<<endl;
    }


    complex operator+(complex x)
    {
        complex temp;
        temp.real=real+x.real;
        temp.img=img+x.img;
        return temp;
    }
};
int main()
{
    complex c1(3,7), c2(5,4), c3;
    c3=c1+c2;  //C3=C1(FUNCTION CALLED UPON)+C2(PASSED AS PARAMETER)
    c3.display();
}
*/
