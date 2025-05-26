#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the number"<<endl;
    cin>>a>>b>>c;
{
    if(a>b && a>c){
        cout<<"its the largest number"<<a<<endl;
    }
    else if(b>a && b>c){
        cout<<"its the largest number"<<b<<endl;
    }
    else{
        cout<<"its the largest numbers"<<c<<endl;
    }
     
}
return 0;
}