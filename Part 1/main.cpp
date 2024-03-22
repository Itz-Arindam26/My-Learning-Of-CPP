#include <bits/stdc++.h>
using namespace std;

int main(){
    string const author = "Arindam_Samanta";
    string const Author = "Arindam_Samanta";
    cout<<author<<'\n';
    // const is type of command by which you can fix any variable's value and such that any other cannot able to change the code
    // This is a video on C++ Variables..
    /*.exe file compile the code and gives result...
    'cout' means console out which means that print the thing which is given after it.It may be anything.
    'cin' is a command which is used to take user input
    Here "Hello World" is a string which has to be printed by the 'cout' command
    Let say i have two lines given below.To get printed both lines in separate line,we use"endl" in the command after two smaller than/'<' sign or "\n" in the string 
    Use \n as far as possible as this is computed faster than endl;*/
    cout<<"Hello World!\n";
    cout<<"I am the best.\n";
    // Now,I will talk about data types & variable in C++
    // To know more about c++ data types and variable, follow the link: https://www.w3schools.com/cpp/cpp_variables.asp;
    // Any variable name can be started by any underscore or any english letter
    // int s2323a = 545;
    // The above syntax is valid in C++ but below C++ syntax is not valid
    // int 33a = 34;
    int a, b, c;
    cin>> a>> b>> c;
    // int is is a type of data type in which mathematical digits are contained
   short ab = 33;
   cout<<ab<<'\n'<< a<< '\n'<< b<< '\n'<< c<< '\n';
    // short is also a type of data type  in which contain less than int
    string am = "String";
    cout<<am<<'\n';
    // string is also a data type
    char ax ;
    cin>> ax;
    cout<< ax<< '\n';
    // char is a type of a data type in which it can take only single character like if i want to take result in a,b,c than it can work only on single character
    long ask;
    cin>>ask;
    cout<<ask<<'\n';
    // long is a data type which can contain a long digit of number in it
    // In increasing order all type of mathematical data type can be written as given below:-
    // short < int < long < long long
    float score;
    cin>>score;
    cout<<"The score is "<< score<<'\n';
    // float is also another type of data type which can contain contain the value which has decimal point
    double score2;
    cin>> score2;
    cout<<"The another score is "<<score2<<'\n';
    // double is also a data type which is similar to float but it can contain more than float
    long double score3;
    cin>> score3;
    cout<<"The other score is "<< score3<< '\n';
    // float < double < long double

    return 0;
}