#include<iostream>
using namespace std;
int main(){
    // Find largest in Array
int a1[] = {12,90,76,45,99,60};
int max = a1[0];
int value = NULL;
for (int i = 0; i <5 ; i++)
{
   if(a1[i]>max){
    max=a1[i];
value = i;
   }
}

cout<<"Max element is :"<<"a1["<<value<<"]";
return 0;
}