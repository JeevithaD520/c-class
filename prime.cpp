#include<iostream>
using namespace std;

bool primeChecking(int number)
{
    for(int i=2;i < number;i++)
    {
        if(number % i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
int num,result;
cout<<"enter the number"<<endl;
cin>>num;
result=primeChecking (num);
if(result)
{
cout<<"it is a prime number"<<endl;
}
else
{
cout<<"it is not prime number"<<endl;
}
}
