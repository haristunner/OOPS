// OOPS POLYMORPHISM
#include <iostream>
using namespace std;

class Hari{
    public:
    int fun(int a, int b){
        return a+b;
    }
    int fun(int a, int b, int c){
        return a+b+c;
    }
};

int main()
{
    int x,y;
    Hari obj;
    x=obj.fun(3,6);
    y=obj.fun(2,4,6);
    cout<<x<<endl<<y;
    return 0;
}
