#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Use of Constants in C++
    int a = 45;
    cout << "The value of a was: " << a << '\n';
    a = 454;
    cout << "The value of a is: " << a << '\n';
    // The above thing happened so because the variable a can be changed at any time as it is is not declared constant by (const).Now you will see the usage of const declaration;
    const long double pi = 3.14159l;
    cout << "The value of 'pi' is " << pi << '\n';
    /*pi = 3.141;
    cout<<"The value of 'pi' is "<<pi<<'\n';
    The above commented syntax is not applicable as i have declared pi in line no 11 by const, a constant value which cant be replicated by other declaration*/
    // Understanding about Manipulation in different wayzz
    // first way⬇️ using "endl" declaration
    cout << "Hello World" << endl;
    // second way⬇️ using setw() declaration;
    int b = 3, c = 45, d = 567;
    cout << "The value of b is: " <<setw(4)<<b<<endl;
    cout << "The value of c is: " <<setw(4)<<c<<endl;
    cout << "The value of d is: " <<setw(4)<<d<<endl;

    cout << "The value of b without setw is: "<<b<<endl;
    cout << "The value of c without setw is: "<<c<<endl;
    cout << "The value of d without setw is: "<<d<<endl;
    // Operator Precedence
    // forknowing more about it,go through the link: https://en.cppreference.com/w/cpp/language/operator_precedence;
    int multi1 = 56;
    int multi2 = 88;
    int multi3 = multi1*66 + multi2;
    // the above equation will follow bodmas rule;
    cout<<"The value came is "<<multi3<<'\n';
    
    multi3 = ((((multi1*66) + multi2)-445)+567);
    // the above equation will also follow bodmas rule;
    cout<<"The value came is "<<multi3<<'\n';
    


    return 0;
}