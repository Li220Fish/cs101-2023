#include <stdio.h>

void change(int n){
    if (n == 10)
        printf("A");
    else if (n == 11)
        printf("B");
    else if (n == 12)
        printf("C");
    else if (n == 13)
        printf("D");
    else if (n == 14)
        printf("E");
    else if (n == 15)
        printf("F");
    else{
        printf("%d",n);
    }
}

int main()
{
    char a[] = "10001111";
    char b[] = "10011110";
    int c[] = {0,0};
    int num = 0, po = 8,m, in =0;
    int num2 = 0, po2 = 8;
    for (int i=0;i<8;i++){
        if (i <4){
            m = a[i]-48;
            num += m*po;
            //printf("%d %d\n",m*2,po);
            po /=2;
        }else{
            m = a[i]-48;
            num2 += m*po2;
            po2/=2;
        }
    }
    change(num);
    change(num2);
    printf("\n");
    num = 0, po = 8,m, in =0,num2 = 0, po2 = 8;
    for (int i=0;i<8;i++){
        if (i <4){
            m = b[i]-48;
            num += m*po;
            //printf("%d %d\n",m*2,po);
            po /=2;
        }else{
            m = b[i]-48;
            num2 += m*po2;
            po2/=2;
        }
    }
    change(num);
    change(num2);
}
