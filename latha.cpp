#include <iostream>
using namespace std;

float rec(float a,float b){
    float c = a*b;
    return c;
   
}
int main(){
    float x,y,result;
    cout<<"enter the value of length:"<<endl;
    cin>>x;

    cout<<"enter the value of width:"<<endl;
    cin>>y;
     result=rec(x,y);
     cout<<"area of the rectangle:"<<result<<endl;
    
}