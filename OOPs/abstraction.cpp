#include<bits/stdc++.h>
#include<string>
using namespace std;
class AbstractEmployee
{
    virtual void askforpromotion()=0;
};
class Employee: AbstractEmployee{
    public:
    string name;
    string company;
    int age;
    void askforpromotion()
    {
        if (age>=30)
        {
            cout<<name<<"is"<<"promoted"<<endl;
        }
        else
        {
        cout<<name<<"is"<<" not promoted"<<endl;
        }
    }
    Employee(string aname, string acompany, int aage)
    {
        name=aname;
        company=acompany;
        age=aage;
    }
};
int main()
{
    Employee employee1("tom","youtube",25);
    Employee employee2("sam","google",35);
    employee1.askforpromotion();
    employee2.askforpromotion();
    return 0;
}