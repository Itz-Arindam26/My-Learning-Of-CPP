#include <bits/stdc++.h>
using namespace std;
class employer{
    public:
        string name;
        int salary;
        employer(string name,int salary){
            this->name = name;
            this->salary = salary;
        }
        void PrintDetails(){
            cout<<"The name of the employer is "<<this->name<<" & his/her salary is Rs."<<this->salary<<".\n";
        }
};
class employee{
    public:
        string employeename;
        string emplyername;
        int empsalary;
        employee(string employeename,string emplyername,int empsalary,int secretid){
            this->employeename = employeename;
            this->emplyername = emplyername;
            this->empsalary = empsalary;
            this->secretid = secretid;
        }
        void printdetails()
        {
            cout<<"The employee is "<<this->employeename<<" & his/her salary is Rs."<<this->empsalary<<" & his/her employer is "<<this->emplyername<<".\n";
        }
        void getsecretid(){
            cout<<"The Employee-Id of "<<this->employeename<<" is "<<this->secretid<<".\n";
        }
    private:
        int secretid;
};
int main(){
    // Now we will know more about functions
    // in previous part,we disscused about how to use function and classes but in these we will use it by different way;
    employer suku("Sukumar Samanta",45000);
    suku.PrintDetails();
    employee prob("Probir Manna","Sukumar Samanta",18000,663214);
    prob.printdetails();
    employee nishi("Nishit Bhowmick","Sukumar Samanta",13000,345123);
    nishi.printdetails();
    nishi.getsecretid();


    return 0;
}