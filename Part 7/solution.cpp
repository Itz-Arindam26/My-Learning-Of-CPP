#include <bits/stdc++.h>
using namespace std;

int main(){
    // *************Quick Quizz************ //
    /*Print First 10 multiples of 6 by any type of loop;*/
    cout<<"The Table of 6 is given below:\n";
    int six = 6;
    for (int i = 1; i <= 10; i++)
    {
        int product = six * i;
        cout<<six<<" * "<<i<<" = "<<product<<'\n';
    }
    
    return 0;
}