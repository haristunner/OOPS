// OOPS MULTILEVEL INHERITANCE
#include <iostream>
using namespace std;

class Hari{
    public:
     int a=10;
     void fun(){
         cout<<"hii";
     }
};

class Two : public Hari{
    public:
    int b=20;
    void fun1(){
        cout<<"gg";
    }
};

class Three : public Two{
    public:
    int c=111;
}; 
int main()
{
    Three obj;
    int x,y,z;
    x=obj.a;
    y=obj.b;
    z=obj.c;
    obj.fun1();
    cout<<endl<<x<<" "<<y<<" "<<z;
    return 0;
}
