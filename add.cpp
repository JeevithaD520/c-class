#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
};

int main()
{
    Person P1;
    P1.name = "Raj";
    P1.age = 20;

    Person P2;
    P2.name = "kumar";
    P2.age = 23;

    cout<<P1.name<<endl<<P1.age<<endll;
    cout<<P2.name<<endl< P2.age<<endl;
}