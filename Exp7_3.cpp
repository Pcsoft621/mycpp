#include<iostream>
#include<string.h>
using namespace std;
class A
{
public:
    int a1=1;
    void show()
    {
        cout<<"\nEverything Acceable";
    }
private: int a2=1;
protected: int a3=1;


};
class B:public A
{
 public:   int b1=2;
 void addAll()
 {
     cout<<"\nClass B addAll Addition:"<<a1+a3+b1;
 }
private: int b2=2;
protected: int b3=2;


};
class C:private A
{
 public:   int c1=3;
 void addAll()
 {
     cout<<"\nClass C addAll Addition:"<<a1+a3+c1;
 }
private: int c2=3;
protected: int c3=3;


};
class D:protected B,public C
{
    public:   int d1=4;
 void addAll()
 {
     cout<<"\nClass D addAll Addition:"<<b1+b3+d1;
 }
private: int d2=4;
protected: int d3=4;

};

int main()
{
    A a;B b;C c;D d;
    a.show();b.addAll();c.addAll();
    d.addAll();
}
