#include <stdio.h>
#include "string.h"
int main()
{  
    char a[21][20] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight",
        "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen",
        "seventeen", "eighteen", "nineteen", "twenty"};
    char b[6][20] = {"zero", "ten", "twenty","thirty", "forty", "fifty"};
    int h , m;
    scanf("%d",&h);
    scanf("%d",&m);
    if(m==0)
    {
        if( h<=20)
            printf("%s o'clock",a[h]);
        else
            printf("twenty %s o'clock",a[h%10]);      
    }
    else
    {
        if(h<=20)
        {
            if(m<=20)
                printf("%s %s",a[h],a[m]);
            else
                printf("%s %s %s",a[h],b[m/10],a[m%10]);     
        }
        else
        {
            if (m<=20)
                printf("twenty %s %s",a[h%10],a[m]);
            else
                printf("twenty %s %s %s",a[h%10],b[m/10],a[m%10]);       
        }     
    }       
}

