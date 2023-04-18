#include <stdio.h>
#include <time.h>

int moved=0;

void hanoi(int n, char A, char B, char C) {
    FILE* fp;
    fp = fopen("hanoi.txt","a");
    int hours, minutes, seconds, day, month, year, i=0;
    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
 
    hours = local->tm_hour;         
    minutes = local->tm_min;
    seconds = local->tm_sec;        
 
    day = local->tm_mday;           
    month = local->tm_mon + 1; 
    year = local->tm_year + 1900;
    if(n == 1) {
       moved++;
       printf("%d %d %02d%02d %d:%d:%d P%d from %c to %c\n",moved,year,month,day,hours,minutes,seconds, n, A, C);
       fprintf(fp,"%d %d %02d%02d %d:%d:%d P%d from %c to %c\n",moved,year,month,day,hours,minutes,seconds, n, A, C);
       fclose(fp);
    }
    else {
        
        hanoi(n-1, A, C, B);
        moved++;
        printf("%d %d %02d%02d %d:%d:%d P%d from %c to %c\n",moved,year,month,day,hours,minutes,seconds, n, A, C);
        fprintf(fp,"%d %d %02d%02d %d:%d:%d P%d from %c to %c\n",moved,year,month,day,hours,minutes,seconds, n, A, C);
        fclose(fp);
        hanoi(n-1, B, A, C);
        
    }
}

int main() {
    
    hanoi(20, 'A', 'B', 'C');
    printf("\nTotal moved %d steps",moved);
    
    return 0;
}
