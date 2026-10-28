#include <iostream>
#include<string>
using namespace std;

int main() {
    string input = "cpp string exercises";
    int i=1;
    while(i<input.length()){
        if(input[i-1]==' '){
            toupper(input[i]);
        }
    }
    cout<<input;
    return 0;
}