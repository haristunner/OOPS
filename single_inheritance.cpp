// OOPS SINGLE INHERITANCE
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
};

int main()
{
    Two obj;
    int x,y;
    x=obj.a;
    y=obj.b;
    obj.fun();
    cout<<endl<<x<<" "<<y;
    return 0;
}
