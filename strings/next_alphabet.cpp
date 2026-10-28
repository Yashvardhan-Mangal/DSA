#include <iostream>
using namespace std;

int main(){
    string input = "w3resource";
    for (int i = 0; i < input.length(); i++)
    {
        if(isalpha(input[i])){
            if(input[i]=='z')
            input[i]='a';
            else if(input[i]=='Z')
            input[i]='A';
            else
            input[i]=input[i]+1;
        }
} 
    cout<<input;
    return 0;
}