#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a[10],i;
    for(i=0;i<10;i++)
        cin>>a[i];
    for(i=9;i>=0;i--)
        cout<<setw(3)<<a[i];
    return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a[10],i,*p=a;
    for(i=0;i<10;i++)
        cin>>*p++;
    for(p--;p>=a;)
        cout<<setw(3)<<*p--;
    return 0;
}
