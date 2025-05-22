#include <iostream>
using namespace std;

class person
{
public:
    string name;
    int age;

    person(int person_age, string person_name)
    {
        name=person_name;
        age=person_age;
    }

    void intro()
    {
        cout<<"My name is"<<name<<endl<<"My age is"<<age<<endl;
    }
};

int main()
{
    person P1(19,"janvi");
    person P2(19,"siri");
    P1.intro();
    P2.intro();
}
