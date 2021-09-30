#include<iostream>
using namespace std;
class constructor
{
public:
    int a,b;
    constructor()
    {

         a=10;
         b=20;
    }
};
int main()
{
    constructor c;
    cout<<c.a<<endl;
    return 0;

}
