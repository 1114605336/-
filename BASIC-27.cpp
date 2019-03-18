//see this website:https://blog.csdn.net/s2013122867/article/details/50310405
#include <iostream>
#include <cmath>
#include <stdio.h>
#include <string>
#include <cstring>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <queue>
#include <iomanip>
#include <algorithm>
#include <memory.h>
using namespace std;
const int MAX=10;
int Map[MAX][MAX];
int visit[MAX][MAX];
int q_w[MAX],q_b[MAX];//第i个元素所在的列，行肯定是不同的
int n;
int sum;
 
void init()
{
    memset(visit,0,sizeof(visit));
    memset(q_w,0,sizeof(q_w));
    memset(q_b,0,sizeof(q_b));
    sum=0;
}
 
 
int place(int *q,int r,int c)//判断位置是否合法
{
    int i;
    int t_r,t_c;
    for(i=0;i<r;i++)
    {
        t_r=i;
        t_c=q[i];
        if(abs(r-t_r)==abs(c-t_c)||(c-t_c==0))//不在同一对角线，不在同一列
            return 0;
    }
    return 1;
}
 
void dfs_w(int r)//搜索白皇后
{
    if(r==n)
    {
        sum++;
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(visit[r][i]==0&&Map[r][i]==1&&place(q_w,r,i))
        {
            q_w[r]=i;
            dfs_w(r+1);
        }
    }
}
void dfs_b(int r)//搜索黑皇后
{
    if(r==n)//找到一个黑皇后的的满足条件
    {
        dfs_w(0);//搜索白皇后
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(Map[r][i]==1&&place(q_b,r,i))
        {
            q_b[r]=i;
            visit[r][i]=1;
            dfs_b(r+1);
            visit[r][i]=0;
        }
    }
}
void input()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>Map[i][j];
        }
    }
}
int main()
{
    init();
    input();
    dfs_b(0);
    cout<<sum<<endl;
    return 0;
}
 

