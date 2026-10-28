#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
   string str = "hello world";
   int arr[] = {1,2,3};
       cout<<arr<<endl; // 0x62fee8

    char ar1[]={'a','b','c','\0'};
    cout<<ar1<<endl;  // abc

    cout<<strlen(ar1)<<endl;

    // user input 

    char c1[100];
    cin.getline(c1,100);
    cout<<c1;
    return 0;
}