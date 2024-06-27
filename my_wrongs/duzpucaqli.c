#include <stdio.h>

int main()
{
    
    int en,hundurluk;
    
    printf("%s","En=");
    scanf("%d",&en);
    printf("%s","Hundurluk=");
    scanf("%d",&hundurluk);
    for(int i=0;i < hundurluk;i++)
    {
        for (int j=0;j<en;j++)
        {
            printf("%c",'#');
            
        }
        printf("\n");
        
    }
        
}
