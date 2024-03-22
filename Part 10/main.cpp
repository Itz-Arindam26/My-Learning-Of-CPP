#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

// int multiply(int a, int b); --->ACCEPTABLE
// int multiply(int, int); --->ACCEPTABLE
// int multiply(int a, b); --->NOT ACCEPTABLE
// The above 2 formats which are acceptable by compiler should be used as a and b are not any variable because they are only temporary parameters and a & b will change according to the actual parameters which are introduced in a function and if we write int & int it is not a problem as we only declare that the datatype is int but can use both one;

// the swap function will not work as it doesn't have address of a and b to change their value.To change the value of a and b, we have to give address of a and b...
void swap(int a, int b)
{                 // temp  a  b
    int temp = a; //  45   45 56
    a = b;        //   45   56 56
    b = temp;     //    45  56 45
}

// Call by reference using pointers
void swapaddresspointer(int* a, int* b)
{                  // temp  a  b
    int temp = *a; //  45   45 56
    *a = *b;       //   45   56 56
    *b = temp;     //    45  56 45
}

// Call by reference using variable
void swapaddressvar(int &a, int &b)
{                  // temp  a  b
    int temp = a; //  45   45 56
    a = b;       //   45   56 56
    b = temp;     //    45  56 45
}

int multiply(int, int);

void greet(void);

int main()
{
    // more about functions in C++
    greet();
    cout << "ADDITION FUNCTION\n"
         << '\n';
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "The sum is " << sum(num1, num2) << ".\n"
         << '\n';
    // understand about function prototypes
    // it is a declaration of the function which is written before main()function in order to give assurity to compiler that the given function may be after the main() function.It does't say surely that there may any function after main function but it gives the compiler 'dilasa'.For more clarity refer to the example given below:-
    // to add proto type see at above lines
    // if we don't add prototype compiler will throw error
    cout << "MULTIPLICATION FUNCTION\n"
         << "\n";
    int c, d;
    // but here c & d are actual parameters
    cout << "Enter first number: ";
    cin >> c;
    cout << "Enter second number: ";
    cin >> d;
    cout << "The product is " << multiply(c, d) << ".\n";
    cout << endl;
    // Call by reference using pointers
    int a = 56, b = 45;
    cout << "The value of a is " << a << " and value of b is " << b << '\n';
    swap(a, b);
    // the swap function will not work as it doesn't have address of a and b to change their value.To change the value of a and b, we have to give address of a and b...
    swapaddresspointer(&a, &b); // this will swap a and b by pointers..
    cout << "The value of a is " << a << " and value of b is " << b << '\n';
    // Call by reference by variable
    int x = 34,y = 43;
    // value before swap
    cout << "The value of x is " << x << " and value of y is " << y << '\n';
    swapaddressvar(x , y); // value after swap
    cout << "The value of x is " << x << " and value of y is " << y << '\n';

    return 0;
}

int multiply(int a, int b)
{
    int c;
    c = a * b;
    return c;
}
void greet()
{
    cout << "Hi!Have a good day!\n";
}