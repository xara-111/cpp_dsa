//REVISION OF C++ CONTENTS FROM BASIC TILL ARRAY

/*
//SUM OF 2 NUMBERS
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 2 numbers\n";
    cin>>a>>b;
    c=a+b;
    cout<<"Addition is \n"<<c;
}
*/



/*
//TAKING STRING INPUT
#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"May i know your name: ";
    //cin>>name;          //FOR SINGLE WORD INPUT
    getline(cin,name);    //FOR MULTIPLE WORD INPUT
    cout<<"Welcome "<<name<<"\n";
}
*/



/*
//AREA OF TRIANGLE
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    float c;  
    cout<<"Enter length and breadth: ";
    cin>>a>>b;


//1ST WAY OF TYPE CASTING(EXPLICIT). WE'RE CONVERTING a AND b INTO FLOAT TYPE BY USING (type)expression TYPE CASTING.
//AND STORE IT IN FLOAT C. THIS RETURNS THE RESULT IN FLOAT.
    //c=((float)a*(float)b)/2;  



//COULD ALSO BE DONE LIKE THIS WHERE BOTH (float) AND FLOATING NO. IS MENTION IN THE OPERATION FOR TYPE CASTING
    //c=(float)a*(float)b*0.5;


//THIS IS THE 2ND WAY OF TYPE CASTING(IMPLICIT IG) CUZ WE'RE INVOLVING AN FLOATING NUMBER IN THE OPERATION
//AND C IS OF TYPE FLOAT ONLY SO THE RESULT IS IN FLOAT
    //c=a*b*0.5;  



//HERE TYPE CASTING DOESN'T OCCUR OR RESULT AIN'T IN FLOAT EVEN IF C IS FLOAT TYPE 
//BECAUSE THIS DEOSN'T TRIGGER TYPE CASTING NEITHER IT HAS FLOATING NO. NOR TYPE CONVERTION (float) IS MENTIONED.
    //c=(a*b)/2;



//HERE ALSO TYPE CASTING DOESN'T OCCUR CUZ C IN WHICH THE RESULT WILL BE STORED IS IN int TYPE.
//SO EVEN IF WE MENTION FLOATING NO. OR (float) IT RETURNS THE RESULT IN INT.
    //int c=(float)a*(float)b*0.5;

    cout<<"Area is: "<<c<<"\n";
}
*/



/*
//SUM OF N NATURAL NUMBERS
#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum=0;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        sum+=i;
    }
    cout<<"Sum is "<<sum<<endl;
}
*/


/*
//FASTER WITH FORMULA (SUM OF N NATURAL NO.S)
#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum;
    cout<<"Enter n: ";
    cin>>n;
    sum=n*(n+1)/2;
    cout<<"Sum is "<<sum;
}
*/


/*
//ROOTS OF QUADRATIC EQUATION AND IT'S NATURE
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c,root1,root2;
    float d;
    cout<<"Enter a,b,c: ";
    cin>>a>>b>>c;
    d=(b*b)-4*a*c;

    if(d>0)
    {
        root1=(-b+sqrt(d))/2*a;
        root2=(-b-sqrt(d))/2*a;
        cout<<"Real and distinct roots are "<<root1<<" and "<<root2;
    }
    else if(d==0.0)
    {
        root1=-b/2*a;
        cout<<"Real and Equal root is "<<root1;
    }
    else
    {
        root1=-b/2*a;
        root2=sqrt(d)/2*a;
        cout<<"Imaginary roots are "<<root1<<" and "<<root2;
    }
}
*/



/*
//FIND MAXIMUM OF 2 NUMBERS
#include<iostream>
using namespace std;
int main()
{
    int a,b,max;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    if(a>b)
    {
        max=a;
    }
    else{
        max=b;
    }
    cout<<max;
}
*/

/*
//FIND IF -VE AND +VE AND ODD OR EVEN

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a no.: ";
    cin>>n;
    if(n%2==0)
    {
        if(n>=0)
        {
            cout<<"It's even and Positive";
        }
        else
        {
            cout<<"It's even and Negative";
        }
    }
    else
    {
        if(n>=0)
        {
            cout<<"It's Odd and Positive";
        }
        else
        {
            cout<<"It's Odd and Negative";
        }
    }
}
*/


/*
//MAXIMUM OF 3 NUMBERS
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,max;
    cout<<"Enter a,b and c: ";
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        max=a;
    }
    else if(b>a && b>c)
    {
        max=b;
    }
    else
    {
        max=c;
    }
    cout<<max;

}
*/


/*
//COUNT DISCOUNT
#include<iostream>
using namespace std;
int main()
{
    int amount;
    float discount=0.0;
    int billamount;
    cout<<"Enter the amount: ";
    cin>>amount;
    if(amount>=5000)
    {
        //SINCE DISCOUNT IS IN FLOAT, WE GOTTA TYPE CAST THE VALUE WE INSERT INSIDE IT TO FLOAT.
        //HERE WE DO IT BY MENTIONING A FLOATING NO. BY MAKING EITHER 20 OR 100 INTO DECIMAL
        discount=((20.0/100)*amount);   
    }
    else if(amount>=2000 && amount<5000)
    {
        discount=((10/100.0)*amount);
    }
    else
    {
        discount=((5/100.0)*amount);
    }

    billamount=amount-discount;
    cout<<"Bill amount is "<<billamount<<" with a discount of "<<discount;
}
*/


/*
//CALCULATOR(SWITCH CASE)
#include<iostream>
using namespace std;
int main()
{
    int n,a,b;
    cout<<"MENU: 1.ADD 2.SUBTRACT 3.MULTIPLY 4.DIVIDE\n"; 
    cout<<"Enter the menu no.:";
    cin>>n;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    switch(n)
    {
        case 1:cout<<(a+b);
        break;
        case 2:cout<<(a-b);
        break;
        case 3:cout<<(a*b);
        break;
        case 4:cout<<(a/b);
        break;
        default:cout<<"Invalid";
        break;
    }
    //THERE IS A CASE OF CONTINUOUS SWITCH CASE ALSO WHERE WE USE FOR EXAMPLE: while(n<4) AT THE END OF SWITCH PARENTHESIS.
    //WHICH WILL CONTINUE TAKING USER INPUT UNTIL A BREAK CONDITION IS GIVEN.
}
*/


/*
//LEAP YEAR
#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter year: ";
    cin>>year;

    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                cout<<"it's a leap year\n";
            }
            cout<<"it's not a leap year\n";
        }
        cout<<"it's a leap year\n";
    }
    else
    {
        cout<<"it's not a leap year\n";
    }
}
*/






//LOOPS

/*
//WHILE LOOP DISPLAY 1 TO 10
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int count=1;
    while(count<=n)
    {
        cout<<count;
        count++;
    }
}
*/


/*
//USING DO WHILE
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int count=1;
    do
    {
        cout<<count;
        count++;
    }while(count<=n);
}
*/


/*
//MULTIPLICATION TABLE
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no. for multiplication table: ";
    cin>>n;
    for(int i=1;i<=10;i++)
    {
        cout<<n<<"x"<<i<<"="<<n*i<<endl;
    }
}
*/


/*
//SUM OF N NUMBERS
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter no.: ";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        sum+=i;
    }
    cout<<sum<<endl;

}
*/



/*
//FACTORIAL OF N NO.S

#include<iostream>
using namespace std;
int main()
{
    int n,factorial=1;
    cout<<"Enter no.:";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        factorial*=i;
    }
    cout<<factorial<<endl;
}
*/



/*
//FACTORS OF A NUMBER
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no.: ";
    cin>>n;
    for(int i=0; i<=n; i++)
    {
        if(n%i==0)
        {
            cout<<i<<endl;
        }
    }
}
*/



/*
//PERFECT NO.:NO. EQUAL TO SUM OF THEIR PROPER DIVISOR(EXCEPT ITSELF)
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter no.: ";
    cin>>n;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        cout<<"It's a perfect no with sum "<<sum<<endl;
    }
    else
    {
        cout<<"It's not a perfect no. with sum "<<sum<<endl;
    }
}
*/


/*
//PRIME NO.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no.: ";
    cin>>n;
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        cout<<"It's prime";
    }
    else
    {
        cout<<"Not prime";
    }
}
*/


/*
//REVERSE OF A NUMBER
#include<iostream>
using namespace std;
int main()
{
    int n,rev;
    cout<<"Enter no.: ";
    cin>>n;
    while(n!=0)
    {
        rev=n%10;
        cout<<rev;
        n=n/10;
    }
    cout<<endl;

}
*/


/*
//REVERSE
#include<iostream>
using namespace std;
int main()
{
    int n,rev=0,r;
    cout<<"Enter no.: ";
    cin>>n;
    while(n!=0)
    {
        r=n%10;
         n=n/10;
        rev=rev*10+r;
       
    }
    cout<<rev;
}
*/


/*
//CHECK IF PALINDROME
#include<iostream>
using namespace std;
int main()
{
    int n,r;
 //ALWAYS ASSIGN SOME INITIAL VALUE IF THE VARIABLE HAS TO PERFORM SOME OPERATION LATER 
 //OR ELSE IT WOULD HAVE GARBAGE INTITAL VALUE AND WOULD GIVE WRONG ANSWERS
    int rev=0;  
    cout<<"Enter no.: ";
    cin>>n;
    int temp=n; //TAKING A TEMP VARIABLE BECAUSE N BECOMES 0 IN THE PROCESS
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    cout<<n<<endl;   //HERE WE CAN SEE N HAS BECOME 0
    cout<<rev<<endl; //FOR PALINDROME WE CAN SEE REVERSE WOULD BE SAME
    if(rev==temp)
    {
        cout<<"It's palindrome\n";
    }
    else
    {
        cout<<"Not palindrome\n";
    }

}
*/


/*
//ARMSTRONG
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,m,cube,digit;
    int sum=0;
    cout<<"Enter no.: ";
    cin>>n;
    int temp=n;
 //WE CAN COUNT THE LENGTH OF NO. W/O TAKING USER INPUT BY SEEING HOW MANY TIMES THE WHILE LOOP RUNS AND COUNT IT.
    cout<<"Enter no. of digit: ";  
    cin>>m;
    
    while(n!=0)
    {
        digit=n%10;
        cube=pow(digit,m);
        sum=sum+cube;
        n=n/10;
    }
    cout<<sum<<endl;
    if(sum==temp)
    {
        cout<<"It's armstrong no.\n";
    }
    else{
        cout<<"Not armstrong no.\n";
    }
}
*/



/*
//GCD OF 2 NUMBERS
//DIVISION BASICALLY IS REPEATED SUBTRACTION
//SO FOR GCD SUBTRACT REPEATEDLY AND (ALTERNATIVELY) UNTIL BOTH NUMBER BECOME EQUAL
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter n and m: ";
    cin>>n>>m;
    while(n!=m)
    {
        if(n>m)
        {
            n=n-m;
        }
        else{
            m=m-n;
        }
    }
    cout<<m;
}
*/



/*
//REVERSE NO. ENDING WITH 0
#include<iostream>
using namespace std;
int main()
{
    int n,r;
    cout<<"Enter no.: ";
    cin>>n;
    char rev[10]; //WE GOTTA STORE THE REVERSE IN CHAR
    int i=0;  //COUNTER

    while(n!=0)
    {
        r=n%10;
        rev[i]=r+'0';  //SAVING THE NO. IN REVERSE AS CHARACTER BY CONVERTING THE DIGIT IN CHAR BY ADDING 0
        n=n/10;
        i++;
    }
    rev[i]='\0';
    cout<<rev;
}
*/





//ARRAY

/*
//DISPLAY ALL ELEMENTS OF ARRAY
#include<iostream>
using namespace std;
int main()
{
    int A[10]={1,4,2,6,3,6,2,6,3,7};
    for(int i=0;i<10;i++)
    {
        cout<<A[i]<<"\n";
    }
}
*/


/*
//FOR EACH
#include<iostream>
using namespace std;
int main()
{
    int array[10]={3,4,1,5,6,1,7,9};
    for(auto x:array) //DISPLAY ALL THE NO.S IN array USING FOR EACH LOOP
    cout<<x<<endl;

    for(int x:array) //FOR EACH X IN array. X IS A COPY OF ALL THE ELEMENTS IN ARRAY
    cout<<x;
    for(int x:array) //SO IT WOULD JUST DISPLAY THE INCREASED VALUE OF THE ELEMENTS IN ARRAY 
    cout<<++x;       //BUT IT DOESN'T INCREASE THE OG VALUE OF THE ELEMENTS.

    for(int &x:array) //USING REFERENCE WOULD INCREASE THE OG VALUE OF ELEMENTS IN THE ARRAY
    cout<<++x;

    for(auto x:array) //IF DATATYPE OF ARRAY IS NOT KNOWN THEN AUTO WILL AUTOMATICALLY MAKE X HAVE SAME DATATYPE AS ARRAY.
    cout<<++x;
}
*/

/*
//LINEAR SEARCH
#include<iostream>
using namespace std;
int main()
{
    int n,key;
    int A[100];
    cout<<"Enter no. of elements in array: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter element in index "<<i<<":";
        cin>>A[i];
    }

    cout<<"The array is:\n";
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<"\n";

    cout<<"Enter the number to search for: ";
    cin>>key;
    for(int i=0;i<n ;i++)
    {
        if(key==A[i])
        {
            cout<<"Key is found at "<<i<<"\n";  
            return 0;  //RETURN 0 IS IMPORTANT IN SEARCH PROGRAMS TO EXIT THE PROGRAM AS SOON AS THE ELEMENT IS FOUND.
        }
    }
    cout<<"Not found \n";
    return 0;

}
*/


/*
//BINARY SEARCH
#include<iostream>
using namespace std;
int main()
{
    int A[100];
    int n;
    int key;
    int l,h,mid;
    
    
    cout<<"Enter the no. of elements in array: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element at index "<<i<<":";
        cin>>A[i];
    }
    cout<<"The array is: \n";
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<"\n";

    cout<<"Enter the key to search: ";
    cin>>key;

    l=0;
    h=n-1;
    
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==A[mid])
        {
            cout<<"Found at "<<mid;
            return 0;  
            //RETURN 0 IS IMPORTANT IN SEARCH PROGRAMS TO EXIT THE PROGRAM AS SOON AS THE ELEMENT IS FOUND.
            //OR ELSE LOOP WILL KEEP ON REPEATING 
        }
        }
        else if(key>A[mid])
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    cout<<"Not found\n";
}
*/

/*
//BINARY SEARCH

#include<iostream>
using namespace std;
int main()
{
    int A[]={2,3,4,5,7,9};
    int l=0;
    int h=5;
    int key;
    cout<<"Enter key: ";
    cin>>key;
    int mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==A[mid])
        {
            cout<<"Found at "<<mid;
            return 0;
        }
        else if(key<A[mid])
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout<<"Not found";
}
*/


//PATTERN
/*
//square
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}
*/


/*
//lower triangle
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    
}
*/

/*
//upper triangle
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int k=i;k<n;k++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}
*/


/*
//lower triangle opposite
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n-1;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<=i;k++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}
*/

/*
//upper traingle opposite
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

}
*/


/*
//butterfly
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        for(int k=i;k<n-1;k++)
        {
            cout<<"  ";
        }
        for(int l=0;l<=i;l++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=n-1;i>=0;i--)
    {
         for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        for(int k=i;k<n-1;k++)
        {
            cout<<"  ";
        }
        for(int l=0;l<=i;l++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}
*/

//2d array
/*
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter size n row: ";
    cin>>n;
    cout<<"Enter size m column: ";
    cin>>m;
    int A[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<"Enter element in index "<<i<<j<<":";
            cin>>A[i][j];
        }
    }
    cout<<"the array is : \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }
}
*/


/*
//avearge of all element in array

#include<iostream>
using namespace std;
int main()
{
    int n;
    float avg;
    int sum=0;
    int A[100];
    cout<<"Enter no. of elements in A: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element at index "<<i<<":";
        cin>>A[i];
    }
    cout<<"The array is :\n";
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
        sum+=A[i];
    }
    cout<<"\n";
    
    avg=(float)sum/(float)n;
    cout<<"average: "<<avg<<"\n";
}
*/



//multiply 2 matrices
#include<iostream>
using namespace std;
int main()
{
    int row1,col1,row2,col2;
    int a[100][100];
    int b[100][100];
    int c[100][100];

    cout<<"Enter no. of row and column of matrix 1: ";
    cin>>row1>>col1;
    cout<<"Enter no. of row and column of matrix 2: ";
    cin>>row2>>col2;
    if(row1!=col2)
    {
        cout<<"Can't be multiplied\n";
        return 0;
    }


    cout<<"Enter elements in matrix 1:\n ";
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            cout<<"Enter at index "<<i<<j<<":";
            cin>>a[i][j];
        }
    }


    cout<<"Enter elements in matrix 2:\n ";
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;j++)
        {
            cout<<"Enter at index "<<i<<j<<":";
            cin>>b[i][j];
        }
    }

    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col2;j++)
        {
            c[i][j]=0;
            for(int k=0; k<col1;k++)
        {
            c[i][j]+=a[i][j]*b[i][j];
        }
        }
    }
    cout<<"the matrix:\n ";
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;j++)
        {
            cout<<c[i][j]<<" ";
            if(j==col2-1)
            {
                cout<<endl;
            }
        }
        //cout<<endl;
    }
}
