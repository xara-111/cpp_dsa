
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



//STRING

/*
//WAYS TO STORE STRING

#include<iostream>
using namespace std;
int main()
{
    char s[]="Hello\n";  //STRING IN STACK
    //char *s1="Hello\n";  //STRING IN HEAP(SHOWS ERROR CUZ IT TELL YOU TO TAKE STRING CLASS INSTEAD OF CHAR *)
    string s2="Hello\n"; //CLASS STRING (C++ HAS A CLASS STRING)-> STORED IN HEAP
    cout<<s<<s2;
}
*/


/*
//WAYS TO GET STRING INPUT OF MULTIPLE WORDS AND MULTIPLE TIMES
// cin.ignore() function and cin.get()

#include<iostream>
using namespace std;
int main()
{
    char s[100];
    cout<<"Enter name: ";
    cin>>s;    //SINGLE WORD
    cin.ignore(); 
    char s1[100];
    char s2[100];
    cout<<"Enter month and year: ";
    cin.get(s1,100);  //MULTIPLE WORD
    cin.ignore();
    cout<<"Enter full name: ";
    cin.get(s2,100);
    cout<<"Hi "<<s<<" you entered "<<s1<<" and full name "<<s2;
}
*/


/*
//WAYS TO GET STRING INPUT MULTIPLE TIMES
//cin.getline()

#include<iostream>
using namespace std;
int main()
{
    char s[100];
    char s2[100];
    cout<<"Enter name: ";
    cin.getline(s,100);  //MULTIPLE LINES
    cout<<"Enter age: ";
    cin.getline(s2,100);
    cout<<"Hi "<<s<<" and "<<s2;
}
*/



/*
//CHARACTER ARRAY STRING
//STRING FUNCTIONS

#include<iostream>
#include<string.h> //HEADER FILE CONTAINING BUILT IN FUNCTIONS FOR OPERATION ON STRING
using namespace std;
int main()
{
    char s1[100]="Good ";
    char s2[100]="Morning";
    cout<<strlen(s1)<<endl; //ALSO WORK WITH MULTIPLE WORDS IN GET()/GETLINE() FUNCTION
    //cout<<strcat(s1,s2)<<endl; //Good Morning ->strcat(destination,source)
    //cout<<strncat(s1,s2,4)<<endl; //Good Morn -> strncat(destination,source,number of character from source s2)
    //cout<<strcpy(s1,s2); //Morning, copy content of s2 in s1, s1's content disappear
    //cout<<strncpy(s1,s2,4); //Morn, copy content of s2 in s1 with length mentioned
}
*/

/*
//STRING SUBSTRING
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s1[100];
    char s2[100];
    cout<<"Enter the string: ";
    cin>>s1;
    cout<<"Enter the string to search for: ";
    cin>>s2;

    if(strstr(s1,s2)!=NULL)
    {
        cout<<strstr(s1,s2)<<endl;
    }
    else
    {
        cout<<"Not found\n"<<endl;
    }


}
*/

/*
//STRING SUBSTRING AND COMPARE
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s1[]="Educattion";
    char s2[]="cat";
    cout<<strstr(s1,s2)<<endl;   //SEARCH A SUBSTRING IN A STRING
    cout<<strchr(s1,'t')<<endl;  //SEARCH A CHARACTER IN A STRING
    cout<<strrchr(s1,'t')<<endl; //SEARCH A CHARACTER IN A STRING FROM RIGHT
    char s3[]="apple";
    char s4[]="banana";
    //RETURNS +VE: STR3>STR4, -VE:STR3<STR4, 0:STR3=STR4
    //HERE STR3<STR4 BECAUSE APPLE COMES BEFORE BANANA IN DICTIONARY 
    cout<<strcmp(s3,s4)<<endl;   //COMPARE 2 STRING
}
*/

/*
//STRING CONVERTION TO INT AND FLOAT

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s1[100]="234";
    char s2[100]="54.60";
    long int x=strtol(s1,NULL,10);
    float y=strtof(s2,NULL);
    cout<<x+10<<" "<<y+5<<endl;  //CAN PERFORM ARITHMETIC OPERATION SINCE IT'S INTEGER NOW.
}
*/


/*
//TOKENIZATION OF STRING AND IT'S METHOD
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[]="x=10; y=20; z=30";
    char *token=strtok(s,"=;");
    while(token!=NULL)
    {
        cout<<token<<endl;
        token=strtok(NULL,"=;");
    }
}
*/



/*
//CLASS STRING FUNCTIONS
#include<iostream>
#include<string> //TO ACCESS CLASS WE INCLUDE THIS HEADER FILE
using namespace std;
int main()
{
    string str;
    //SINCE STRING IS CLASS, STR IS OBJECT NOT VARIABLE. WHEN WE DECLARE VARIABLE OF TYPE CLASS, WE CALL IT OBJECT.
    //THE SIZE OF THE ARRAY IS CAPACITY OF STRING AND NO. OF LETTER UPTO NULL CHARACTER IS LENGTH/SIZE OF STRING
    //CAPACITY>LENGTH
    cout<<"Enter string: ";
    getline(cin,str);  //FOR USER INPUT



    //BASIC STRING FUNCTIONS
    cout<<str.length()<<endl;  //TO FIND THE LENGTH OF STRING TILL NULL CHARACTER
    cout<<str.size()<<endl;    //TO FIND THE LENGTH OF STRING TILL NULL CHARACTER
    cout<<str.capacity()<<endl;//TO FIND THE SIZE OF THE ARRAY
    str.resize(100);           //TO RESIZE THE CAPACITY OF THE ARRAY
    cout<<str.capacity()<<endl;
    cout<<str.max_size()<<endl;//POSSIBLE MAXIMUM SIZE OF STRING YOU CAN HAVE IN THIS COMPILER
    //str.clear();               //CLEAR THE ARRAY
    str.empty();               //CHECK IF ARRAY IS EMPTY
    cout<<str.length()<<endl;




    //APPEND AND INSERT FUNCTIONS
    cout<<str.append(" baby")<<endl; //ADD AT THE END OF THE STRING
    cout<<str.insert(2,"lllllllll")<<endl; //INSERT AT THE GIVEN INDEX
    cout<<str.replace(0,3,"Olalalala")<<endl; //REPLACE AT GIVEN INDEX AND REPLACES GIVEN AMOUNT OF LETTERS
    str.push_back('z'); //ADD A SINGLE CHARACTER AT THE END OF THE STRING
    cout<<str<<endl;
    str.pop_back(); //DELETE 1 CHARACTER FROM THE END OF THE STRING LIKE BACKSPACE
    cout<<str<<endl;




    //SWAP FUNCTION
    string str2;
    cout<<"Enter string 2: ";
    getline(cin,str2);
    //str.swap(str2);     //SWAP 2 STRINGS
    //cout<<str<<endl;




    //COPY AND FIND FUNCTIONS
    char S1[100];
    str.copy(S1,3);
    cout<<S1<<endl;  //COPY A STRING INTO CHARACTER ARRAY
    cout<<str.find("la")<<endl; //TO FIND A SUBSTRING OR CHARACTER FROM STRING AND RETURN THE INDEX
    cout<<str.rfind("ol")<<endl;  //TO FIND A SUBSTRING OR CHARACTER FROM STRING RIGHT SIDE AND RETURN THE INDEX
    cout<<str.find("re")<<endl;   //IF NOT FOUND, RETURN -1 OR MAXIMUM VALUE OF STRING IN COMPILER
    cout<<str2.find_first_of('o')<<endl; //FIND THE INDEX OF FIRST OCCURENCE OF A CHARACTER IN THE STRING
    cout<<str2.find_last_of('o')<<endl;  //FIND THE INDEX OF LAST OCCURENCE OF A CHACTER INT HE STRING



    //SUBSTRING AND COMPARE AND STRING OPERATORS
    cout<<str2.substr(2)<<endl;   //REUTRN THE SUBSTRING FROM THE MENTIONED INDEX(2)
    cout<<str2.substr(2,1)<<endl; //RETURN THE SUBSTRING FROM THE MENTIONED INDEX(2) UPTO THAT MANY LETTER MENTIONED(1)
    cout<<str.compare(str2)<<endl;//COMPARE 2 STIRNGS
    //str<str2:-VE , str>str2:+VE, str=str2:0
    cout<<str2.at(2)<<endl; //RETURN THE CHARACTER AT THIS INDEX. ONLY READ USING FUNCTION.
    cout<<str2[2]<<endl;    //RETURN CHARACTER AT INDEX. SUBSCRIPT/OPERATOR CAN READ.
    str2[0]='T';            // SUBSCRIPT/OPERATOR CAN AS WELL AS WRITE A NEW VALUE AT THAT INDEX.
    cout<<str2<<endl;        
//at() IS LIKE [] OPERATOR. EVEN IF I WROTE LIKE str2[2] IT GIVES THE SAME RESULT.
//[] USING THIS OPERATOR WE CAN READ AND WRITE GIVEN VALUE AT AN INDEX AS WELL.
//at() IS A MEMBER FUNCTION(A FUNCTION ASSOCIATED WITH SPECIFIC CLASS).
//[] IS A OPERATOR AND STRING IS A CLASS NOT ARRAY THEN HOW DOES IT WORK WITH IT?
//[] IS OVERLOADED OPERATOR. INSIDE C++ CLASSES WE CAN DEFINE FUNCTIONS FOR OPERATORS. THIS OPERATOR ALREADY DEFINED IN STRING CLASS.
    cout<<str2.front()<<endl; //RETURNS THE FIRST LETTER
    cout<<str2.back()<<endl;  //RETURNS THE LAST LETTER
    cout<<str+str2<<endl;     //CONCATENATE 2 STRINGS TOGETHER
    cout<<str2+"HIHIhHIHIH"<<endl; //ALSO USED LIKE THIS
    str=str2; //COPY THE CONTENT OF STRING 2 IN STRING 1
    cout<<str<<endl;

}
*/


/*
//ITERATORS
#include<iostream>
using namespace std;
int main()
{
   string str="Education";
   string::iterator it;
   for(it=str.begin(); it!=str.end(); it++)
   {
    cout<<*it;   //ITERATE THE STRING
    *it=*it-32;  //INTO UPPERCASE
   }
   cout<<str<<endl;
}
*/


/*
//REVERSE ITERATOR
#include<iostream>
using namespace std;
int main()
{
    string str="Education";
    string::reverse_iterator rit;
    for(rit=str.rbegin(); rit!=str.rend(); rit++)
    {
        cout<<*rit;  //REVERSE THE STRING
    }
}
*/



/*
//FIND LENGTH OF STRING
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter string: ";
    getline(cin,str);
    cout<<"LEngth is "<<str.length();
}
*/
/*
//FINDING LENGTH THROUGH ITERATION
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter string: ";
    getline(cin,str);
    string::iterator it;
    int count=0;
    for(it=str.begin();it!=str.end();it++)
    {
        count++;
    }
    cout<<"Length is "<<count;
}
*/

/*
//CHANGE CASES OF LETTERS THROUGH ITERATION
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter string in caps: ";
    getline(cin,str);
    string::iterator it;
    for(it=str.begin();it!=str.end();it++)
    {
        *it=*it+32;
    }
    cout<<str;
}
*/

/*
//CHANGE CASES OF LETTER CHARACTER ARRAY
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[20];
    cout<<"Enter string: ";
    cin.getline(str,20);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
        str[i]-=32;
        }
    }
    cout<<str;

}
*/

/*
//CHANGE IN CASES OF LETTER CLASS STRING
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str;
    cout<<"Enter string: ";
    getline(cin,str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
        str[i]-=32;
        }
    }
    cout<<str;

}
*/


/*
//COUNT VOWELS AND WORDS IN A STRING


#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str;
    int vowel=0,words=1,consonants=0;
    cout<<"Enter string: ";
    getline(cin,str);

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            vowel++;
        }
        else if(str[i]==' ' && str[i+1]!=' ')
        {
            words++;
        }
        else
        {
            consonants++;
        }
    }
    cout<<"No. of vowels: "<<vowel<<endl;
    cout<<"No. of words: "<<words<<endl;
    cout<<"No. of consonants: "<<consonants<<endl;

}
*/


/*
//PALINDROME
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str;
    string rev=" ";
    cout<<"Enter string: ";
    getline(cin,str);
    int len=str.length();
    rev.resize(len);
    for(int i=0,j=len-1;i<len;i++,j--)
    {
        rev[j]=str[i];
    }
    cout<<rev<<endl;
    if(str.compare(rev)==0)
    {
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<"Not palindrome"<<endl;
    }
}
*/

/*
//EXTRACT USERNAME FROM EMAIL
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string email;
    cout<<"Enter email: ";
    getline(cin,email);
    int i=email.find('@');
    string uname=email.substr(0,i);
    cout<<"username is "<<uname<<endl;
}
*/