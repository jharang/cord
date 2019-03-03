#include <stdio.h>
#include <time.h>
 
void Hanoi(const char *src, const char *use, const char *dest, int n)
{
    if(n<=0)
    {
        return;
    }	
    Hanoi(src,dest,use,n-1);
    printf("move %s -> %s\n",src,dest);
    Hanoi(use,src,dest,n-1);
}
int main()
{
    clock_t st,et;
    st = clock();
    Hanoi("a","b","c",5);
    et = clock();
    printf("%d개의 돌 옮기기:%d\n",5,et-st);
    st = clock();
    Hanoi("a","b","c",7);
    et = clock();
    printf("%d개의 돌 옮기기:%d\n",7,et-st);
    return 0;
}
