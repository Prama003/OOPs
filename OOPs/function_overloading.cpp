#include<iostream>
#include<string>
using namespace std;
class clg
{   public:
    void fun()
    {
        cout<<"i am function with no arguments"<<endl;;
    }
    void fun( int x)
    {
        cout<<"i am a function with int arguments"<<endl;;

    }
    void fun(double x)
    {
        cout<<"i am a function with double arguments"<<endl;;
    }
};
int main()
{
    clg obj;
    obj.fun();
    obj.fun(4);
    obj.fun(9.8);
    return 0;
}