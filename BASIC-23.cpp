#include <stdio.h> 
#define MAXS 20
int main()
{
    int n, text[20][20], i, j, s;
    scanf("%d", &n);
   
    if (n >= 2 && n <= 20)
    {   
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &text[i][j]);
            }
        }
        //对每一列遍历，如果好的数量大于一半，则j+1为好芯片 (因为ij是i对j测试，所以对列进行遍历)
        for (j = 0; j < n; j++)
        {
            s = 0;
            for (i = 0; i < n; i++)
            {
                s += text[i][j];               
            }
            if (s > n/2)   
                printf("%d ", j+1);
           
        }           
    }   
    return 0;
}
