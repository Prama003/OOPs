#include<bits/stdc++.h>
#include<string>
using namespace std;
class Employee{
    private:
    string name;
    string company;
    int age;
    public:
    // Constructor
    Employee(string aname, string acompany, int aage) {
        name = aname;
        company = acompany;
        age = aage;
    }
    void setName(string aname)  
    {
        name=aname;
    }
    string getName()
    {
        return name;
    }
    void setCompany( string acompany)
    {
        company=acompany;
    }
    string getCompany()
    {
        return company;
    }
    void setAge(int aage)
    {
        age=aage;
    }
    int getAge()
    {
        return age;
    }
    void introduce()
    {
        cout<<"name "<<name<<endl;
        cout<<"company "<<company<<endl;
        cout<<"age "<<age<<endl;
    }
};
int main()
{
    Employee employee1("rose","yt",25);
    employee1.introduce();
    Employee employee2("tom","google",32);
    employee1.introduce();
    employee1.setName("riya");
    cout<<employee1.getName()<<"is "<< employee1.getAge()<< "year old."<<endl;
    return 0;
}