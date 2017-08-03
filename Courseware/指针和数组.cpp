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

//用指针遍历二维数组
#include <iostream>
using namespace std;
int main()
{
    int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23};
    int *p;
    for(p=&a[0][0];p<&a[0][0]+12;p++)
    {
        cout<<p<<' '<<*p<<endl;
    }
    return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23};
    int (*p)[4],i,j;
    p=a;
    cin>>i>>j;
    cout<<setw(4)<<*(*(p+i)+j);
    return 0;
}
