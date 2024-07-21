//FUNCTIONS
/*
//FIND MAXIMUM OF 3 NO.S
#include<iostream>
using namespace std;
int max(int a, int b, int c)
{
    int Max;
    if(a>b && a>c)
    {
        Max=a;
    }
    else if(b>a && b>c)
    {
        Max=b;
    }
    else 
    {
        Max=c;
    }
    return Max;
}
int main()
{
    int a,b,c,maximum;
    cout<<"Enter a,b,c: ";
    cin>>a>>b>>c;
    maximum=max(a,b,c);
    cout<<"maximum is "<<maximum;

}
*/


/*
//CALCULATE POWER N
#include<iostream>
using namespace std;
int pow(int base, int power)
{
    int p=1;
    for(int i=0;i<power;i++)
    {
        p*=base;
    }
    return p;
}
int main()
{
    int base,power,result;
    cout<<"Enter the base and power: ";
    cin>>base>>power;
    result=pow(base,power);
    cout<<"Result is "<<result;
}
*/

/*
//FUNCTION TEMPLATE 
#include<iostream>
using namespace std;

template <class T>

T maxim(T x, T y)    //IDK WHAT'S WRONG BUT max NAME DOESN'T SEEM TO WORK WITH TEMPLATES. IT SHOWS ERROR.
{
    return x>y?x:y;
}

int main()
{
    int c=maxim(2,3);
    float d=maxim(12.4f,73.4f);
    float e=maxim(23.5,78.2);
    cout<<"Max is "<<c<<","<<d<<","<<e;

}
*/

/*
//DEFAULT ARGUMENT
#include<iostream>
using namespace std;
int add(int x, int y, int z=0)
{
    return x+y+z;
}
int main()
{
    int sum=add(2,3);     //HERE THIRD PARAMETER SET AT 0 BY DEFAULT
    int sums=add(2,4,6);  //WORKS WITH BOTH 2 OR 3 PARAMETERS
    cout<<sum<<endl;
    cout<<sums<<endl;
}
*/


/*
//RECURSION 54321
#include<iostream>
using namespace std;
void fun(int x)
{
    if(x>0)
    {
        cout<<x<<" ";
        fun(x-1);
    }
}
int main()
{
    int x=5;
    fun(5);
}
*/

/*
//RECURSION 12345
#include<iostream>
using namespace std;
void fun(int x)
{
    if(x>0)
    {
        fun(x-1);
        cout<<x<<" ";
    }
}
int main()
{
    int x=5;
    fun(5);
}
*/


/*
//FUNCTION POINTER
#include<iostream>
using namespace std;
int max(int x, int y)
{
    return x>y?x:y;
}
int min(int x,int y)
{
    return x<y?x:y;
}
int main()
{
    int(*fp)(int,int);
    fp=max;
    cout<<(*fp)(10,50)<<endl;
    fp=min;
    cout<<(*fp)(10,50)<<endl;

}
*/

/*
//WRITE A PROGRAM FOR LINEAR SEARCH USING FUNCTION
#include<iostream>
using namespace std;

int linsearch(int A[],int n, int key)
{
    for(int i=0;i<n;i++)
    {
        if(A[i]==key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    int key;
    int A[100];
    cout<<"Enter the no. of elements in array: \n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element in "<<i<<":";
        cin>>A[i];
    }

    cout<<"The array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }

    cout<<"Enter key to search: ";
    cin>>key;
    cout<<"The key found at index "<<linsearch(A,n,key);
}
*/