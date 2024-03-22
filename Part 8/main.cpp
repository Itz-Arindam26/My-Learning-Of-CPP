#include <bits/stdc++.h>
using namespace std;

int main(){
    // Understand about Break and continue;
    int i;
    for (int i = 0; i < 40; i++)
    {
        cout<<i<<'\n';
        if(i == 3){
            break;
            // the break declaration say the loop that  if it comes the loop will terminate without looking that the condition is fullfilled or not;
            // if we write cout below this if-else statement,this will also not print 2 with other values
        }
    }
    cout<<'\n';
    int f;
    for (int f = 0; f <= 50; f++)
    {
        if(f == 50){
            continue;
        }
        cout<<f<<'\n';
        // the continue declaration will not print only the condition. it only complete
    }
    // Pointers in C++
    // it is a data type which holds the address of other datatypes
    // see the example given below
    float a = 45.57f;
    float* pointer = &a;
    
    // * character is used after int in the above syntax is to show that variable is able to contain the address of the another data type
    cout<<'\n';
    
    // * ---> dereferencing operator
    cout<<a<<'\n';
    cout<<*pointer<<'\n';  //this syntax will parse the value of a like the above one

    // & ---> address of operator
    // the address means here the memory's address where the pointer and a is storing itself..
    cout<<&a<<'\n';
    cout<<pointer<<'\n';  //this syntax will parse the address of a like above one

    

    return 0;
}