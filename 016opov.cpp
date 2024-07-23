

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






//FRIEND OPERATOR OVERLOADING
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


    friend complex operator+(complex c1, complex c2);
};

complex operator+(complex c1, complex c2)   //AN INDEPENDENT FUNCTION DECLARED AS FRIEND OF THE CLASS
{
    complex temp;
    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return temp;
}

int main()
{
    complex c1(3,9), c2(5,4), c3;
    c3=c1+c2;  //C3=C1(FUNCTION CALLED UPON)+C2(PASSED AS PARAMETER)
    c3.display();
}
*/





//INSERTION OPERATOR OVERLOADING
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


    friend complex operator+(complex c1, complex c2);

    friend ostream & operator<<(ostream &out, complex &c);
};

complex operator+(complex c1, complex c2)   //AN INDEPENDENT FUNCTION DECLARED AS FRIEND OF THE CLASS
{
    complex temp;
    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return temp;
}

ostream & operator<<(ostream &out, complex &c)   
{
    out<<c.real<<"+i"<<c.img;
    return out;
}


int main()
{
    complex c1(3,9), c2(5,4), c3;
    c3=c1+c2;  //FRIEND OPERATOR OVERLOADING


    //c3.display();              //DISPLAYING USING DISPLAY FUNCTION
    //cout<<c3;                  //DISPLAY USING INSERTION OPERATOR OVERLOADING (THE CALL)
    //operator<<(cout,c3);       //INSERTION OPERATOR IS ACTUALLY CALLED LIKE THIS INTERNALLY
}
*/







//INSERTION OPERATOR OVERLOADING USING VOID RETURN TYPE
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

    friend  void operator<<(ostream &out, complex &c); //DON'T HAVE TO RETURN ANYTHING, YOU CAN RETURN VOID, IT STILL WORKS.
};


void operator<<(ostream &out, complex &c)   //RETURN VOID
{
    out<<c.real<<"+i"<<c.img;
    
}


int main()
{
    complex c1(3,9), c2(5,4), c3;
    c3=c1+c2;

    //BUT THE PROBLEM WITH RETURNING VOID IN OVERLOADED INSERTION OPERATOR IS THAT 
    //cout<<c3<<endl; THIS STATEMENT WILL SHOW ERROR BECAUSE YOU CAN'T CONTINUE YOUR INSERTION OPERATOR SYSTEM FURTHER.
    //INSERTION OPERATOR CAN BE USED ONCE IF RETURN TYPE IS VOID

}             
*/



//WRITE A CLASS RATIONAL NUMBER(P/Q) WITH OVERLOADING OPERATOR+ AND <<OPERATOR.
/*
#include<iostream>
using namespace std;
class rational
{
    private:
    int num;
    int den;
    public:
    rational(int p=0, int q=0)
    {
        num=p;
        den=q;
    }

    void display()
    {
        cout<<num<<"/"<<den<<endl;
    }

    rational operator+(rational r)
    {
    rational temp;
    temp.num=num+r.num;
    temp.den=den+r.den;
    return temp;
    }

    friend ostream & operator<<(ostream &out, rational &r);
};


ostream & operator<<(ostream &out, rational &r)
{
    out<<r.num<<"/"<<r.den;
    return out;
}
int main()
{
    rational r1(2,5), r2(3,9), r3;
    r3=r1+r2;
    //r3.display();
    cout<<r3;

}
*/


//WRITE A CLASS RATIONAL NUMBER(P/Q) WITH OVERLOADING OPERATOR+ AND <<OPERATOR GIVEN SOLUTION.
/*
#include<iostream>
using namespace std;
class Rational
{
private:
 int p;
 int q;
public:
 Rational()
 {
 p=1;
 q=1;
 }
 Rational(int p,int q)
 {
 this->p=p;
 this->q=q;
 }
 Rational(Rational &r)
 {
 this->p=r.p;
 this->q=r.q;
 }
 int getP(){return p;}
 int getQ(){return q;}
 void setP(int p)
 {
 this->p=p;
 }
 void setQ(int q)
 {
 this->q=q;
 }
 Rational operator+(Rational r)
 {
 Rational t;
 t.p=this->p*r.q+this->q*r.p;
 t.q=this->q*r.q;
 return t;
 }
 friend ostream & operator<<(ostream &os,Rational &r);
};
ostream & operator<<(ostream &os,Rational &r)
{
 os<<r.p<<"/"<<r.q;
 return os;
}
int main()
{
 Rational r1(3,4),r2(2,5),r3;

 r3=r1+r2;
 cout<<"Sum of "<<r1<<" and "<<r2<<" is "<<r3<<endl;

}
*/