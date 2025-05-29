#include <iostream>
using namespace std;
 int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;

    try
    {
        if (num < 0)
           throw "Negative number entered!";
        cout<<"you entered:"<<num<<endl;
    }
    catch(const char *msg)
    {
        cout<<"Exception:"<<msg<<endl;
    }

    return 0;
 }
