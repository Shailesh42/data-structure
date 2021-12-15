#include<stdio.h>
void input(int *ptr,int n,int m)
{   for(int i=0;i<m;i++)
     for(int j=0;j<n;j++)
     scanf("%d",((ptr+i)+j ));
      
}
void display(int m,int n,int a[][n])
{   printf("the elements are ");
    for(int i=0;i<m;i++)
        {  for(int j=0;j<n;j++)
      printf("%d",a[i][j] );
        printf("\n");}
}
int find(int m,int n,int a[][n])
{
    int x;
    printf("Enter the number : ");
    scanf("%d",&x);
    for(int i=0;i<m;i++)
     for(int j=0;j<n;j++)
     if(a[i][j]==x)
     {
         printf("YES , the %dth position \n",i+j+1);
         return 0;
         }
         printf("Not match !!!\n");
         return 0;        
}
int main()
{
    printf("Enter the size of matrix :");
    int m,n;
    scanf("%d%d",&m,&n);
    int a[m][n];
    int *ptr[m];
      for(int i=0;i<m;i++)
       ptr[i]=&a[i][n];
           printf("\n1.Enter the element\n2.display the element \n3.find the position \n4.for exit\n");
             while(1){
                   printf("choose a option : ");
    int o;
    scanf("%d",&o);
    switch(o)
    {
         case 1: input(*ptr,n,m);
                 break ;
        case 2:  display(m,n,a);
                 break;
        case 3:  find(m,n,a);
                 break;
       case 4 : return 0;
    } }
   return 0;     
}