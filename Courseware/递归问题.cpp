//一个逆向打印的递归程序
#include<iostream>
using namespace std;
int recur()
{
    char c;
    c=cin.get();
    if(c!='\n')
        recur();
    cout<<c;
    return 0;
}
int main()
{
    recur();
    return 0;
}


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

//分苹果问题 把m个苹果放在n个相同的盘子里，允许有的盘子空着不放，问共有多少种不同的分法
//算法：若m<n,f(m,n)=f(m,m);若m>=n,分为二种情况（有盘子空着，没有盘子空着）（1）f(m,n)=f(m,n-1) （2）f(m,n)=f(m-n,n)
#include <iostream>
using namespace std;
int f(int m,int n)
{
    if(m<=1||n<=1)
        return 1;
    if(m<n)
        return f(m,m);
    else
        return f(m,n-1)+f(m-n,n);
}
int main()
{
    int apples,plates;
    cin>>apples>>plates;
    cout<<f(apples,plates)<<endl;
    return 0;
}

//逆波兰表达式
#include <iostream>
using namespace std;
double notation()
{
    char str[10];
    cin>>str;
    switch(str[0])
    {
        case'+':return notation()+notation();
        case'-':return notation()-notation();
        case'*':return notation()*notation();
        case'/':return notation()/notation();
        default:return atof(str);
    }
}
int main()
{
    cout<<notation()<<endl;
    return 0;
}
