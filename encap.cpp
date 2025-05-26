#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    char gender;
    int age;
};

class student:public Person
{
public:
    string college;
    string department;
};

class teacher:public Person
{
public:
    string college;
    int salary;
    string designation;
};

int main()
{
    student s1;
    teacher t1;
    s1.name= "jennie";
    s1.gender= 'f';
    s1.age= 24;
    s1.college= "City Engeneering College";
    s1.department= "Electronics and communication";
    t1.name= "gabriel";
    t1.gender= 'm';
    t1.age= 28;
    t1.college= "City Engeneering College";
    t1.salary= 20000;
    t1.designation= "bts";
    cout<<s1.name<<endl;
    cout<<s1.gender<<endl;
    cout<<s1.age<<endl;
    cout<<s1.college<<endl;
    cout<<s1.department<<endl;
    cout<<"====================="<<endl;
    cout<<t1.name<<endl;
    cout<<t1.gender<<endl;
    cout<<t1.age<<endl;
    cout<<t1.college<<endl;
    cout<<t1.salary<<endl;
    cout<<t1.designation<<endl;

}