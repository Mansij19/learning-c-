#include<iostream>
using namespace std;
class base
{
    private:
    int a,b;
    public:
      void setA(int a)
      { this->a=a;
      }
     void setB(int b)
      {this->b=b;
      }
      int getA()
       { return a;
       }
      int getB()
       { return b;
       }
};
class derive:public base
{
    private:
    int c;
    public:
       void setC(int c)
        {
        this->c=c;
        }
       int getC()
        { return c;
        }

    void sum()
    { cout<<"sum of a and b is  "<<getA()+getB()<<endl;
    }
    void sub()
    {cout<<"sub of a and c is  "<<getA()-getC<<endl;
    }
    void mul()
    {cout<<"multiplication of b and c is  "<<getB()*getC<<endl;
    }
};
int main()
{ 
  derive ob;
 ob.setA(4);
 ob.setB(6);
 ob.setC(9);
 ob.sum();
 ob.sub();
 ob.mul();

}

