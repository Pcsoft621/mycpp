#include<iostream>
using namespace std;
class A{
public:
    int a=10,b=20;

};
class B:private A{
    int c=30;
    public:
    void display()
    {
        cout<<"\na="<<a;
        cout<<"\nb="<<b;
        cout<<"\nc="<<c;
    }
};
int main()
{
    B t;
    t.display();
    return 0;
}
