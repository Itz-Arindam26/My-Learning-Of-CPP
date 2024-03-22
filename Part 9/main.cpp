#include <bits/stdc++.h>
using namespace std;

typedef struct employee
{
  int eID;
  char favchar;
  float salary;
  void getdetails(int eID,char favchar,float salary){
    this->eID = eID;
    this->favchar = favchar;
    this->salary = salary;
  }
  void printdetails(){
    cout<<"The eID of the employee is "<<this->eID<<" & his/her favourite character is "<<this->favchar<<" & his/her salay is Rs."<<this->salary<<".\n";
  }
} emp; // the typedef is use to define struct datatye by another way like done below

union money{
  double inr;
  double usd;
  double eur;
};

int main(){
  // Learn more about arrays
  int marks[] = {23, 45, 56, 78, 98};
  // array index  0,  1,  2,  3,  4
  cout<<marks[0]<<'\n'; 
  cout<<marks[1]<<'\n'; 
  cout<<marks[2]<<'\n'; 
  cout<<marks[3]<<'\n'; 
  cout<<marks[4]<<'\n'; 
  //    we change any index no. value by the following way
  int mathmark[] = {342, 456, 567, 786};
  // array index     0,   1,    2,   3
  mathmark[2] = 555;

  for (int i = 0; i < 4; i++)
  {
    cout<<"The marks of "<<i<<"th student is "<<mathmark[i]<<'\n';
  }
  // pointers arithmatic
  int* p = marks;
  int r;
  cout<<"The value at marks[0] is "<<*p<<'\n';
  // the below one is the type of arithmatic in which we can find address of any term in any array
  for(r = 0; r<4;r++){
  cout<<"The address of ["<<r<<"] term is "<<p + r*sizeof(marks)<<'\n';
  }
  // STRUCTURE,UNION & ENUMS
  // we can use struct just like class
  // always write char in single qoutation marks
  // Structure
  struct employee prob;
  prob.getdetails(12342069,'C',18000);
  prob.printdetails();
  emp nish;
  nish.getdetails(12342070,'B',15000);
  nish.printdetails();
  // union is a function c++ in which if there are 2 or more data types ,we can use one and only one 
  // if i use 2 or more than 2 there will be error in the memory
  // Union
  union money m3;
  m3.eur = 85.6;
  cout<<m3.eur<<'\n';

  // Enum
  // enum is a type of data type which makes another types of data types in which we can assign values from 0
  enum meal{breakfast, brunch, lunch, dinner};
  cout<<breakfast<<'\n';
  cout<<lunch<<'\n';
  cout<<brunch<<'\n';
  // the below one will work as a boolean in which output like 1 = true and 0 = false
  cout<<(dinner==0)<<'\n';
  cout<<(breakfast==0)<<'\n';

  return 0;
}