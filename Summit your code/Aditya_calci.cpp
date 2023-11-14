#include <iostream>
using namespace std;
int
main ()
{
    int a, b, r;
    char c;
    cout<<"THIS A CALCULATOR"<<endl<<"enter value"<<endl;
    cin>>a>>c>>b;
    cout<<endl;
    while (true) {
        if(c=='+') {
           r=a+b; 
        }
        else if (c=='-') {
            r=a-b;
        }
        else if (c=='*') {
            r=a*b;
        }
        else if (c=='/') {
            r=a/b;
        }
        cout<<r<<endl<<endl<<"enter new values or enter 0 to stop"<<endl;
        cin>>a>>c>>b;
        if (a==0) {
            break;
        }
    }
}
