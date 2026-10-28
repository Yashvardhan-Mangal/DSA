#include<iostream>
#include<string>
using namespace std;

int main(){
   string str = "hello world";
   string new_string = "";
for (int i = str.length()-1; i >=0 ; i--)
{
    new_string = new_string + str[i];
}
cout<<new_string;
return 0;
}