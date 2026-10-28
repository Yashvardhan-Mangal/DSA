#include<iostream>
using namespace std;
int main(){
    // Find largest in Array
int a1[] = {12,90,76,45,99,60};
int max = a1[0];
int value = NULL;
int value2 = NULL;
for (int i = 0; i <6 ; i++)
{
   if(a1[i]>max){
    max=a1[i];
value = i;
   }
}
max=a1[0];
for (int i = 0; i <6 ; i++)
{
 if(i==value)
 continue;
 else
 if(a1[i]>max){
    max=a1[i];
value2 = i;
   }
}
cout<<"Max element is :"<<"a1["<<value<<"]"<<endl;
cout<<"Second Max element is :"<<"a1["<<value2<<"]";
return 0;
}