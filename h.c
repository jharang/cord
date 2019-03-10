C
//�� ����
#include <stdio.h>
#define SWAP(a,b)  {int t; t = a; a=b; b=t;}//a�� b�� ��ȯ
#define LCHILD(me)   (2*me +1)
#define RCHILD(me)  (LCHILD(me)+1)
#define PARENT(me)  ((me-1)/2)

void ViewArr(int *arr, int n);
void HeapSort(int *base, size_t n);
int main(void)
{
    int arr[10] = { 9,4,3,10,5,8,7,6,2,1 };   
    ViewArr(arr, 10);
    HeapSort(arr, 10);
    ViewArr(arr, 10);
    return 0;
}
void HeapSort(int *base, size_t n)
{    
    for (size_t i = 1; i<n; i++)
    { 
        int j = i;
        while (j>0)//��Ʈ�� �ƴϸ� �ݺ�
        {                    
            int pa = PARENT(j);//�θ� �ε����� ���ϱ�                 
            if (base[j]< base[pa]) //�θ𺸴� ũ��
            {
                SWAP(base[j], base[pa]);//�θ�� ��ȯ                
                ViewArr(base, n);
                j = pa;
            }            
            else
            {
                break;
            }
        }
    }
    SWAP(base[0], base[n - 1]);//��Ʈ�� ������ �ڼ� ��ȯ    
    ViewArr(base, n);
    n--;
    size_t me;
    size_t lc;
    size_t rc;
    while (n>1)//�ݺ�: n�� 1���� ũ�� 
    {
        me = 0;
        while (1)
        {
            lc = LCHILD(me);
            rc = RCHILD(me);
            if (lc >= n)//�ڽ��� ����
            {
                break;
            }
            if (rc == n)//���� �ڽĸ� ����
            {
                if (base[me]< base[lc])
                {
                    SWAP(base[me], base[lc]);                    
                    ViewArr(base, n);
                }
                break;
            }
            int bc = lc;
            if (base[lc]< base[rc])
            {
                bc = rc;
            }
            if (base[bc]> base[me])
            {                
                SWAP(base[bc], base[me]);                
                ViewArr(base, n);
                me = bc;
            }
            else
            {
                break;
            }
        }
        SWAP(base[0], base[n - 1]);//��Ʈ�� ������ �ڼ� ��ȯ        
        ViewArr(base, n);
        n--;
    }
}
void ViewArr(int *arr, int n)
{
    int i = 0;
    for (i = 0; i<n; i++)
    {
        printf("%2d ", arr[i]);
    }
    printf("\n");
}
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
86
87
88
89
90
91
92
93
//�� ����
#include <stdio.h>
#define SWAP(a,b)  {int t; t = a; a=b; b=t;}//a�� b�� ��ȯ
#define LCHILD(me)   (2*me +1)
#define RCHILD(me)  (LCHILD(me)+1)
#define PARENT(me)  ((me-1)/2)
 
void ViewArr(int *arr, int n);
void HeapSort(int *base, size_t n);
int main(void)
{
    int arr[10] = { 9,4,3,10,5,8,7,6,2,1 };   
    ViewArr(arr, 10);
    HeapSort(arr, 10);
    ViewArr(arr, 10);
    return 0;
}
void HeapSort(int *base, size_t n)
{    
    for (size_t i = 1; i<n; i++)
    { 
        int j = i;
        while (j>0)//��Ʈ�� �ƴϸ� �ݺ�
        {                    
            int pa = PARENT(j);//�θ� �ε����� ���ϱ�                 
            if (base[j]< base[pa]) //�θ𺸴� ũ��
            {
                SWAP(base[j], base[pa]);//�θ�� ��ȯ                
                ViewArr(base, n);
                j = pa;
            }            
            else
            {
                break;
            }
        }
    }
    SWAP(base[0], base[n - 1]);//��Ʈ�� ������ �ڼ� ��ȯ    
    ViewArr(base, n);
    n--;
    size_t me;
    size_t lc;
    size_t rc;
    while (n>1)//�ݺ�: n�� 1���� ũ�� 
    {
        me = 0;
        while (1)
        {
            lc = LCHILD(me);
            rc = RCHILD(me);
            if (lc >= n)//�ڽ��� ����
            {
                break;
            }
            if (rc == n)//���� �ڽĸ� ����
            {
                if (base[me]< base[lc])
                {
                    SWAP(base[me], base[lc]);                    
                    ViewArr(base, n);
                }
                break;
            }
            int bc = lc;
            if (base[lc]< base[rc])
            {
                bc = rc;
            }
            if (base[bc]> base[me])
            {                
                SWAP(base[bc], base[me]);                
                ViewArr(base, n);
                me = bc;
            }
            else
            {
                break;
            }
        }
        SWAP(base[0], base[n - 1]);//��Ʈ�� ������ �ڼ� ��ȯ        
        ViewArr(base, n);
        n--;
    }
}
void ViewArr(int *arr, int n)
{
    int i = 0;
    for (i = 0; i<n; i++)
    {
        printf("%2d ", arr[i]);
    }
    printf("\n");
}
