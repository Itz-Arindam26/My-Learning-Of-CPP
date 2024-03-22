#include <iostream>
#include <string>
using namespace std;

int add(int a, int b){
    int c;
    c = a + b;
    return c;
}
class employer
{
    public:
        string name;
        int salary;
        void printdetails(){
            cout<<"The name of employer is "<<this->name<<" & his/her salary is Rs."<<this->salary<<".\n";
        };
};
class employee
{
    public:
        string empname;
        int empsalary;
        void empprintdetails(){
            cout<<"The name of employee is "<<this->empname<<" & his/her salary is Rs."<<this->empsalary<<".\n";
        };
};
int main(){
    cout<<"Lets learn about FUNCTIONS\n";
    int a, b;
    cout<<"Enter First Value:\n";
    cin>>a;
    cout<<"Enter Second Value:\n";
    cin>>b;
    cout<<"The function resulted is "<<add( a, b)<<".\n";

    cout<<"Lets learn about ARRAYS\n";
    int arr[4] ={ 1, 2, 3, 5};
// Array Index    0, 1, 2, 3
    cout<<arr[2]<<'\n';

    int array[6];
    for (int i = 1; i <= 6; i++)
    {
        cout<<"Enter the marks of "<<i<<"th student\n";
        cin>>array[i];
    }
    cout<<"Example of 2 dimentional array is given below\n";
    int arr2d[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"The value @ "<<i<<","<<j<<" is "<<arr2d[i][j]<<".\n";
        }
    }
    
    cout<<"Example of 3 dimensional array is given below\n";
    int arr3d[3][3][3] = {
        {{1, 2, 3},{4, 5, 6},{7, 8, 9}},
        {{10, 11, 12},{13, 14, 15},{16, 17, 18}},
        {{19, 20, 21},{22, 23, 24},{25, 26, 27}}
    };
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                cout<<"The value @ "<<"["<<i<<"]["<<j<<"]["<<k<<"] is "<<arr3d[i][j][k]<<".\n";
            }
        }
    }
    cout<<"Lets learn about TYPECASTING\n";
    int ask = 2342;
    cout<<(float) ask/ 21<<'\n';

    float ball = 3434.67;
    cout<<(int) ball<<'\n';
    cout<<"Lets learn about STRINGS\n";
    string author="ARINDAM_SAMANTA";
    cout<<"The name of the author is "<<author<<".\n";
    cout<<"The length of the author's name is "<<author.length()<<".\n";
    cout<<"The name of the author is "<<author.substr(0, 6)<<".\n";
    cout<<"The name of the author is "<<author.substr(0, 15)<<".\n";
    cout<<"Lets Understand about POINTERS..\n";
    // int dbc = 456;
    // int* ptra;
    long double dbc = 3458.6298;
    long double* ptra;
    ptra = &dbc;
    // We can also it by float or any type of data type
    cout<<"The value of dbc is "<<*ptra<<'\n';
    cout<<"The value of dbc is "<<dbc<<'\n';
    cout<<"The address of dbc is "<<ptra<<'\n';
    cout<<"The address of dbc is "<<&dbc<<'\n';
    employer suku;
    suku.name = "Sukumar_Samanta";
    suku.salary = 40000;
    suku.printdetails();
    employee prob;
    prob.empname= "Probir_Manna";
    prob.empsalary = 18000;
    prob.empprintdetails();
    


    return 0;
}