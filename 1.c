#include<stdio.h>
int main()
{
    int k =0;
    int i[k++];
    if(++k == 2)
    printf("%d ",k);
    return 0;
}