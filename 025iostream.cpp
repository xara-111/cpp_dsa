

//WRITING IN A FILE
/*
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream ofile("My.txt", ios::trunc);
    ofile<<"John"<<endl; //if you write name with roll it'll be taken as single string and cause problem while reading. so better use endl or leave some space between values
    ofile<<25<<endl;
    ofile<<"cs"<<endl;

    ofile.close();
}
*/

//READING FROM A FILE
/*
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream ifs;
    ifs.open("My.txt");

    if(ifs)
    {
        cout<<"File is open\n";
    }

    if(ifs.is_open())
    {
        cout<<"File is open\n";
    }
    string name;
    int roll;
    string branch;

    ifs>>name>>roll>>branch;
    ifs.close();


    cout<<"Name "<<name<<endl;
    cout<<"Roll "<<roll<<endl;
    cout<<"Branch "<<branch<<endl;
}
*/

//SERIALIZATION
//storing and retrieving the state of an object.
//store student info in file and again retrieve the info of student from file.
//STORING STATE OF AN OBJECT
/*
#include<iostream>
#include<fstream>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    string branch;

    friend ofstream & operator<<(ofstream &ofs, student &s1);
};

ofstream & operator<<(ofstream &ofs, student &s1) //insdie the function, store the values
{
    ofs<<s1.name<<endl;
    ofs<<s1.roll<<endl;
    ofs<<s1.branch<<endl;
    return ofs;
}
int main()
{
    student s1; //object of student class
    s1.name="Khan"; s1.roll=23; s1.branch="cs";
    //i wanna store this object s1 in a file as an object

    ofstream ofs("student.txt",ios::trunc);


    // ofs<<s1.name<<endl;
    // ofs<<s1.roll<<endl;
    // ofs<<s1.branch<<endl;
    //this is how we can write all these values in a file

    //instead of storing the values individually, can we store the object?
    //we have to overload the operator of ofs in student class

    ofs<<s1; //send ofs to that operator with student object s1.
    ofs.close();
}
*/

//RETRIEVE STATE OF AN OBJECT FROM A FILE
/*
#include<iostream>
#include<fstream>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    string branch;

    friend ofstream & operator<<(ofstream &ofs, student &s1);
    friend ifstream & operator>>(ifstream &ifs, student &s1);
};

ofstream & operator<<(ofstream &ofs, student &s1) //insdie the function, store the values
{
    ofs<<s1.name<<endl;
    ofs<<s1.roll<<endl;
    ofs<<s1.branch<<endl;
    return ofs;
}

ifstream & operator>>(ifstream &ifs, student &s1)
{
    ifs>>s1.name>>s1.roll>>s1.branch; //read value from the file
    return ifs;
}
int main()
{
    student s1; 

    ifstream ifs("student.txt");
    //now we have to override extraction
    ifs>>s1;
    cout<<"Name "<<s1.name<<endl;
    cout<<"Roll "<<s1.roll<<endl;
    cout<<"Branch "<<s1.branch<<endl;

    ifs.close();
}
*/




//PRACTICE QUESTION-PART 1
/*
#include<iostream>
#include<fstream>
using namespace std;

class list
{
    public:
    string name;
    int price;
    int quantity;

    friend ofstream & operator<<(ofstream &ofs, list &l);
};

ofstream & operator<<(ofstream &ofs, list &l)
{
    ofs<<l.name<<endl;
    ofs<<l.price<<endl;
    ofs<<l.quantity<<endl;
    return ofs;
}
int main()
{
    list l;
    l.name="Orange";l.price=50;l.quantity=20;
    ofstream ofs("list.txt",ios::trunc);

    // ofs<<l.name<<endl;
    // ofs<<l.price<<endl;
    // ofs<<l.quantity<<endl;

    ofs<<l;

    ofs.close();

}
*/

//PRACTICE QUESTION-PART2
/*
#include<iostream>
#include<fstream>
using namespace std;

class list
{
    public:
    string name;
    int price;
    int quantity;

    friend ofstream & operator<<(ofstream &ofs, list &l);
    friend ifstream & operator>>(ifstream &ifs, list &l);
};

ofstream & operator<<(ofstream &ofs, list &l)
{
    ofs<<l.name<<endl;
    ofs<<l.price<<endl;
    ofs<<l.quantity<<endl;
    return ofs;
}

ifstream & operator>>(ifstream &ifs, list &l)
{
    ifs>>l.name>>l.price>>l.quantity;
    return ifs;
}


int main()
{
    list l;
    //l.name="Orange";l.price=50;l.quantity=20;
    ifstream ifs("list.txt");

    // ofs<<l.name<<endl;
    // ofs<<l.price<<endl;
    // ofs<<l.quantity<<endl;

    ifs>>l;

    cout<<"Name "<<l.name<<endl;
    cout<<"price "<<l.price<<endl;
    cout<<"quantity "<<l.quantity<<endl;

    ifs.close();

}
*/



//PRACTICE QUESTION GIVEN SOLUTION
#include<iostream>
#include<fstream>
using namespace std;
class Item
{
private:
 string name;
 float price;
 int qty;
public:
 Item(){}
 Item(string n,float p,int q);
 friend ifstream & operator>>(ifstream &fis,Item &i);
 friend ofstream & operator<<(ofstream &fos,Item &i);
 friend ostream & operator<<(ostream &os,Item &i);

};


int main()
{
 int n;

 string name;
 float price;
 int qty;

 cout<<"Enter number of Item:";
 cin>>n;

 Item *list[n];
 cout<<"Enter All Item "<<endl;
 for(int i=0;i<n;i++)
 {
 cout<<"Enter "<<i+1<<" Item Name , price and quantity";
 cin>>name;
 cin>>price;
 cin>>qty;
 list[i]=new Item(name,price,qty);

 }

 ofstream fos("Items.txt");
 for(int i=0;i<n;i++)
 {
 fos<<*list[i];
 }
 Item item;
 ifstream fis("Items.txt");
 for(int i=0;i<3;i++)
 {
 fis>>item;
 cout<<"Item "<<i<<item<<endl;
 }

}
Item::Item(string n,float p,int q)
{
 name=n;
 price=p;
 qty=q;
}
ofstream & operator<<(ofstream &fos,Item &i)
{
 fos<<i.name<<endl<<i.price<<endl<<i.qty<<endl;
 return fos;
}
ifstream & operator>>(ifstream &fis,Item &i)
{
 fis>>i.name>>i.price>>i.qty;
 return fis;
}
ostream & operator<<(ostream &os,Item &i)
{
 os<<i.name<<endl<<i.price<<endl<<i.qty<<endl;
 return os;
}
