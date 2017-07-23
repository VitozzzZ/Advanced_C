//循环表示
#include <iostream>
using namespace std;
int main()
{
    int blockCount=1;
    int i=0,N=0;
    cin>>N;
    for(i=1;i<=N;i++)
        blockCount=blockCount+i;
    cout<<"最多可切"<<blockCount<<"块"<<endl;
    return 0;
}


//递归表示
#include <iostream>
using namespace std;
int q(int n)
{
    if(n==0)
        return 1;
    else
        return(n+q(n-1));
}
int main()
{
    int a=0;
    while(cin>>a)
        cout<<q(a)<<endl;
    return 0;
}
