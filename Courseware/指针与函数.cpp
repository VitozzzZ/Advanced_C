#include <iostream>
#include <iomanip>
using namespace std;
int sum(int array[],int n)
{
    for(int i=0;i<9;i++)
    {
        *(array+1)=*array+*(array+1);
        array++;//C++编译器将形参组名作为指针变量来处理
    }
    return *array;
}
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<sum(a,10)<<endl;
    return 0;
}
