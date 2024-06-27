#include <stdio.h>

int main()
{
     int ara=0;
     int bosluq_sayi;
     scanf("%d",&bosluq_sayi);
     for(int i=0;i<bosluq_sayi;i++)
     {
        for (int j=0;j<i;j++)
        {
            printf("%c",' ');
            
        }
        printf("%c",'\\');
        printf("\n");
        
     }
        
}
