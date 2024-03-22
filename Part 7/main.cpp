#include <bits/stdc++.h>
using namespace std;

int main(){
    // cout<<"This a code\n";
    // the above syntax was written whether terminal is working or not
    // Selection Control Structure: IF-ELSE_IF-ELSE Ladder
    string name;
    int age;
    cout<<"Enter Your Name:\n";
    // While getting input of two or more words,write the syntax given below⬇️
    getline(cin,name);
    cout<<"Enter Your Age:\n";
    cin>>age;
    if(age<18){
        cout<<"You are not allowed to my party..\n";
    }
    else if(age == 18){
        cout<<"You are a kid and you will be given kid pass to enter in my party.\n.";
    }
    else if(age>60){
        cout<<"You are not allowed to my party..\n";
    }
    else{
        cout<<"You are allowed to my party..\n";
    }
    // Selection Control Structure: Switch Case Statement
    switch (age)
    {
    case 18:
        cout<<"You are eligible for voting\n";
        break;
    
    default:
        cout<<"Nothing special is for you..\n";
        break;
    }
    // LOOPS in C++
    /*There are 3 types of loops in C++ :
    ⒈FOR Loop
    ⒉While Loop
    ⒊Do-While Loop  */
    // For loop
    // For example you have given that you have to print numbers from 0 to 100 then this will worked in below syntax
    for (float i = 0; i <= 100; i++)
    {
        cout<<i<<'\n';
    }
    // While Loop In C++
    // Take the example given above;
    // Below one syntax will also work in C++
    int t = 0;//declare any iteger let t;
    while (t<=100)
    {
        cout<<t<<endl;
        t++;
    }
    // Do-While Loop In C++
    // Take the example given above;
    // Below one syntax will also work in C++
    int f = 0;//declare any iteger let f;
    do{
        cout<<f<<endl;
        f++;
    }while(f<=100);
    // Quick Quizz //
    /*Print First 10 multiples of 6 by any type of loop;
    for solution refer to the solution.cpp */
    
    

    return 0;
}