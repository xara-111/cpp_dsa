
//POINTERS
/*
//BASIC POINTER STUFF

#include<iostream>
using namespace std;
int main()
{
    int A[5]={2,3,5,6,8};   //ARRAY IN STACK
    int *p; //DECLARING P POINTER
    p=A;    //INITIALIZING P TO POINT AT A(THE FIRST ELEMENT)
    int *q=&p[3];  //POINTER Q POINTING AT THE ADDRESS OF POINTER P'S 4TH INDEX

    for(int i=0;i<5;i++)
    {
        //cout<<A[i]<<" ";    // 2 3 5 6 8
        //cout<<i[A]<<" ";    // 2 3 5 6 8
        //cout<<A<<" ";       // 0x16d962fd0 0x16d962fd0 0x16d962fd0 0x16d962fd0 0x16d962fd0 
        //cout<<(A+i)<<" ";   //0x16b6f2fd0 0x16b6f2fd4 0x16b6f2fd8 0x16b6f2fdc 0x16b6f2fe0 
        //cout<<*A<<" ";      //2 2 2 2 2
        //cout<<*(A+i)<<" ";  //2 3 5 6 8
        //cout<<p<<" ";       //0x16bb56fd0 0x16bb56fd4 0x16bb56fd8 0x16bb56fdc 0x16bb56fe0 
        //cout<<*p<<" ";      //2 2 2 2 2
        //cout<<(p+i)<<" ";   //0x16ef5afd0 0x16ef5afd4 0x16ef5afd8 0x16ef5afdc 0x16ef5afe0 
        //cout<<*(p+i)<<" ";  //2 3 5 6 8

        cout<<*p<<" ";      //2 3 5 6 8
        p++;
        
    }
    cout<<endl;

    int x=10;
    int *r;
    r=&x;

    cout<<x<<endl; //10
    cout<<&x<<endl;//0x16ef5afb0
    cout<<r<<endl; //0x16ef5afb0
    cout<<&r<<endl;//0x16ef5afa8
    cout<<*r<<endl;//10

    int *s=new int[5];
    delete []s;
    s=nullptr;

    int &y=x;
    cout<<y<<endl; //10
    y++;
    cout<<x<<endl; //11
    
}
*/