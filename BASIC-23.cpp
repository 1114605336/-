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
        //��ÿһ�б���������õ���������һ�룬��j+1Ϊ��оƬ (��Ϊij��i��j���ԣ����Զ��н��б���)
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
