#include <iostream>
using namespace std;

class A
{
private:
    int x=5;
    int y=10;

    void greet()
    {
        cout<<"Greeting"<<endl;
    }

    friend void show(A);
};

void show(A obj)
{
    cout<<"Value of x:"<<obj.x<<endl;
    cout<<"Value of y:"<<obj.y<<endl;
}

int main()
{
    A a;
    show(a);
    return 0;
}