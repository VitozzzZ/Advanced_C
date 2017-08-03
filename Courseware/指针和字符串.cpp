#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    char buffer[10]="ABC";
    char *pc;
    pc="hello";
    cout<<pc<<endl;//hello
    pc++;
    cout<<pc<<endl;//ello
    cout<<*pc<<endl;//e
    pc=buffer;
    cout<<pc<<endl;//ABC
    return 0;
    
}
