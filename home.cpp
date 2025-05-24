#include <iostream>
using namespace std;

class security
{
public:
    virtual void security(string s)=0;
    virtual void cctv(string c)=0;
    virtual void dogs(string d)=0;


};

class home:public security
{
public:
    void security (string s)override
    {
        cout<<security<<endl;
    }
    void cctv(string c)override
    {
        cout<<cctv<<endl;
    }
    void dogs(string d)override
    {
        cout<<dogs<<endl;
    }
    
        
    
};

int main()
{
    home h1;
    h1.security(akash);
    h1.cctv(aulto);
    h1.gogs(golden retriver);

}