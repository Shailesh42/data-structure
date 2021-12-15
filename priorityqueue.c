#include<stdio.h>
#define max 40
int front =-1 ;
int rear =-1;
void insert(int *a,int *pre)
{
      int num ,p;
      if(front ==-1)
      front++;
      rear++;
      int i=0 ;
      printf("Enter the numbmer ad preference : ");
      scanf("%d%d",&num,&p);
      if(front != -1)
      while(pre[i]<=p)
       i++;
       for(int k=rear;k>i;k--)
       {
           pre[k] =pre[k-1];
           a[k] = a[k-1];
       }
       a[i]= num;
       pre[i]= p;
}
void delete(int *a,int *pre)
{
       front++;
}
void display(int *a,int *pre)
{      
      if(front ==-1)
      printf("Queue is empty \n ");
      else 
      {
      printf("The queue is :\ndata\tpreference\n ");
      for(int i=front;i<=rear;i++)
       printf("%d\t%d\n  ",a[i],pre[i]);
      printf("\n");
}
}
int main()
{
      int a[max],pre[max];
      printf("1.enqueue\n2.dequeue\n3.display the queue\n4.to exit\n");
      int o;
      while(1)
      {
       printf("Enter the option : ");
      scanf("%d",&o);
      switch(o)
      {
            case 1: insert(a,pre);
                    break;
            case 2: delete(a,pre);
                    break;
            case 3: display(a,pre);
                    break;
            case 4: return 0;
      }
      }
}