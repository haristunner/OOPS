// OOPS HEIRARCHICAL INHERITANCE
#include <iostream>
using namespace std;

class Hari{
    public:
     int a=10;
     void fun(){
         cout<<"hii";
     }
};

class Two: public Hari {
    public:
    int b=20;
    void fun1(){
        cout<<"gg";
    }
};

class Three : public Hari{
    public:
    int c=111;
}; 
int main()
{
    Three obj;
    Two obj1;
    int x,y;
    x=obj.a;
    y=obj1.a;
    obj.fun();
    obj1.fun();
    cout<<endl<<x<<" "<<y;
    return 0;
}
