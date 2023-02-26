#include <stdio.h>

int main()
{
    char a[]= "ABCabcABC";
    int shift = 4;
    int len = sizeof(a)-1;
    for(int i=0;i<len;i++){
        printf("%c",a[i]);
    }
    printf("\n%d\n",shift);
    
    for(int i=0; i<len;i++){
        if (i+shift>=len)
            printf("%c",a[i+shift-len]);
        else
            printf("%c",a[i+shift]);
    }
    return 0;
}
