#include<iostream>

using namespace std;

class bigger
{
    int a,b,c,ans;
    int big(void);
public:
    void getdata(void);
    void display(void);
};

inline int bigger::big(void)
{
    if(a>=b&&a>=c) return a;
    if(b>=a&&b>=c) return b;
    if(c>=b&&c>=a) return c;
}

void bigger::display(void)
{
    cout<<"Biggest = "<<ans;
}

void bigger::getdata (void)
{
    cout<<"Enter 1st Number ";
    cin>>a;
    cout<<"Enter 2nd Number ";
    cin>>b;
    cout<<"Enter 3rd Number ";
    cin>>c;
    ans = big();
}

main()
{
    bigger b1;
    b1.getdata();
    b1.display();
}
