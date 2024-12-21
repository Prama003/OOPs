#include<bits/stdc++.h>
#include<string>
using namespace std;
class Employee{
    public:
    string name;
    string company;
    int age;
    void introduce()
    {
        cout<<"name "<< name<<endl;
        cout<<"company "<< company<<endl;
        cout<<"age "<< age<<endl;
    }
    Employee( string aname, string acompany, int aage)
    {
        name=aname;
        company=acompany;
        age=aage;
    }
};
int main()
{
    Employee employee1=Employee("rose","youtube",25);
    employee1.introduce();
    Employee employee2=Employee("tom","google",34);
    employee2.introduce();
    return 0;
}