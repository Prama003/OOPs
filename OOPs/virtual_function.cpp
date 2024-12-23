#include<iostream>
#include<string>
using namespace std;
class Baseclass{
    public:
    int var_base;
    virtual void display()  // virtual is added
    {
        cout<<"displaying base class variable"<<var_base<<endl;
    }
};
class Derivedclass: public Baseclass
{
    public:
    int var_derived;
    void display()
    {
        cout<<"displaying derived class variable "<<var_derived<<endl;
    }
};
int main()
{
    Baseclass * base_class_pointer;
    Baseclass obj_base;
    Derivedclass obj_derived;
    base_class_pointer= &obj_derived;
    return 0;
}