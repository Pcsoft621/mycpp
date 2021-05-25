#include<iostream>
#include<string.h>
using namespace std;
class Employee{
public:
    int id;
    string nm;

};
class Employee2{
public:
    int salary;

};
class B:public Employee,public Employee2{
    int experiance;

    public:
    void input();

    void display();

};
void B::input()
{
    cout<<"Enter Employee Name:";
    cin>>nm;
    cout<<"Enter Employee ID:";
    cin>>id;
    cout<<"Enter Employee salary:";
    cin>>salary;
    cout<<"Enter Employee Experiance in year:";
    cin>>experiance;
}
void B::display()
{
    cout<<"\nName:"<<nm<<"\nID:"<<id<<"\nSalary:"<<salary<<"\nExperiance:"<<experiance;

}
int main()
{
    B t;
    t.input();
    t.display();
    return 0;
}
