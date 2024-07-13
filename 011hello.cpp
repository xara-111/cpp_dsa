//BASIC C++

//iostream is the library containing cout and endl
//std = namespace = All the built in things available in the header library are grouped under 1 name 'std'.
//:: = scope resolution = allow access to a global variable or a class 
//std :: = So we use this to get access to things inside the library
//<< = insertion operator = inserting data into the output stream / used to send bytes to an output stream object

#include<iostream>
int main()
{
    std::cout<<"Hello world"<<std::endl; 

//std::endl = inserts a new line and buffer flush frequently. It is slower than \n cuz it buffer flushes everytime.
//buffer flush = the process of transferring data from a temporary storage area to a computer's permanent memory or storage.
}


// Or we can just write using namespace std instead of writing std:: everytime we use cout
#include<iostream>
using namespace std;
int main()
{
    cout<<"Hello world\n ";
}


