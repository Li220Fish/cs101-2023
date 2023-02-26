#include <stdio.h>

int main()
{
    char a[] = "AABBBCCCCddd";
    int len = sizeof(a)-1;
    int times[4] = {0,0,0,0};
    char word[4] = {'a','a','a','a'};
    char find;
    int num = 0, in = 0;
    find = a[0];
    for(int i=0;i<len;i++){
        if (find == a[i]){
            num+=1;
            times[in] = num;
            word[in] = a[i];
        }
        else{
            find = a[i];
            num = 1;
            in += 1;
        }
    }
    for(int i=0;i<4;i++){
        printf("%c%d",word[i],times[i]);
    }
    return 0;
}
