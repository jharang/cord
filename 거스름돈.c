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
 
    printf("����:%d, ���� ��:%d\n",money,value);
    printf("=== �Ž��� �� ===\n");
    if(remain>FTenTh)
    {
        ftenth = remain/FTenTh;
        remain = remain % FTenTh;
        printf("5������:%d��\n",ftenth);
    }
    if(remain>TenTh)
    {
        tenth = remain/TenTh;
        remain = remain%TenTh;
        printf("������:%d��\n",tenth);
    }
    if(remain>FTh)
    {
        fth = remain/FTh;
        remain = remain%FTh;
        printf("5õ����:%d��\n",fth);
    }
    if(remain>Thous)
    {
        thous = remain/Thous;
        remain = remain%Thous;
        printf("õ����:%d��\n",thous);
    }
    if(remain>FHun)
    {
        fhun = remain/FHun;
        remain = remain%FHun;
        printf("�������:%d��\n",fhun);
    }
    if(remain>Hun)
    {
        hun = remain/Hun;
        remain = remain%Hun;
        printf("�����:%d��\n",hun);
    }
    if(remain>Fifty)
    {
        fifty = remain/Fifty;
        remain = remain%Fifty;
        printf("���ʿ���:%d��\n",fifty);
    }
    if(remain>Ten)
    {
        ten = remain/Ten;
        remain = remain%Ten;
        printf("�ʿ���:%d��\n",ten);
    }
    if(remain>Five)
    {
        five = remain/Five;
        remain = remain%Five;
        printf("������:%d��\n",five);
    }
    if(remain>One)
    {
        one = remain/One;
        remain = remain%One;
        printf("�Ͽ���:%d��\n",one);
    }    
}
 
int main()
{
    Calculate(TenTh,1352);
    return 0;
}
