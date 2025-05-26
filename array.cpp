#include<iostream>
using namespace std;
int main(){
int largest,i;
int array[5]={1,2,80,4,5};
{
int largest=array[0];
for(i=1;i<5;i++){
if(array[i]>largest){
largest=array[i];
}
}
cout<<"the largest number is:"<<largest<<endl;
return 0;
}
}
