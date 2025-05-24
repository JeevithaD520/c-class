#include <iostream>
using namespace std;

class student
{
private:
    string name;
    string college="City Engeneering college";

public:
    student(string n)
    {
        name=n;
    }

    string getCollege()
    {
        return college;
    }
    
    void getDetails()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"College:"<<getCollege()<<endl;
    }
};

int main()
{
    student s1("siri");
    cout<<s1.getCollege()<<endl;
    s1.getDetails();
}