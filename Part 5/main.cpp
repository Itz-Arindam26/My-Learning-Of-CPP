#include<bits/stdc++.h>
using namespace std;

int c = 34;
int main(){
    // Let learn about global and local variable;
    int a, b, c;
    cout<<"Enter the First value:\n";
    cin>>a;
    cout<<"Enter the Second value:\n";
    cin>>b;
    c = a + b;
    cout<<"The sum is "<<c<<".\n";
    // to get printed any global variable(let say c),we have to write the following syntax;
    cout<<"The global c is "<<::c<<".\n";
    // Now we will know how differentiate in float value and long double value for compiler;
    // to differentiate float value and long double/double value we have wrie syntax given below;
    float d = 45.67f;
    long double e = 45.67l;
    cout<<"The value of d is "<<d<<".\n"<<"The value of e is "<<e<<".\n";
    // finding size of int and float,double and long double;
    cout<<"The value of 34.4 is "<<sizeof(34.4)<<".\n";
    cout<<"The value of 34.4f is "<<sizeof(34.4f)<<".\n";
    cout<<"The value of 34.4F is "<<sizeof(34.4F)<<".\n";
    cout<<"The value of 34.4l is "<<sizeof(34.4l)<<".\n";
    cout<<"The value of 34.4L is "<<sizeof(34.4L)<<".\n";
    cout<<"The value of 34 is "<<sizeof(34)<<".\n";
    //   Learn about REFERENCE VARIABLES
    float x = 34.45f;
    float &y = x;
    cout<<x<<'\n'<<y<<'\n';
    // Now learn more about typecasting
    // we can write it in two wayzz
    // the below two wayzz are valid in C++
    // First Way⬇️
    float t = 334.45f;
    cout<<int(t)<<'\n';
    // Second Way⬇️
    int i = 334;
    cout<<(float)i<<'\n';
    // now typecasting in another way;
    float s = 3344.445l;
    int l =(int)s;
    cout<<s<<'\n'<<l<<'\n';



    return 0;
}