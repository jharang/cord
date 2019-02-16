#include <stdio.h>
 
typedef enum _MType MType;
enum _MType
{
    One=1, Five=5, Ten=10, Fifty=50,Hun=100,
    FHun=500,Thous=1000,FTh=5000, TenTh=10000,
    FTenTh=50000
};
void Calculate(MType money,int value)
{
    int remain = money - value;
    int ftenth=0,tenth=0, fth=0, thous=0;
    int fhun=0,hun=0, fifty=0, ten=0, five=0, one=0;
 
    printf("가격:%d, 받은 돈:%d\n",money,value);
    printf("=== 거스름 돈 ===\n");
    if(remain>FTenTh)
    {
        ftenth = remain/FTenTh;
        remain = remain % FTenTh;
        printf("5만원권:%d개\n",ftenth);
    }
    if(remain>TenTh)
    {
        tenth = remain/TenTh;
        remain = remain%TenTh;
        printf("만원권:%d개\n",tenth);
    }
    if(remain>FTh)
    {
        fth = remain/FTh;
        remain = remain%FTh;
        printf("5천원권:%d개\n",fth);
    }
    if(remain>Thous)
    {
        thous = remain/Thous;
        remain = remain%Thous;
        printf("천원권:%d개\n",thous);
    }
    if(remain>FHun)
    {
        fhun = remain/FHun;
        remain = remain%FHun;
        printf("오백원권:%d개\n",fhun);
    }
    if(remain>Hun)
    {
        hun = remain/Hun;
        remain = remain%Hun;
        printf("백원권:%d개\n",hun);
    }
    if(remain>Fifty)
    {
        fifty = remain/Fifty;
        remain = remain%Fifty;
        printf("오십원권:%d개\n",fifty);
    }
    if(remain>Ten)
    {
        ten = remain/Ten;
        remain = remain%Ten;
        printf("십원권:%d개\n",ten);
    }
    if(remain>Five)
    {
        five = remain/Five;
        remain = remain%Five;
        printf("오원권:%d개\n",five);
    }
    if(remain>One)
    {
        one = remain/One;
        remain = remain%One;
        printf("일원권:%d개\n",one);
    }    
}
 
int main()
{
    Calculate(TenTh,1352);
    return 0;
}
