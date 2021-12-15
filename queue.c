#include<stdio.h>
#define max 40
int front =-1 ;
int rear =-1;
void insert(int *a)
{
      int num;
      if(front ==-1)
      front++;
      rear++;
      printf("Enter the numbmer : ");
      scanf("%d",&num);
       a[rear]= num;
}
void delete(int *a)
{
       front++;
}
void display(int *a)
{      
      if(front ==-1)
      printf("Queue is empty \n");
      else 
      {
      printf("The queue is : ");
      for(int i=front;i<=rear;i++)
      printf("%d  ",a[i]);
      printf("\n");
}
}
int main()
{
      int a[max];
      printf("1.enqueue\n2.dequeue\n3.display the queue\n4.to exit\n");
      int o;
      while(1)
      {
       printf("Enter the option : ");
      scanf("%d",&o);
      switch(o)
      {
            case 1: insert(a);
                    break;
            case 2: delete(a);
                    break;
            case 3: display(a);
                    break;
            case 4: return 0;
      }
      }
}