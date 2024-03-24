#include <bits/stdc++.h>
using namespace std;

// inline int product(int a, int b){//the inline declaration in function is used to replace the call of product by its code and it is helpful in short function but in large functions where there is a large code in it, we should not use it there..
//     return a*b;
// }

int product(int a, int b){ // this type of thing can't be used with inline declaration
    static int c = 0; // the static is the value in which it will applied in the first time then it will change by statements like given below one...
    c = c + 1;
    return a*b + c;
}

float moneyReceived(int currmoney, float interest = 1.06){// the value of interest given here is the default value and it will be used only if  user not change value while calling the function...
    return currmoney * interest;
}

int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n * factorial(n-1);
}

// Function overloading concept
int prod(int a, int b){
    cout<<"Multiplying using two integers..\n";
    return a*b;
}

int prod(int a, int b, int c){
    cout<<"Multiplying using three integers..\n";
    return a*b*c;
}

int main(){
    // inline function, default value
    int a, b;
    cout<<"Enter the first value:\n";
    cin>>a;
    cout<<"Enter the second value:\n";
    cin>>b;
    cout<<"The product of "<<a<<" & "<<b<<" is "<<product(a, b)<<".\n";
    // cout<<"The product of "<<a<<" & "<<b<<" is "<<product(a, b)<<".\n"; i have comment out else it will took space in my storage...
    // cout<<"The product of "<<a<<" & "<<b<<" is "<<product(a, b)<<".\n";
    // cout<<"The product of "<<a<<" & "<<b<<" is "<<product(a, b)<<".\n";
    // cout<<"The product of "<<a<<" & "<<b<<" is "<<product(a, b)<<".\n";
    // cout<<"The product of "<<a<<" & "<<b<<" is "<<product(a, b)<<".\n";
    // cout<<"The product of "<<a<<" & "<<b<<" is "<<product(a, b)<<".\n";
    // cout<<"The product of "<<a<<" & "<<b<<" is "<<product(a, b)<<".\n";
    // cout<<"The product of "<<a<<" & "<<b<<" is "<<product(a, b)<<".\n";
    int money;
    cout<<"Enter your current money:\n";
    cin>>money;
    cout<<"If you have Rs."<<money<<" in your bank account,then you will get Rs."<<moneyReceived(money)<<" after 1 year.\n";
    cout<<"For VIP : If you have Rs."<<money<<" in your bank account,then you will get Rs."<<moneyReceived(money,1.8)<<" after 1 year.\n";
    // Lets learn about recursion
    /*firstly learn about factorials
    factorial is a type of mathematic operation it is done like given below:-
    exclamation mark(!) is the sign of factorial
    6! = 6*5*4*3*2*1
    0! is 1 as well as 1! is also 1
    factorial of any integer will be written as given below:-
    n! = n * (n-1)!
    we will use this thing to understand about recursion..
    recursion mean that repetition till base condition becomes true...
    it happens like above function
    */
   int c;
   cout<<"Enter the value of which you want to get factorial:\n";
   cin>>c;
   cout<<"The factorial of "<<c<<" is "<<factorial(c)<<".\n";
   /*my new engine has launched to clown it follw the link : https://github.com/Itz-Arindam26/Factorial-Calculating-Engine.gi t*/
   // function overloading
   /*let say i have made two function of same name which will add no but 1st function is made such that it can add only 2 numbers and another one will add 3 numbers. then if i have call both of them then what will haooen? will compiler throw error? or anything other will happen? let check by the example...*/
   cout<<"The product of 3, 4, 5 is:\n"<<prod(3, 4, 5)<<'\n';
   cout<<"The product of 3, 4 is:\n"<<prod(3, 4)<<'\n';
    // the compiler didn't throw error
   
    return 0;
}