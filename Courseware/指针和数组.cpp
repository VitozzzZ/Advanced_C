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
    cout<<setw(4)<<*(*(p+i)+j);//可用p[i][j]代替
    return 0;
}


//二维数组名引用
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    cout<<"a="<<a<<endl;
    cout<<"&a[0]="<<&a[0]<<endl<<endl;
    
    cout<<"a+1="<<a+1<<endl;
    cout<<"&a[0]+1="<<&a[0]+1<<endl<<endl;
    
    cout<<"*a="<<*a<<endl;
    cout<<"a[0]="<<a[0]<<endl;
    cout<<"&a[0][0]="<<&a[0][0]<<endl<<endl;
    
    cout<<"*a+1="<<*a+1<<endl;
    cout<<"a[0]+1="<<a[0]+1<<endl;
    cout<<"&a[0][0]+1="<<&a[0][0]+1<<endl<<endl;
    return 0;
    
}
output:
a=0x7fff5fbff6d0
&a[0]=0x7fff5fbff6d0

a+1=0x7fff5fbff6e0
&a[0]+1=0x7fff5fbff6e0

*a=0x7fff5fbff6d0
a[0]=0x7fff5fbff6d0
&a[0][0]=0x7fff5fbff6d0

*a+1=0x7fff5fbff6d4
a[0]+1=0x7fff5fbff6d4
&a[0][0]+1=0x7fff5fbff6d4
