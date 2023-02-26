#include <stdio.h>

int main()
{
    char a[] ="A3B2C4A9";
    int len = sizeof(a)-1;
    char word;
    int num;
    for (int i=0;i<len;i++){
        if (i%2){
            num = a[i]-48;
            for(int j=0;j<num;j++)
            printf("%c",word);
        }else{
            word = a[i];
        }
    }
    return 0;
}
