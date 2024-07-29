


//STL CLASS
/*
//VECTOR CLASS

#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v={2,4,6,8,10}; //an object of vector type created which can store integer values.
    v.push_back(20);
    v.push_back(30);
    v.pop_back();

    vector<int>::iterator itr;
    cout<<"using iterator"<<endl;
    for(itr=v.begin();itr!=v.end();itr++)
    {
        cout<<++*itr<<" "; //adding ++ before dereference increement the value
        //using these iterator you can modify this values inside vector also.
    }
    cout<<endl;


    cout<<"Using for each loop"<<endl;
    for(int x:v)
    {
        cout<<x<<" ";  
    }
}
*/


/*
//LIST CLASS(DOUBLY LINKED LIST)(JUST BY REPLACING LIST IN PLACE OF VECTOR)
#include<iostream>
#include<fstream>
#include<list>
using namespace std;

int main()
{
    list<int> v={2,4,6,8,10}; //an object of vector type created which can store integer values.
    v.push_back(20);
    v.push_back(30);
    v.pop_back();

    list<int>::iterator itr;
    cout<<"using iterator"<<endl;
    for(itr=v.begin();itr!=v.end();itr++)
    {
        cout<<++*itr<<" "; //adding ++ before dereference increement the value
        //using these iterator you can modify this values inside vector also.
    }
    cout<<endl;


    cout<<"Using for each loop"<<endl;
    for(int x:v)
    {
        cout<<x<<" ";  
    }
}
*/


/*
//FORWARD LIST(SINGLY LINKED LIST)
#include<iostream>
#include<fstream>
#include<forward_list>
using namespace std;

int main()
{
    forward_list<int> v={2,4,6,8,10}; //an object of vector type created which can store integer values.
    v.push_front(20);
    // v.push_back(30);  Not there in forward list
    // v.pop_back();

    forward_list<int>::iterator itr;
    cout<<"using iterator"<<endl;
    for(itr=v.begin();itr!=v.end();itr++)
    {
        cout<<++*itr<<" "; //adding ++ before dereference increement the value
        //using these iterator you can modify this values inside vector also.
    }
    cout<<endl;


    cout<<"Using for each loop"<<endl;
    for(int x:v)
    {
        cout<<x<<" ";  
    }
}
*/



/*
//SET CLASS
#include<iostream>
#include<fstream>
#include<set>
using namespace std;

int main()
{
    set<int> v={2,4,6,8,10,10}; 
    v.insert(20);
    v.insert(30);
   

    set<int>::iterator itr;
    cout<<"using iterator"<<endl;
    for(itr=v.begin();itr!=v.end();itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;


    cout<<"Using for each loop"<<endl;
    for(int x:v)
    {
        cout<<x<<" ";  
    }
}
*/

/*
//MAP CLASS
#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string>m; // map object <key,value>
    m.insert(pair<int,string>(1,"John"));
    m.insert(pair<int,string>(2,"Ravi"));
    m.insert(pair<int,string>(3,"Khan"));

    //iterate through map
    map<int,string>::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl; //for key and value pair
    }
    //search through the map
    map<int,string>::iterator itr2;
    itr2=m.find(2);
    cout<<"Value found is "<<endl;
    cout<<itr2->first<<" "<<itr2->second<<endl;
}
*/



//PRACTICE QUESTION
#include<iostream>
#include<fstream>
#include<vector>
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

 vector<Item *> list;
 cout<<"Enter All Item "<<endl;
 for(int i=0;i<n;i++)
 {
 cout<<"Enter "<<i+1<<" Item Name , price and quantity";
 cin>>name;
 cin>>price;
 cin>>qty;
 list.push_back(new Item(name,price,qty));

 }

 ofstream fos("Items.txt");
 vector<Item *>::iterator itr;

 for(itr=list.begin();itr!=list.end();itr++)
 {
 fos<<**itr;
 }
 Item item;
 ifstream fis("Items.txt");
 for(int i=0;i<3;i++)
 {
 fis>>item;
 cout<<"Item "<<i<<endl<<item<<endl;
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