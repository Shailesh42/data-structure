#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void input(struct node **start)
{   
    printf("stop to inserting number enter -1 \n");
    printf("ENter the number : ");
    int num;
    scanf("%d",&num);
   while(num!= -1)
    {
      struct node *ptr,*new;
      ptr= *start;
      new = (struct node *)malloc(sizeof(struct node));
      new->data = num;
      new->next = NULL;
       while(ptr->next != NULL)
       ptr= ptr->next;
       ptr->next = new;
       printf("Enterthe number : ");
       scanf("%d",&num);
    }
}
void sorting(struct node **start)
{
    struct node *fptr ,*ptr;
    fptr = ptr= *start;
    for()
    while(ptr->next != NULL)
         {
        if(ptr->data >= ptr->next->data)
    }
     
}