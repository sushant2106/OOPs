#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    A()
    {
        cout<<"I am A\n";
    }
    A(int x)
    {
        cout<<"I am "<<x;
    }
    A(string x)
    {
        cout<<x;
    }
    public:
      int a=10;
};
//class B:public A{
//     public:
//     B()
//     {
//          cout<<"I am B\n";
//     }
// };
int main()
{
    A obj(10);
    A obj1("ram");
    cout<<endl<<obj.a;
}
