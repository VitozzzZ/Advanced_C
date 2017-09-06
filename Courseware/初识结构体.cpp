//生日相同问题
#include<iostream>
using namespace std;
struct student
{
    char ID[10];
    int month;
    int day;
}stu[100];
int main()
{
    int j,k,n,flag,count[100]={0};
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>stu[i].ID>>stu[i].month>>stu[i].day;
    for(int m=1;m<=12;m++)
    {
        for(int d=1;d<=31;d++)
        {
            flag=0;j=0;
            for(int i=0;i<n;i++)
            {
                if(stu[i].month==m&&stu[i].day==d)
                {
                    count[++j]=i;
                    flag++;
                }
            }
            if(flag>1)
            {
                cout<<m<<" "<<d<<" ";
                for(k=1;k<j;k++)
                    cout<<stu[count[k]].ID<<" "<<endl;
            }
        }
    }
    return 0;
}
