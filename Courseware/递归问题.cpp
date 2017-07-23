//进制转换
#include <iostream>
using namespace std;
void convert(int x)
{
    if((x/2)!=0)
    {
        convert(x/2);
        cout<<x%2;
    }
    else
        cout<<x;
}
int main()
{
    int x;
    cin>>x;
    convert(x);
    return 0;
}


//汉诺塔问题
#include <iostream>
using namespace std;
void move(int m,char x,char y,char z)
{
    if(m==1)
    {
        cout<<"把一个盘子从"<<x<<"移动到"<<z<<endl;
    }
    else
    {
        move(m-1,x,z,y);
        cout<<"把一个盘子从"<<x<<"移动到"<<z<<endl;
        move(m-1,y,x,z);
    }
   
}
int main()
{
    int n;
    cout<<"输入盘数n=";
    cin>>n;
    cout<<"在3根柱子上移"<<n<<"只盘子的步骤为："<<endl;
    move(n,'A','B','C');
    return 0;
}
