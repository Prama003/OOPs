#include<iostream>
#include<string>
using namespace std;
class Employee{
    public:
    string name;
    string company;
    int age;
    void introduce()
    {
        cout<<"name"<<name<<endl;
        cout<<"company"<<company<<endl;
        cout<<"age"<<age<<endl;
    }
};
int main()
{
    Employee employee1;
    employee1.name="rose";
    employee1.company="youtube";
    employee1.age=25;
    employee1.introduce();
    return 0;
}