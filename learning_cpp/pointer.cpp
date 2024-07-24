#include<iostream>
using namespace std;
class person
{
public:
int age, sal;
string add,name;
public:
void setallvalue(int age,int sal,string name,string add) 
 {this->age=age;
  this->sal=sal;
  this->name=name;
  this->add=add;
  }
  void display()
  {cout<<"name is "<<name<<endl;
   cout<<"age is  "<<age<<endl;
   cout<<"add is  "<<add<<endl;
   cout<<"sal is  "<<sal<<endl;
   }
   };
   int main()
   {person ob,ob1;
    ob.setallvalue(20,2000,"ram","indore");
    ob.display();
    cout<<"------ob.details-----"<<endl; 
    ob1.setallvalue(30,2000,"aman","bhopal");
    ob1.display();
    cout<<"----ob1.details-----"<<endl;
   }