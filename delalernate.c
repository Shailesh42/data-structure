#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data ;
    struct node *next;
};
void add(struct node **start)
{   
    struct node *new,*ptr;
    printf("t ");
    ptr = *start;
    int  d;
    new= (struct node *)malloc(sizeof(struct node));
    printf("Enter the data : ");
    scanf("%d",&d);
    new->data = d;
    new->next = NULL;
    if(ptr == NULL)
    {
           *start = new ;
    }
    else 
    { while (ptr->next != NULL)
      ptr= ptr->next ;
      ptr->next = new;
    }
}
void display(struct node **start)
{
    struct node *ptr;
    ptr = *start;
    printf("the data : ");
    while(ptr != NULL)
    {
        printf("%d\t",ptr->data);
        ptr= ptr->next ;
    }
}
void deletealt(struct node **start)
{
    struct node *ptr, *del;
    ptr= *start ;
    *start= ptr->next ;
       free(ptr);
     ptr = *start;
         while((ptr != NULL) || (ptr->next != NULL))
    {  
         del = ptr->next;
        ptr->next = del->next;
        ptr= ptr->next;
        free(del);
        display(start);
    }
    
}
int main ()
{
    struct node *start=NULL;
    printf("1.Add a node \n2.delete the alternate data \n3.display \n");
    int option ;
       while(1)
    {
        printf("Enter the option : ");
        scanf("%d",&option);
       switch(option)
             {
                case 1: add(&start);
                        break;
                case 2: deletealt(&start);
                       break;
                case 3: display(&start);
                       break;
             }
    }
}