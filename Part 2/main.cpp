#include <bits/stdc++.h>
using namespace std;

int main(){
    // cout<<"Hello World\n";
    // In this part we will understand about operators,loops & if-else statement
    cout<<"Let's learn about OPERATORS\n";
    // There are 4 main types of operators and there operation is given below:-
    int a;
    cout << "Enter the first value:\n";
    cin >> a;

    int b;
    cout << "Enter the second value:\n";
    cin >> b;

    cout << "Below one is the type of addition(+) operation\n";
    cout << a << " + " << b << " = " << a + b << '\n';
    cout << "Below one is the type of subtraction(-) operation\n";
    cout << a << " - " << b << " = " << a - b << '\n';
    cout << "Below one is the type of multiplication(*) operation\n";
    cout << a << " * " << b << " = " << a * b << '\n';
    cout << "Below one is the type of division(/) operation\n";
    // if we write float while doing division operation,it will not show accurate value.So, for accurate value,we should add float in the following way
    cout << a << " / " << b << " = " << (float)a / b << '\n';
    cout << "Let's learn about IF-ELSE conditional statements\n";
    int age;
    cout << "Enter your Age\n";
    cin >> age;
    if(age>150 || age<8){
        cout << "Invalid Age!\n";
    }
    else if(age >= 18){
        cout << "You are eligible for vote\n";
    }
    else{
        cout << "You are not eligible for vote\n";
    }
    int salary;
    cout << "Enter Your Salary(in Rs.):\n";
    cin >> salary;
    switch (salary)
    {
    case 20000:
        cout << "You have Rs.20000 as salary.\n";
        break;
    case 30000:
        cout << "You have Rs.30000 as salary.\n";
        break;
    case 40000:
        cout << "You have Rs.40000 as salary.\n";
        break;
    case 50000:
        cout << "You have Rs.50000 as salary.\n";
        break;
    case 60000:
        cout << "You have Rs.60000 as salary.\n";
        break;
    case 70000:
        cout << "You have Rs.70000 as salary.\n";
        break;
    case 80000:
        cout << "You have Rs.80000 as salary.\n";
        break;
    case 90000:
        cout << "You have Rs.90000 as salary.\n";
        break;
    case 100000:
        cout << "You have Rs.100000 as salary.\n";
        break;

    default:
        cout << "Invalid Salary.\n";
        break;
    }
    cout<<"Now,we will understand about LOOPS\n"<<"Firstly,We will start with While Loop.\n";
    int index = 0;
    while(index<55){
        cout<<"We are on index number "<<index<<".\n";
        index++;
    }
    cout<<"We will start with Do-While Loop.\n";
    int count = 0;
    do
    {
        cout<<"We are on count number "<<count<<".\n";
        count++;
    }while(count > 3344);
    cout<<"We will start with For Loop.\n";
    for (int i = 0; i <= 555; i++)
    {
        cout<<"The value of i is "<<i<<".\n";
    }
    

    return 0;
}