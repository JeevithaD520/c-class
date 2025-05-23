#include <iostream>
using namespace std;

class person
{
public:
    string name;
    person(string user_name)
    {
        name=user_name;
        cout<<"Objected Constructed:"<<name<<endl;
    }

    ~person()
    {
        cout<<"object Destructed:"<<name<<endl;
    }
};

int main()
{
    person p1("keerthi");
    person p2("ramya");
}